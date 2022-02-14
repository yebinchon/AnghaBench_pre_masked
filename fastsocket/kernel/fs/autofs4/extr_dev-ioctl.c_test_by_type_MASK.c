
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; } ;
struct autofs_info {TYPE_1__* sbi; } ;
struct TYPE_2__ {unsigned int type; } ;


 struct autofs_info* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct path *VAR_0, void *VAR_1)
{
 struct autofs_info *VAR_2 = FUNC_0(VAR_0->dentry);
 return VAR_2 && VAR_2->sbi->type & *(unsigned *)VAR_1;
}
