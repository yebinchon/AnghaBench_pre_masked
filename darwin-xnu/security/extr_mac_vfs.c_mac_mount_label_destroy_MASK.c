
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int * mnt_mntlabel; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct mount *VAR_0)
{
 if (VAR_0->mnt_mntlabel != ((void*)0)) {
  FUNC_0(VAR_0->mnt_mntlabel);
  VAR_0->mnt_mntlabel = ((void*)0);
 }
}
