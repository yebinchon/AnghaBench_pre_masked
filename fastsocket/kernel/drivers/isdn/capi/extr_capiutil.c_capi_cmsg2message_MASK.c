
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int l; int ApplId; int Messagenumber; int * m; int Subcommand; int Command; int par; scalar_t__ p; } ;
typedef TYPE_1__ _cmsg ;


 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int*) ;

unsigned FUNC_4(_cmsg * VAR_1, u8 * VAR_2)
{
 VAR_1->m = VAR_2;
 VAR_1->l = 8;
 VAR_1->p = 0;
 VAR_1->par = VAR_0[FUNC_1(VAR_1->Command, VAR_1->Subcommand)];

 FUNC_2(VAR_1);

 FUNC_3(VAR_2 + 0, &VAR_1->l);
 FUNC_0(VAR_1->m + 4, &VAR_1->Command);
 FUNC_0(VAR_1->m + 5, &VAR_1->Subcommand);
 FUNC_3(VAR_1->m + 2, &VAR_1->ApplId);
 FUNC_3(VAR_1->m + 6, &VAR_1->Messagenumber);

 return 0;
}
