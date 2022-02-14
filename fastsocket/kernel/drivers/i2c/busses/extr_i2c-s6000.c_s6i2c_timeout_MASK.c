
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct s6i2c_if {scalar_t__ timeout_count; int lock; int complete; TYPE_1__ timeout_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct s6i2c_if*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct s6i2c_if*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3)
{
 struct s6i2c_if *VAR_4 = (struct s6i2c_if *)VAR_3;
 unsigned long VAR_5;

 FUNC_4(&VAR_4->lock, VAR_5);
 FUNC_3(VAR_4);
 if (--VAR_4->timeout_count > 0) {
  VAR_4->timeout_timer.expires = VAR_2 + VAR_0;
  FUNC_0(&VAR_4->timeout_timer);
 } else {
  FUNC_1(&VAR_4->complete);
  FUNC_2(VAR_4, VAR_1, 0);
 }
 FUNC_5(&VAR_4->lock, VAR_5);
}
