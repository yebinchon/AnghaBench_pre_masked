
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct ixgbe_adapter {scalar_t__ last_overflow_check; int ptp_caps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct timespec*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct ixgbe_adapter *VAR_2)
{
 bool VAR_3 = FUNC_1(VAR_2->last_overflow_check +
          VAR_0);
 struct timespec VAR_4;

 if (VAR_3) {
  FUNC_0(&VAR_2->ptp_caps, &VAR_4);
  VAR_2->last_overflow_check = VAR_1;
 }
}
