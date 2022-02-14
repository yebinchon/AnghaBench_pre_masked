
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int f_pos; TYPE_1__* f_op; } ;
struct TYPE_5__ {int (* write ) (TYPE_2__*,char*,size_t,int *) ;} ;
typedef TYPE_2__* RTMP_OS_FD ;


 int FUNC_0 (TYPE_2__*,char*,size_t,int *) ;

int FUNC_1(RTMP_OS_FD VAR_0, char *VAR_1, int VAR_2)
{
 return VAR_0->f_op->write(VAR_0, VAR_1, (size_t)VAR_2, &VAR_0->f_pos);
}
