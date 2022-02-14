
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct sd*,int,int*,int) ;
 int FUNC_2 (struct sd*,int,int*,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_0)
{
 int VAR_1;
 u8 VAR_2 = 0;

 FUNC_0("Dumping the po1030 sensor core registers");
 for (VAR_1 = 0; VAR_1 < 0x7f; VAR_1++) {
  FUNC_1(VAR_0, VAR_1, &VAR_2, 1);
  FUNC_0("register 0x%x contains 0x%x",
       VAR_1, VAR_2);
 }

 FUNC_0("po1030 register state dump complete");

 FUNC_0("Probing for which registers that are read/write");
 for (VAR_1 = 0; VAR_1 < 0xff; VAR_1++) {
  u8 VAR_3, VAR_4;
  u8 VAR_5[2] = {0xff, 0xff};

  FUNC_1(VAR_0, VAR_1, &VAR_3, 1);
  FUNC_2(VAR_0, VAR_1, VAR_5, 1);
  FUNC_1(VAR_0, VAR_1, &VAR_4, 1);

  if (VAR_4 == VAR_5[0])
   FUNC_0("register 0x%x is writeable", VAR_1);
  else
   FUNC_0("register 0x%x is read only", VAR_1);


  FUNC_2(VAR_0, VAR_1, &VAR_3, 1);
 }
}
