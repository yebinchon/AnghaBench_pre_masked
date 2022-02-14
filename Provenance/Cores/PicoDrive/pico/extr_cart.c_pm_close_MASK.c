
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; TYPE_2__* file; struct TYPE_7__* param; } ;
typedef TYPE_1__ pm_file ;
typedef int gzFile ;
struct TYPE_8__ {int * fp; } ;
typedef TYPE_2__ ZIP ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

int FUNC_4(pm_file *VAR_4)
{
  int VAR_5 = 0;

  if (VAR_4 == ((void*)0)) return VAR_0;

  if (VAR_4->type == VAR_2)
  {
    FUNC_1(VAR_4->file);
  }
  else if (VAR_4->type == VAR_3)
  {
    ZIP *VAR_6 = VAR_4->file;
    FUNC_3((gzFile) VAR_4->param);
    VAR_6->fp = ((void*)0);
    FUNC_0(VAR_6);
  }
  else if (VAR_4->type == VAR_1)
  {
    FUNC_2(VAR_4->param);
    FUNC_1(VAR_4->file);
  }
  else
    VAR_5 = VAR_0;

  FUNC_2(VAR_4);
  return VAR_5;
}
