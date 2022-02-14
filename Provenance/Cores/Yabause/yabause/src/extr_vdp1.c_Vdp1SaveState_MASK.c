
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int Vdp1 ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_4(FILE *VAR_2)
{
   int VAR_3;
   IOCheck_struct VAR_4 = { 0, 0 };





   VAR_3 = FUNC_1(VAR_2, "VDP1", 1);


   FUNC_3(&VAR_4, (void *)VAR_1, sizeof(Vdp1), 1, VAR_2);


   FUNC_3(&VAR_4, (void *)VAR_0, 0x80000, 1, VAR_2);







   return FUNC_0(VAR_2, VAR_3);
}
