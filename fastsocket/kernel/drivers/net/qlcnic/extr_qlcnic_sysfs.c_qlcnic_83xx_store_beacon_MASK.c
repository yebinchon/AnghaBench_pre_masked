
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_hardware_context {unsigned long beacon_state; } ;
struct qlcnic_adapter {int state; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qlcnic_adapter*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct qlcnic_hardware_context *VAR_8 = VAR_5->ahw;
 unsigned long VAR_9;
 int VAR_10;

 if (FUNC_6(VAR_4, &VAR_5->state))
  return -VAR_2;

 if (FUNC_4(VAR_6, 2, &VAR_9))
  return -VAR_1;

 if (VAR_8->beacon_state == VAR_9)
  return VAR_7;

 FUNC_2();
 if (!VAR_8->beacon_state) {
  if (FUNC_5(VAR_3, &VAR_5->state)) {
   FUNC_3();
   return -VAR_0;
  }
 }

 if (VAR_9)
  VAR_10 = FUNC_1(VAR_5, 1, VAR_9);
 else
  VAR_10 = FUNC_1(VAR_5, 0, !VAR_9);
 if (!VAR_10)
  VAR_8->beacon_state = VAR_9;

 if (!VAR_8->beacon_state)
  FUNC_0(VAR_3, &VAR_5->state);

 FUNC_3();
 return VAR_7;
}
