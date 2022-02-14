
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (void*,char*,char*,int ) ;
 int FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (char*) ;
 char* VAR_2 ;
 int FUNC_4 (void*,char*,int *,int) ;

void FUNC_5(const char *VAR_3)
{
 void *VAR_4, *VAR_5;
 u64 VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_4 = FUNC_0("/chosen");
 if (!VAR_4)
  return;

 VAR_8 = FUNC_1(VAR_4, "linux,stdout-path", VAR_2, VAR_0);
 if (VAR_8 <= 0)
  return;

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5) {
  FUNC_3("planetcore_set_serial_speed: "
         "Bad /chosen/linux,stdout-path.\r\n");

  return;
 }

 if (!FUNC_2(VAR_3, VAR_1,
                             &VAR_6)) {
  FUNC_3("planetcore_set_serial_speed: No SB tag.\r\n");
  return;
 }

 VAR_7 = VAR_6;
 FUNC_4(VAR_5, "current-speed", &VAR_7, 4);
}
