
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int len; char* name; } ;
struct TYPE_6__ {TYPE_2__ name; } ;
struct nfs_unlinkdata {TYPE_3__ args; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2, struct nfs_unlinkdata *VAR_3)
{
 char *VAR_4;
 int VAR_5 = VAR_2->d_name.len;

 VAR_4 = FUNC_1(VAR_2->d_name.name, FUNC_0(VAR_5), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->args.name.len = VAR_5;
 VAR_3->args.name.name = VAR_4;
 return 0;
}
