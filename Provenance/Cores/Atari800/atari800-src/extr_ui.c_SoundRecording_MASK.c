
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_2__ {int (* fMessage ) (char*,int) ;} ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
 if (!FUNC_2()) {
  int VAR_1 = 0;
  do {
   char VAR_2[32];
   FUNC_5(VAR_2, sizeof(VAR_2), "atari%03d.wav", VAR_1);
   if (!FUNC_4(VAR_2)) {

    FUNC_0(FUNC_3(VAR_2)
     ? "Recording sound to file \"%s\""
     : "Can't write to file \"%s\"", VAR_2);
    return;
   }
  } while (++VAR_1 < 1000);
  VAR_0->fMessage("All atariXXX.wav files exist!", 1);
 }
 else {
  FUNC_1();
  VAR_0->fMessage("Recording stopped", 1);
 }
}
