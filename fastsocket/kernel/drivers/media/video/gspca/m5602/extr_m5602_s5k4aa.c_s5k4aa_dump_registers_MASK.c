
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct sd*,int,int*,int) ;
 int FUNC_2 (struct sd*,int,int*,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_1)
{
 int VAR_2;
 u8 VAR_3, VAR_4;
 FUNC_1(VAR_1, VAR_0, &VAR_4, 1);
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_2(VAR_1, VAR_0, &VAR_3, 1);
  FUNC_0("Dumping the s5k4aa register state for page 0x%x", VAR_3);
  for (VAR_2 = 0; VAR_2 <= 0xff; VAR_2++) {
   u8 VAR_5 = 0;
   FUNC_1(VAR_1, VAR_2, &VAR_5, 1);
   FUNC_0("register 0x%x contains 0x%x",
        VAR_2, VAR_5);
  }
 }
 FUNC_0("s5k4aa register state dump complete");

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_2(VAR_1, VAR_0, &VAR_3, 1);
  FUNC_0("Probing for which registers that are "
       "read/write for page 0x%x", VAR_3);
  for (VAR_2 = 0; VAR_2 <= 0xff; VAR_2++) {
   u8 VAR_6, VAR_7, VAR_8 = 0xff;

   FUNC_1(VAR_1, VAR_2, &VAR_6, 1);
   FUNC_2(VAR_1, VAR_2, &VAR_8, 1);
   FUNC_1(VAR_1, VAR_2, &VAR_7, 1);

   if (VAR_7 == VAR_8)
    FUNC_0("register 0x%x is writeable", VAR_2);
   else
    FUNC_0("register 0x%x is read only", VAR_2);


   FUNC_2(VAR_1, VAR_2, &VAR_6, 1);
  }
 }
 FUNC_0("Read/write register probing complete");
 FUNC_2(VAR_1, VAR_0, &VAR_4, 1);
}
