
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


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_3(FILE *VAR_2)
{
   int VAR_3;
   IOCheck_struct VAR_4 = { 0, 0 };

   VAR_3 = FUNC_1(VAR_2, "SMPC", 3);


   FUNC_2(&VAR_4, (void *)VAR_1->IREG, sizeof(u8), 7, VAR_2);
   FUNC_2(&VAR_4, (void *)&VAR_1->COMREG, sizeof(u8), 1, VAR_2);
   FUNC_2(&VAR_4, (void *)VAR_1->OREG, sizeof(u8), 32, VAR_2);
   FUNC_2(&VAR_4, (void *)&VAR_1->SR, sizeof(u8), 1, VAR_2);
   FUNC_2(&VAR_4, (void *)&VAR_1->SF, sizeof(u8), 1, VAR_2);
   FUNC_2(&VAR_4, (void *)VAR_1->PDR, sizeof(u8), 2, VAR_2);
   FUNC_2(&VAR_4, (void *)VAR_1->DDR, sizeof(u8), 2, VAR_2);
   FUNC_2(&VAR_4, (void *)&VAR_1->IOSEL, sizeof(u8), 1, VAR_2);
   FUNC_2(&VAR_4, (void *)&VAR_1->EXLE, sizeof(u8), 1, VAR_2);


   FUNC_2(&VAR_4, (void *)VAR_0, sizeof(SmpcInternal), 1, VAR_2);



   return FUNC_0(VAR_2, VAR_3);
}
