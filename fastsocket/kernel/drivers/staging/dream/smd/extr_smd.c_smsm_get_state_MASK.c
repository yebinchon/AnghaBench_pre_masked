
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smsm_shared {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 struct smsm_shared* FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

uint32_t FUNC_5(void)
{
 unsigned long VAR_3;
 struct smsm_shared *VAR_4;
 uint32_t VAR_5;

 FUNC_3(&VAR_2, VAR_3);

 VAR_4 = FUNC_2(VAR_0,
     2 * sizeof(struct smsm_shared));

 if (VAR_4)
  VAR_5 = VAR_4[1].state;
 else
  VAR_5 = 0;

 if (VAR_5 & VAR_1)
  FUNC_0();

 FUNC_4(&VAR_2, VAR_3);

 if (VAR_4 == ((void*)0))
  FUNC_1("smsm_get_state <SM NO STATE>\n");
 return VAR_5;
}
