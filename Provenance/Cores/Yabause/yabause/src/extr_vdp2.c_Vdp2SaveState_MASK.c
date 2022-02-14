
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vdp2Internal_struct ;
typedef int Vdp2 ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_3(FILE *VAR_4)
{
   int VAR_5;
   IOCheck_struct VAR_6 = { 0, 0 };

   VAR_5 = FUNC_1(VAR_4, "VDP2", 1);


   FUNC_2(&VAR_6, (void *)VAR_3, sizeof(Vdp2), 1, VAR_4);


   FUNC_2(&VAR_6, (void *)VAR_2, 0x80000, 1, VAR_4);


   FUNC_2(&VAR_6, (void *)VAR_0, 0x1000, 1, VAR_4);


   FUNC_2(&VAR_6, (void *)&VAR_1, sizeof(Vdp2Internal_struct), 1, VAR_4);

   return FUNC_0(VAR_4, VAR_5);
}
