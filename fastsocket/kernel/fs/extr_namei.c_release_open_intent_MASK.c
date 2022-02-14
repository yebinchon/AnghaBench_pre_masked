
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* file; } ;
struct TYPE_8__ {TYPE_2__ open; } ;
struct nameidata {TYPE_3__ intent; } ;
struct TYPE_6__ {int * dentry; } ;
struct TYPE_9__ {TYPE_1__ f_path; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;

void FUNC_2(struct nameidata *VAR_0)
{
 if (VAR_0->intent.open.file->f_path.dentry == ((void*)0))
  FUNC_1(VAR_0->intent.open.file);
 else
  FUNC_0(VAR_0->intent.open.file);
}
