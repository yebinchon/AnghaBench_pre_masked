
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_copy_state {int * mapaddr; int pg; scalar_t__ write; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fuse_copy_state *VAR_1)
{
 if (VAR_1->mapaddr) {
  FUNC_1(VAR_1->mapaddr, VAR_0);
  if (VAR_1->write) {
   FUNC_0(VAR_1->pg);
   FUNC_3(VAR_1->pg);
  }
  FUNC_2(VAR_1->pg);
  VAR_1->mapaddr = ((void*)0);
 }
}
