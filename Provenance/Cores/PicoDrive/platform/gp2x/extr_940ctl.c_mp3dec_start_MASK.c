
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mp3_len; int mp3_offs; scalar_t__ mp3_buffsel; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*) ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_8 (int ) ;

int FUNC_9(FILE *VAR_12, int VAR_13)
{
 if (!(VAR_5 & VAR_4)) {

  return -1;
 }

 if (VAR_8 != VAR_12)
 {
  if (&FUNC_1 != ((void*)0))
  {
   FUNC_5(VAR_12, 0, VAR_6);
   if (FUNC_6(VAR_12) > 2*1024*1024)
    FUNC_1("Loading MP3...");
  }
  FUNC_5(VAR_12, 0, VAR_7);
  FUNC_4(VAR_9, 1, VAR_3, VAR_12);
  if (!FUNC_3(VAR_12))
   FUNC_7("Warning: mp3 was too large, not all data loaded.\n");
  VAR_11->mp3_len = FUNC_6(VAR_12);
  VAR_8 = VAR_12;



  if (FUNC_0(VAR_1))
   FUNC_8(VAR_1);
  FUNC_2(VAR_0);
  VAR_10 = 1;
 }

 VAR_11->mp3_offs = VAR_13;
 VAR_11->mp3_buffsel = 0;

 FUNC_2(VAR_2);
 if (FUNC_0(VAR_2))
  FUNC_8(VAR_2);


 if (VAR_11->mp3_offs < VAR_11->mp3_len) {
  FUNC_2(VAR_1);
 }

 return 0;
}
