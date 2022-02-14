
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_3__ {int sector_size; int format_type; int pregap_offset; int sector_offset; int sector_count; int physical_offset; } ;
typedef TYPE_1__ cd_track_struct ;
struct TYPE_4__ {int first_track; int last_track; int num_physical_tracks; scalar_t__ last_seek_track; TYPE_1__** logical_tracks; int * bin_file; TYPE_1__* physical_tracks; scalar_t__ num_sectors; } ;
typedef int FILE ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,int *) ;
 void* FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,int ,int ) ;
 void* FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,...) ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int*,...) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (char*,char) ;

s32 FUNC_18(char *VAR_6)
{
  FILE *VAR_7 = FUNC_3(VAR_6, "rb");

  FUNC_9("loading cue file %s\n", VAR_6);

  if(VAR_7)
  {
    char VAR_8[256];
    char *VAR_9;
    char *VAR_10;

    char VAR_11[VAR_1];
    char *VAR_12;
    s32 VAR_13 = -1;
    u32 VAR_14;
    u32 VAR_15 = 0;
    u32 VAR_16;

    cd_track_struct *VAR_17 = ((void*)0);

    u32 VAR_18;


    VAR_10 = FUNC_2(VAR_8, 255, VAR_7);
    if (VAR_10 == ((void*)0)) goto invalid;
    VAR_12 = VAR_8 + FUNC_16(VAR_8) - 1;
    VAR_12 = FUNC_12(VAR_12);
    if (VAR_12 <= VAR_8) goto invalid;
    VAR_12 = FUNC_10(VAR_12);
    if (VAR_12 <= VAR_8) goto invalid;
    VAR_12 = FUNC_12(VAR_12);
    if (VAR_12 <= VAR_8) goto invalid;

    if(*VAR_12 == '"')
    {
      VAR_12[0] = 0;
      VAR_12 = FUNC_17(VAR_8, '"');
      if (VAR_12 == ((void*)0)) goto invalid;
      FUNC_15(VAR_11, VAR_12 + 1);
    }
    else
    {

      VAR_12[1] = 0;
      VAR_12 = FUNC_17(VAR_8, ' ');
      if (VAR_12 == ((void*)0)) goto invalid;
      FUNC_15(VAR_11, VAR_12 + 1);
    }


    VAR_12 = FUNC_17(VAR_6, VAR_0);

    if(VAR_12)
    {
      char VAR_19[VAR_1];
      FUNC_6(VAR_19, VAR_1);

      *VAR_12 = 0;

      FUNC_0(VAR_6);




      VAR_5.bin_file = FUNC_3(VAR_11, "rb");


      *VAR_12 = VAR_0;
      FUNC_0(VAR_19);
    }
    else
    {



      VAR_5.bin_file = FUNC_3(VAR_11, "rb");

    }

    if (VAR_5.bin_file == ((void*)0))
    {
      FUNC_9("can't open bin file: \"%s\"\n", VAR_11);
      return -1;
    }
    else
    {
      FUNC_9("found bin file: %s\n", VAR_11);
    }

    for(VAR_18 = 0; VAR_18 < 100; VAR_18++)
    {
      VAR_5.logical_tracks[VAR_18] = ((void*)0);
    }

    VAR_5.first_track = -1;
    VAR_5.last_track = -1;
    VAR_5.num_physical_tracks = 0;
    VAR_5.num_sectors = 0;


    while(FUNC_2(VAR_8, 256, VAR_7))
    {

      VAR_9 = FUNC_11(VAR_8);


      switch(VAR_9[0])
      {

        case 'T':
        {
          u32 VAR_20;
          char VAR_21[64];

          FUNC_13(VAR_9, "TRACK %d %s", &VAR_20,
           VAR_21);

          VAR_13++;
          VAR_17 =
           VAR_5.physical_tracks + VAR_13;

          VAR_17->sector_size = 2352;

          if(!FUNC_14(VAR_21, "AUDIO"))
          {
            VAR_17->format_type = 0;
            VAR_17->sector_size = 2352;
          }

          if(!FUNC_14(VAR_21, "MODE1/2352"))
          {
            VAR_17->format_type = 4;
            VAR_17->sector_size = 2352;
          }

          if(!FUNC_14(VAR_21, "MODE1/2048"))
          {
            VAR_17->format_type = 4;
            VAR_17->sector_size = 2048;
          }

          VAR_5.logical_tracks[VAR_20] = VAR_17;
          VAR_5.num_physical_tracks++;

          if((VAR_5.first_track == -1) ||
           (VAR_20 < VAR_5.first_track))
          {
            VAR_5.first_track = VAR_20;
          }

          if((VAR_5.last_track == -1) ||
           (VAR_20 > VAR_5.last_track))
          {
            VAR_5.last_track = VAR_20;
          }

          break;
        }


        case 'P':
        {
          u32 VAR_22, VAR_23, VAR_24;

          FUNC_13(VAR_9, "PREGAP %d:%d:%d", &VAR_22,
           &VAR_23, &VAR_24);

          VAR_15 += VAR_24 + (VAR_23 * 75) + (VAR_22 * 75 * 60);
          break;
        }


        case 'I':
        {
          u32 VAR_25;
          u32 VAR_26, VAR_27, VAR_28;
          u32 VAR_29;

          FUNC_13(VAR_9, "INDEX %d %d:%d:%d", &VAR_25,
           &VAR_26, &VAR_27, &VAR_28);

          VAR_29 = VAR_28 + (VAR_27 * 75) + (VAR_26 * 75 * 60);

          if(VAR_25 == 1)
          {
            VAR_17->pregap_offset = VAR_15;
            VAR_17->sector_offset = VAR_29;
          }

          break;
        }
      }
    }

    VAR_14 = 0;

    for(VAR_18 = 0; VAR_18 < VAR_5.num_physical_tracks - 1; VAR_18++)
    {
      VAR_5.physical_tracks[VAR_18].sector_count =
       VAR_5.physical_tracks[VAR_18 + 1].sector_offset -
       VAR_5.physical_tracks[VAR_18].sector_offset;

      VAR_5.physical_tracks[VAR_18].physical_offset = VAR_14;
      VAR_14 += (VAR_5.physical_tracks[VAR_18].sector_count *
       VAR_5.physical_tracks[VAR_18].sector_size);

      VAR_5.physical_tracks[VAR_18].sector_offset +=
       VAR_5.physical_tracks[VAR_18].pregap_offset;

      VAR_5.num_sectors += VAR_5.physical_tracks[VAR_18].sector_count;
    }





    FUNC_4(VAR_5.bin_file, 0, VAR_3);
    VAR_16 = FUNC_5(VAR_5.bin_file);
    FUNC_4(VAR_5.bin_file, 0, VAR_4);



    VAR_5.physical_tracks[VAR_18].physical_offset = VAR_14;
    VAR_5.physical_tracks[VAR_18].sector_offset +=
     VAR_5.physical_tracks[VAR_18].pregap_offset;
    VAR_5.physical_tracks[VAR_18].sector_count =
     (VAR_16 - VAR_14) /
     VAR_5.physical_tracks[VAR_18].sector_size;

    VAR_5.num_sectors += VAR_5.physical_tracks[VAR_18].sector_count;

    FUNC_9("finished loading cue %s\n", VAR_6);
    FUNC_9("bin file: %s (%p)\n", VAR_11, VAR_5.bin_file);
    FUNC_9("first track: %d, last track: %d\n", VAR_5.first_track,
     VAR_5.last_track);

    for(VAR_18 = VAR_5.first_track; VAR_18 <= VAR_5.last_track; VAR_18++)
    {
      FUNC_9("track %d (%p):\n", VAR_18, VAR_5.logical_tracks[VAR_18]);
      if(VAR_5.logical_tracks[VAR_18] == ((void*)0))
      {
        FUNC_9("  (invalid)\n");
      }
      else
      {
        FUNC_9("  physical offset 0x%x\n",
         VAR_5.logical_tracks[VAR_18]->physical_offset);
        FUNC_9("  sector offset 0x%x\n",
         VAR_5.logical_tracks[VAR_18]->sector_offset);
        FUNC_9("  sector size %d\n",
         VAR_5.logical_tracks[VAR_18]->sector_size);
      }
    }

    VAR_5.last_seek_track = 0;

    FUNC_1(VAR_7);
    return 0;
  }

  return -1;
invalid:
  FUNC_9("error: invalid/unsupported .cue file\n");
  return -1;
}
