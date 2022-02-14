
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int * FUNC_2 (int ,int) ;

int FUNC_3(uint32_t VAR_4)
{
 uint32_t *VAR_5;

 VAR_5 = FUNC_2(VAR_2, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  FUNC_0("smsm_set_sleep_duration <SM NO SLEEP_DELAY>\n");
  return -VAR_0;
 }
 if (VAR_3 & VAR_1)
  FUNC_1("smsm_set_sleep_duration %d -> %d\n",
         *VAR_5, VAR_4);
 *VAR_5 = VAR_4;
 return 0;
}
