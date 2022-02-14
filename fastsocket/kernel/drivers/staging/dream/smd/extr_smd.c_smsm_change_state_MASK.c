
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smsm_shared {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 struct smsm_shared* FUNC_4 (int ,int) ;
 int VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(uint32_t VAR_6, uint32_t VAR_7)
{
 unsigned long VAR_8;
 struct smsm_shared *VAR_9;

 FUNC_5(&VAR_5, VAR_8);

 VAR_9 = FUNC_4(VAR_1,
     2 * sizeof(struct smsm_shared));

 if (VAR_9) {
  if (VAR_9[1].state & VAR_3)
   FUNC_0();
  VAR_9[0].state = (VAR_9[0].state & ~VAR_6) | VAR_7;
  if (VAR_4 & VAR_2)
   FUNC_3("smsm_change_state %x\n",
          VAR_9[0].state);
  FUNC_1();
 }

 FUNC_6(&VAR_5, VAR_8);

 if (VAR_9 == ((void*)0)) {
  FUNC_2("smsm_change_state <SM NO STATE>\n");
  return -VAR_0;
 }
 return 0;
}
