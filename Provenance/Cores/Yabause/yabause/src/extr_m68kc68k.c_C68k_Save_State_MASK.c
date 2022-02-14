
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int s32 ;
struct TYPE_5__ {int dirty1; int CycleSup; int CycleIO; int CycleToDo; int IRQLine; int Status; int USP; int flag_S; int flag_I; int flag_X; int flag_N; int flag_notZ; int flag_V; int flag_C; int * A; int * D; } ;
typedef TYPE_1__ c68k_struc ;
struct TYPE_6__ {int member_1; int member_0; } ;
typedef TYPE_2__ IOCheck_struct ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,void*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(c68k_struc *VAR_1, FILE * VAR_2)
{
   IOCheck_struct VAR_3 = { 0, 0 };
   int VAR_4 = 0;
   u32 VAR_5 = 0;

   for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
      FUNC_1(&VAR_3, (void *)&VAR_1->D[VAR_4], sizeof(u32), 1, VAR_2);

   for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
      FUNC_1(&VAR_3, (void *)&VAR_1->A[VAR_4], sizeof(u32), 1, VAR_2);

   FUNC_1(&VAR_3, (void *)&VAR_1->flag_C, sizeof(u32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->flag_V, sizeof(u32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->flag_notZ, sizeof(u32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->flag_N, sizeof(u32), 1, VAR_2);

   FUNC_1(&VAR_3, (void *)&VAR_1->flag_X, sizeof(u32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->flag_I, sizeof(u32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->flag_S, sizeof(u32), 1, VAR_2);

   FUNC_1(&VAR_3, (void *)&VAR_1->USP, sizeof(u32), 1, VAR_2);

   VAR_5 = FUNC_0(&VAR_0);

   FUNC_1(&VAR_3, (void *)&VAR_5, sizeof(u32), 1, VAR_2);

   FUNC_1(&VAR_3, (void *)&VAR_1->Status, sizeof(u32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->IRQLine, sizeof(s32), 1, VAR_2);

   FUNC_1(&VAR_3, (void *)&VAR_1->CycleToDo, sizeof(s32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->CycleIO, sizeof(s32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->CycleSup, sizeof(s32), 1, VAR_2);
   FUNC_1(&VAR_3, (void *)&VAR_1->dirty1, sizeof(u32), 1, VAR_2);
}
