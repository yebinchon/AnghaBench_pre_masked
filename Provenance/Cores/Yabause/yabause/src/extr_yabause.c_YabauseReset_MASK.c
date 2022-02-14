
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ emulatebios; scalar_t__ usequickload; scalar_t__ playing_ssf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;

void FUNC_4(void) {

   if (VAR_1.playing_ssf)
      VAR_1.playing_ssf = 0;

   FUNC_2();

   if (VAR_1.usequickload || VAR_1.emulatebios)
   {
      if (FUNC_1() != 0)
      {
         if (VAR_1.emulatebios)
            FUNC_0(VAR_0, FUNC_3("Game"));
         else
            FUNC_2();
      }
   }
}
