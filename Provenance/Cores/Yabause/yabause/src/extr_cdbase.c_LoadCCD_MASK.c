
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ctl_addr; int fad_start; int fad_end; int file_offset; int sector_size; int file_size; scalar_t__ interleaved_sub; scalar_t__ file_id; int * fp; } ;
typedef TYPE_1__ track_info_struct ;
typedef int session_info_struct ;
struct TYPE_10__ {TYPE_4__* dict; } ;
typedef TYPE_2__ ccd_struct ;
struct TYPE_12__ {int session_num; TYPE_4__* session; } ;
struct TYPE_11__ {int fad_start; int track_num; int fad_end; TYPE_1__* track; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 void* FUNC_2 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char const*) ;
 TYPE_6__ VAR_4 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *,int ,int ) ;
 TYPE_4__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char const*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static int FUNC_13(const char *VAR_5, FILE *VAR_6)
{
 int VAR_7;
 ccd_struct VAR_8;
 int VAR_9;
 char VAR_10[512];
 char *VAR_11;
 FILE *VAR_12;

 FUNC_11(VAR_10, VAR_5);
 VAR_11 = FUNC_12(VAR_10, '.');
 FUNC_11(VAR_11, ".img");
 VAR_12 = FUNC_5(VAR_10, "rb");

 if (VAR_12 == ((void*)0))
 {
  FUNC_3(VAR_1, VAR_10);
  return -1;
 }

 FUNC_7(VAR_6, 0, VAR_0);


 if (FUNC_1(VAR_6, &VAR_8))
 {
  FUNC_4(VAR_12);
  FUNC_3(VAR_1, VAR_5);
  return -1;
 }

 VAR_9 = FUNC_0(&VAR_8, "DISC", "TocEntries");
 VAR_4.session_num = FUNC_0(&VAR_8, "DISC", "Sessions");
 if (VAR_4.session_num != 1)
 {
  FUNC_4(VAR_12);
  FUNC_3(VAR_3, "Sessions more than 1 are unsupported");
  return -1;
 }

 VAR_4.session = FUNC_8(sizeof(session_info_struct) * VAR_4.session_num);
 if (VAR_4.session == ((void*)0))
 {
  FUNC_4(VAR_12);
  FUNC_6(VAR_8.dict);
  FUNC_3(VAR_2, ((void*)0));
  return -1;
 }

 if (FUNC_0(&VAR_8, "DISC", "DataTracksScrambled"))
 {
  FUNC_4(VAR_12);
  FUNC_6(VAR_8.dict);
  FUNC_6(VAR_4.session);
  FUNC_3(VAR_3, "CCD Scrambled Tracks not supported");
  return -1;
 }


 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
 {
  char VAR_13[64];
  int VAR_14;

  FUNC_10(VAR_13, "Entry %d", VAR_7);
  VAR_14 = FUNC_0(&VAR_8, VAR_13, "Point");

  if (VAR_14 == 0xA1)
  {
   int VAR_15 = FUNC_0(&VAR_8, VAR_13, "Session");

   VAR_4.session[VAR_15-1].fad_start = 150;
   VAR_4.session[VAR_15-1].track_num=FUNC_0(&VAR_8, VAR_13, "PMin");;
   VAR_4.session[VAR_15-1].track = (track_info_struct *)FUNC_8(VAR_4.session[VAR_15-1].track_num * sizeof(track_info_struct));
   if (VAR_4.session[VAR_15-1].track == ((void*)0))
   {
    FUNC_4(VAR_12);
    FUNC_6(VAR_8.dict);
    FUNC_6(VAR_4.session);
    FUNC_3(VAR_2, ((void*)0));
    return -1;
   }
   FUNC_9(VAR_4.session[VAR_15-1].track, 0, VAR_4.session[VAR_15-1].track_num * sizeof(track_info_struct));
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
 {
  char VAR_16[64];
  int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
  int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

  FUNC_10(VAR_16, "Entry %d", VAR_7);

  VAR_17 = FUNC_0(&VAR_8, VAR_16, "Session");
  VAR_18 = FUNC_0(&VAR_8, VAR_16, "Point");
  VAR_19 = FUNC_0(&VAR_8, VAR_16, "ADR");
  VAR_20 = FUNC_0(&VAR_8, VAR_16, "Control");
  VAR_21 = FUNC_0(&VAR_8, VAR_16, "TrackNo");
  VAR_22 = FUNC_0(&VAR_8, VAR_16, "AMin");
  VAR_23 = FUNC_0(&VAR_8, VAR_16, "ASec");
  VAR_24 = FUNC_0(&VAR_8, VAR_16, "AFrame");
  VAR_25 = FUNC_0(&VAR_8, VAR_16, "ALBA");
  VAR_26 = FUNC_0(&VAR_8, VAR_16, "Zero");
  VAR_27 = FUNC_0(&VAR_8, VAR_16, "PMin");
  VAR_28 = FUNC_0(&VAR_8, VAR_16, "PSec");
  VAR_29 = FUNC_0(&VAR_8, VAR_16, "PFrame");
  VAR_30 = FUNC_0(&VAR_8, VAR_16, "PLBA");

  if(VAR_18 >= 1 && VAR_18 <= 99)
  {
   track_info_struct *VAR_31=&VAR_4.session[VAR_17-1].track[VAR_18-1];
   VAR_31->ctl_addr = (VAR_20 << 4) | VAR_19;
   VAR_31->fad_start = FUNC_2(VAR_27, VAR_28, VAR_29);
   if (VAR_18 >= 2)
      VAR_4.session[VAR_17-1].track[VAR_18-2].fad_end = VAR_31->fad_start-1;
   VAR_31->file_offset = VAR_30*2352;
   VAR_31->sector_size = 2352;
   VAR_31->fp = VAR_12;
   VAR_31->file_size = (VAR_31->fad_end+1-VAR_31->fad_start)*2352;
   VAR_31->file_id = 0;
   VAR_31->interleaved_sub = 0;
  }
  else if (VAR_18 == 0xA2)
  {
   VAR_4.session[VAR_17-1].fad_end = FUNC_2(VAR_27, VAR_28, VAR_29);
   VAR_4.session[VAR_17-1].track[VAR_4.session[VAR_17-1].track_num-1].fad_end = VAR_4.session[VAR_17-1].fad_end;
  }
 }

 FUNC_4(VAR_6);

 return 0;
}
