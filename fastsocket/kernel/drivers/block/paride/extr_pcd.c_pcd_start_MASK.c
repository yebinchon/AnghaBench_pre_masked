
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,char*,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_8, VAR_9;
 char VAR_10[12] = { 0xa8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

 VAR_4 = VAR_7 / 4;
 VAR_8 = VAR_4;
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_10[5 - VAR_9] = VAR_8 & 0xff;
  VAR_8 = VAR_8 >> 8;
 }

 if (FUNC_2(VAR_5, VAR_10, 2048, "read block")) {
  VAR_4 = -1;
  FUNC_1(-VAR_0);
  return;
 }

 FUNC_0(1);

 FUNC_3(VAR_2, VAR_6, VAR_1, VAR_3);
}
