
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int mode; int * state; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct nfs_open_context *VAR_0, int VAR_1)
{
 if (VAR_0->state == ((void*)0))
  return;
 if (VAR_1)
  FUNC_1(VAR_0->state, VAR_0->mode);
 else
  FUNC_0(VAR_0->state, VAR_0->mode);
}
