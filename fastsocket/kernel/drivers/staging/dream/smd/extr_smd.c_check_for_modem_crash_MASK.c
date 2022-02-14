
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsm_shared {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct smsm_shared* FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct smsm_shared *VAR_2;

 VAR_2 = FUNC_1(VAR_0, 2 * sizeof(struct smsm_shared));


 if (!VAR_2)
  return 0;

 if (VAR_2[1].state & VAR_1) {
  FUNC_0();
  return -1;
 } else {
  return 0;
 }
}
