
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* dentry; } ;
struct file {TYPE_4__ f_path; } ;
struct TYPE_7__ {TYPE_2__* d_parent; } ;
struct TYPE_5__ {unsigned char* name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 scalar_t__ FUNC_0 (unsigned char const*,int *,int) ;

__attribute__((used)) static inline int FUNC_1(struct file *VAR_0)
{
 const unsigned char *VAR_1 = VAR_0->f_path.dentry->d_parent->d_name.name;

 return (int)FUNC_0(VAR_1, ((void*)0), 10);
}
