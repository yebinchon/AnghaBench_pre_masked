
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct initio_host {int* msg; scalar_t__ addr; TYPE_1__* active_tc; } ;
struct TYPE_2__ {int js_period; int sconfig0; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct initio_host * VAR_5)
{
 int VAR_6;

 VAR_5->active_tc->flags |= VAR_0;

 if (VAR_5->msg[3]) {
  VAR_5->active_tc->js_period |= VAR_5->msg[3];
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   if (VAR_4[VAR_6] >= VAR_5->msg[2])
    break;
  }
  VAR_5->active_tc->js_period |= (VAR_6 << 4);
  VAR_5->active_tc->sconfig0 |= VAR_1;
 }
 FUNC_0(VAR_5->active_tc->sconfig0, VAR_5->addr + VAR_2);
 FUNC_0(VAR_5->active_tc->js_period, VAR_5->addr + VAR_3);

 return -1;
}
