
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ s16 ;
struct TYPE_3__ {int systemclipY2; scalar_t__ systemclipX2; } ;
typedef TYPE_1__ Vdp1 ;


 scalar_t__ VAR_0 ;

int FUNC_0(s16 VAR_1, s16 VAR_2, s16 VAR_3, s16 VAR_4, s16 VAR_5, s16 VAR_6, s16 VAR_7, s16 VAR_8, Vdp1* VAR_9)
{
   int VAR_10 = VAR_9->systemclipY2;

   if (VAR_0)
      VAR_10 *= 2;


   if ((VAR_1 < 0) &&
      (VAR_3 < 0) &&
      (VAR_5 < 0) &&
      (VAR_7 < 0))
      return 1;


   if ((VAR_1 > VAR_9->systemclipX2) &&
      (VAR_3 > VAR_9->systemclipX2) &&
      (VAR_5 > VAR_9->systemclipX2) &&
      (VAR_7 > VAR_9->systemclipX2))
      return 1;


   if ((VAR_2 < 0) &&
      (VAR_4 < 0) &&
      (VAR_6 < 0) &&
      (VAR_8 < 0))
      return 1;


   if ((VAR_2 > VAR_10) &&
      (VAR_4 > VAR_10) &&
      (VAR_6 > VAR_10) &&
      (VAR_8 > VAR_10))
      return 1;

   return 0;
}
