
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int start; int end; int offset; TYPE_4__* fd; } ;
typedef TYPE_3__ track_t ;
typedef int tmp_name ;
typedef int tmp_ext ;
struct TYPE_15__ {int size; } ;
typedef TYPE_4__ pm_file ;
typedef int exts ;
struct TYPE_16__ {int track_count; TYPE_2__* tracks; } ;
typedef TYPE_5__ cue_data_t ;
struct TYPE_12__ {int last; int end; TYPE_3__* tracks; } ;
struct TYPE_17__ {TYPE_1__ toc; } ;
struct TYPE_13__ {char* fname; int type; int sector_offset; int sector_xlength; scalar_t__ pregap; } ;
struct TYPE_11__ {int cdda_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int) ;
 TYPE_10__* VAR_4 ;
 TYPE_9__ VAR_5 ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 TYPE_4__* FUNC_6 (char const*) ;
 int FUNC_7 (char*,int,char const*,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*) ;

int FUNC_12(const char *VAR_6, int *VAR_7)
{
  static const char *VAR_8[] = {
    "%02d.mp3", " %02d.mp3", "-%02d.mp3", "_%02d.mp3", " - %02d.mp3",
    "%d.mp3", " %d.mp3", "-%d.mp3", "_%d.mp3", " - %d.mp3",
  };
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  int VAR_16, VAR_17, VAR_18;
  char VAR_19[256], VAR_20[10], VAR_21[10];
  track_t *VAR_22 = VAR_5.toc.tracks;
  cue_data_t *VAR_23 = ((void*)0);
  pm_file *VAR_24;

  if (&FUNC_0 != ((void*)0))
    FUNC_0(VAR_6, 1);

  VAR_4->cdda_type = VAR_2;


  VAR_23 = FUNC_2(VAR_6);
  if (VAR_23 != ((void*)0)) {
    VAR_6 = VAR_23->tracks[1].fname;
    *VAR_7 = VAR_23->tracks[1].type;
  }

  VAR_24 = FUNC_6(VAR_6);
  if (VAR_24 == ((void*)0))
  {
    if (VAR_23 != ((void*)0))
      FUNC_1(VAR_23);
    return -1;
  }
  VAR_22[0].fd = VAR_24;

  if (*VAR_7 == VAR_0)
       VAR_18 = VAR_24->size >>= 11;
  else VAR_18 = VAR_24->size /= 2352;


  VAR_22[0].start = 0;
  VAR_22[0].end = VAR_18;
  VAR_22[0].offset = 0;

  FUNC_8(VAR_20, sizeof(VAR_20), 0);
  FUNC_3(VAR_3, "Track  1: %s %9i DATA  %s",
    VAR_20, VAR_22[0].end, VAR_6);

  VAR_12 = VAR_18;

  if (VAR_23 != ((void*)0))
  {
    if (VAR_23->tracks[2].fname == ((void*)0)) {

      VAR_12 = VAR_22[0].end = VAR_23->tracks[2].sector_offset;
    }
    VAR_9 = 100 / VAR_23->track_count + 1;

    for (VAR_11 = 2; VAR_11 <= VAR_23->track_count; VAR_11++)
    {
      if (&FUNC_0 != ((void*)0))
        FUNC_0(VAR_6, VAR_9 * VAR_11);

      VAR_13 = VAR_11 - 1;
      VAR_12 += VAR_23->tracks[VAR_11].pregap;
      if (VAR_23->tracks[VAR_11].type == VAR_1) {
        VAR_15 = FUNC_4(VAR_23->tracks[VAR_11].fname, VAR_13);
        if (VAR_15 < 0)
          break;
        VAR_14 = VAR_15;
      }
      else if (VAR_23->tracks[VAR_11].fname != ((void*)0))
      {
        pm_file *VAR_25 = FUNC_6(VAR_23->tracks[VAR_11].fname);
        if (VAR_25 != ((void*)0))
        {

          VAR_22[VAR_13].fd = VAR_25;
          VAR_22[VAR_13].offset = VAR_23->tracks[VAR_11].sector_offset;
          VAR_14 = VAR_25->size / 2352;
        }
        else
        {
          FUNC_3(VAR_3, "track %2i (%s): can't determine length",
            VAR_11, VAR_23->tracks[VAR_11].fname);
          VAR_22[VAR_13].offset = 0;
          VAR_14 = 2*75;
        }
      }
      else
      {
        if (VAR_11 < VAR_23->track_count)
          VAR_14 = VAR_23->tracks[VAR_11+1].sector_offset -
            VAR_23->tracks[VAR_11].sector_offset;
        else
          VAR_14 = VAR_18 - VAR_23->tracks[VAR_11].sector_offset;
        VAR_22[VAR_13].offset = VAR_23->tracks[VAR_11].sector_offset;
      }

      if (VAR_23->tracks[VAR_11].sector_xlength != 0)

        VAR_14 = VAR_23->tracks[VAR_11].sector_xlength;

      VAR_4->cdda_type = VAR_23->tracks[VAR_11].type;

      VAR_22[VAR_13].start = VAR_12;
      VAR_12 += VAR_14;
      VAR_22[VAR_13].end = VAR_12;

      FUNC_8(VAR_20, sizeof(VAR_20), VAR_22[VAR_13].start);
      FUNC_3(VAR_3, "Track %2i: %s %9i AUDIO %s",
        VAR_11, VAR_20, VAR_14, VAR_23->tracks[VAR_11].fname);
    }
    goto finish;
  }


  VAR_16 = FUNC_10(VAR_6);
  if (VAR_16 >= sizeof(VAR_19))
    VAR_16 = sizeof(VAR_19) - 1;

  for (VAR_11 = 2, VAR_9 = 0, VAR_17 = 0; VAR_9 < 100 && VAR_17 < 4; VAR_9++)
  {
    if (&FUNC_0 != ((void*)0) && VAR_9 > 1)
      FUNC_0(VAR_6, VAR_9 + (100-VAR_9)*VAR_17/4);

    for (VAR_10 = 0; VAR_10 < sizeof(VAR_8)/sizeof(char *); VAR_10++)
    {
      int VAR_26;
      char *VAR_27;

      VAR_13 = VAR_11 - 1;

      FUNC_7(VAR_20, sizeof(VAR_20), VAR_8[VAR_10], VAR_9);
      VAR_26 = FUNC_10(VAR_20);
      FUNC_11(VAR_21, VAR_20);

      FUNC_5(VAR_19, VAR_6, VAR_16 + 1);
      VAR_27 = VAR_19 + VAR_16 - 4;

      FUNC_9(VAR_27, VAR_20);
      VAR_15 = FUNC_4(VAR_19, VAR_13);
      if (VAR_15 <= 0) {
        FUNC_9(VAR_27, VAR_21);
        VAR_15 = FUNC_4(VAR_19, VAR_13);
      }

      if (VAR_15 <= 0 && VAR_9 > 1 && VAR_16 > VAR_26) {
        VAR_27 = VAR_19 + VAR_16 - VAR_26;
        FUNC_9(VAR_27, VAR_20);
        VAR_15 = FUNC_4(VAR_19, VAR_13);
        if (VAR_15 <= 0) {
          FUNC_9(VAR_27, VAR_21);
          VAR_15 = FUNC_4(VAR_19, VAR_13);
        }
      }

      if (VAR_15 > 0)
      {
        VAR_14 = VAR_15;
        VAR_22[VAR_13].start = VAR_12;
        VAR_12 += VAR_14;
        VAR_22[VAR_13].end = VAR_12;

        VAR_4->cdda_type = VAR_1;

        FUNC_8(VAR_20, sizeof(VAR_20), VAR_22[VAR_13].start);
        FUNC_3(VAR_3, "Track %2i: %s %9i AUDIO - %s",
          VAR_11, VAR_20, VAR_14, VAR_19);

        VAR_11++;
        VAR_17 = 0;
        break;
      }
    }
    if (VAR_15 <= 0 && VAR_9 > 1)
      VAR_17++;
  }

finish:
  VAR_5.toc.last = VAR_11 - 1;
  VAR_5.toc.end = VAR_12;

  FUNC_8(VAR_20, sizeof(VAR_20), VAR_5.toc.end);
  FUNC_3(VAR_3, "End CD -  %s\n", VAR_20);

  if (&FUNC_0 != ((void*)0))
    FUNC_0(VAR_6, 100);

  if (VAR_23 != ((void*)0))
    FUNC_1(VAR_23);

  return 0;
}
