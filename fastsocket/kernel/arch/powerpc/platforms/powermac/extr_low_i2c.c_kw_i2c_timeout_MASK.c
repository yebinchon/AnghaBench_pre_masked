
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct pmac_i2c_host_kw {scalar_t__ state; int lock; TYPE_1__ timeout_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct pmac_i2c_host_kw*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4)
{
 struct pmac_i2c_host_kw *VAR_5 = (struct pmac_i2c_host_kw *)VAR_4;
 unsigned long VAR_6;

 FUNC_3(&VAR_5->lock, VAR_6);
 FUNC_1(VAR_5, FUNC_2(VAR_2));
 if (VAR_5->state != VAR_3) {
  VAR_5->timeout_timer.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_5->timeout_timer);
 }
 FUNC_4(&VAR_5->lock, VAR_6);
}
