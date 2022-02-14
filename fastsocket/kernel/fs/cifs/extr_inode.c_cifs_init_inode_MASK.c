
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct cifs_fattr {int cf_uniqueid; } ;
struct TYPE_2__ {int uniqueid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 struct cifs_fattr *VAR_2 = (struct cifs_fattr *) VAR_1;

 FUNC_0(VAR_0)->uniqueid = VAR_2->cf_uniqueid;
 return 0;
}
