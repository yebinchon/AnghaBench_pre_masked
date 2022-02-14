
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int dev_t ;
typedef int caddr_t ;
struct TYPE_2__ {int (* d_ioctl ) (int ,int ,int ,int ,void*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_2(void * VAR_2, void * VAR_3, u_long VAR_4, caddr_t VAR_5)
{
    dev_t VAR_6 = *(dev_t*) VAR_2;

    return ((*VAR_1[FUNC_0(VAR_6)].d_ioctl)
      (VAR_6, VAR_4, VAR_5, VAR_0, VAR_3));
}
