
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c_lflag; int c_iflag; scalar_t__* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;

bool FUNC_3(void)
{
   if (VAR_14 != 0xffff)
      return 0;

   if (FUNC_1(0, &VAR_15) < 0)
      return 0;

   VAR_13 = VAR_15;
   VAR_13.c_lflag &= ~(VAR_0 | VAR_1 | VAR_5);
   VAR_13.c_iflag &= ~(VAR_6 | VAR_3 | VAR_2 | VAR_4 | VAR_7 | VAR_8);
   VAR_13.c_cc[VAR_11] = 0;
   VAR_13.c_cc[VAR_12] = 0;


   if (FUNC_0(0, VAR_9, &VAR_14) < 0)
      return 0;

   if (FUNC_2(0, VAR_10, &VAR_13) < 0)
      return 0;

   return 1;
}
