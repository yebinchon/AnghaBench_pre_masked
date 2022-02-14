
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct dentry {TYPE_2__ d_name; TYPE_3__* d_parent; } ;
struct TYPE_4__ {unsigned char const* name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (char*,struct inode*,struct dentry*,TYPE_3__*,unsigned char const*,int ) ;

__attribute__((used)) static struct dentry *FUNC_2(struct inode *VAR_1,
           struct dentry *VAR_2,
           struct nameidata *VAR_3)
{
 FUNC_1("%p,%p{%p{%s},%s}",
        VAR_1,
        VAR_2,
        VAR_2->d_parent,
        VAR_2->d_parent ?
        VAR_2->d_parent->d_name.name : (const unsigned char *) "",
        VAR_2->d_name.name);

 return FUNC_0(-VAR_0);
}
