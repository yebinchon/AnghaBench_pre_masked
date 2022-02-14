
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct autofs_info {int (* free ) (struct autofs_info*) ;TYPE_1__* dentry; } ;
struct TYPE_2__ {int * d_fsdata; } ;


 int FUNC_0 (struct autofs_info*) ;
 int FUNC_1 (struct autofs_info*) ;

void FUNC_2(struct autofs_info *VAR_0)
{
 if (VAR_0->dentry) {
  VAR_0->dentry->d_fsdata = ((void*)0);
  VAR_0->dentry = ((void*)0);
 }
 if (VAR_0->free)
  (VAR_0->free)(VAR_0);
 FUNC_0(VAR_0);
}
