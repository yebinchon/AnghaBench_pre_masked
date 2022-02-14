
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int txtimeout; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct slgt_info {scalar_t__ netcount; int lock; TYPE_2__ icount; TYPE_1__ params; scalar_t__ tx_active; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1)
{
 struct slgt_info *VAR_2 = (struct slgt_info*)VAR_1;
 unsigned long VAR_3;

 FUNC_0(("%s tx_timeout\n", VAR_2->device_name));
 if(VAR_2->tx_active && VAR_2->params.mode == VAR_0) {
  VAR_2->icount.txtimeout++;
 }
 FUNC_3(&VAR_2->lock,VAR_3);
 FUNC_5(VAR_2);
 FUNC_4(&VAR_2->lock,VAR_3);






  FUNC_1(VAR_2);
}
