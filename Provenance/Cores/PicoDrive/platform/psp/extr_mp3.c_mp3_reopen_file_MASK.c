
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (char*,int ,int) ;

void FUNC_4(void)
{
 if (VAR_2 == ((void*)0)) return;
 FUNC_0("mp3_reopen_file(%s)\n", VAR_2);


 if (VAR_3 >= 0) FUNC_1(VAR_3);

 VAR_3 = FUNC_3(VAR_2, VAR_0, 0777);
 if (VAR_3 >= 0)
  FUNC_2(VAR_3, VAR_4, VAR_1);
 FUNC_0("mp3_reopen_file %s\n", VAR_3 >= 0 ? "ok" : "failed");
}
