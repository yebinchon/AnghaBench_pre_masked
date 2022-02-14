
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int EXLE; int IOSEL; scalar_t__ DDR; scalar_t__ PDR; int SF; int SR; scalar_t__ OREG; int COMREG; scalar_t__ IREG; } ;
struct TYPE_4__ {int member_1; int member_0; } ;
typedef int SmpcInternal ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_2(FILE *VAR_3, int VAR_4, int VAR_5)
{
   IOCheck_struct VAR_6 = { 0, 0 };
   int VAR_7 = sizeof(SmpcInternal) - 8;


   FUNC_1(&VAR_6, (void *)VAR_2->IREG, sizeof(u8), 7, VAR_3);
   FUNC_1(&VAR_6, (void *)&VAR_2->COMREG, sizeof(u8), 1, VAR_3);
   FUNC_1(&VAR_6, (void *)VAR_2->OREG, sizeof(u8), 32, VAR_3);
   FUNC_1(&VAR_6, (void *)&VAR_2->SR, sizeof(u8), 1, VAR_3);
   FUNC_1(&VAR_6, (void *)&VAR_2->SF, sizeof(u8), 1, VAR_3);
   FUNC_1(&VAR_6, (void *)VAR_2->PDR, sizeof(u8), 2, VAR_3);
   FUNC_1(&VAR_6, (void *)VAR_2->DDR, sizeof(u8), 2, VAR_3);
   FUNC_1(&VAR_6, (void *)&VAR_2->IOSEL, sizeof(u8), 1, VAR_3);
   FUNC_1(&VAR_6, (void *)&VAR_2->EXLE, sizeof(u8), 1, VAR_3);


   if (VAR_4 == 1)
   {


      if ((VAR_5 - 48) == VAR_7)
         FUNC_1(&VAR_6, (void *)VAR_1, VAR_7, 1, VAR_3);
      else if ((VAR_5 - 48) == 24)
         FUNC_1(&VAR_6, (void *)VAR_1, 24, 1, VAR_3);
      else
         FUNC_0(VAR_3, VAR_5 - 48, VAR_0);
   }
   else if (VAR_4 == 2)
      FUNC_1(&VAR_6, (void *)VAR_1, VAR_7, 1, VAR_3);
   else
      FUNC_1(&VAR_6, (void *)VAR_1, sizeof(SmpcInternal), 1, VAR_3);



   return VAR_5;
}
