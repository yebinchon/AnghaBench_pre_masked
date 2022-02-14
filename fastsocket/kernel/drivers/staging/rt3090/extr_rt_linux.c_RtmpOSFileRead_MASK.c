
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int f_pos; TYPE_1__* f_op; } ;
struct TYPE_5__ {int (* read ) (TYPE_2__*,char*,int,int *) ;} ;
typedef TYPE_2__* RTMP_OS_FD ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*,int,int *) ;

int FUNC_2(RTMP_OS_FD VAR_1, char *VAR_2, int VAR_3)
{

 if (VAR_1->f_op && VAR_1->f_op->read)
 {
  return VAR_1->f_op->read(VAR_1, VAR_2, VAR_3, &VAR_1->f_pos);
 }
 else
 {
  FUNC_0(VAR_0, ("no file read method\n"));
  return -1;
 }
}
