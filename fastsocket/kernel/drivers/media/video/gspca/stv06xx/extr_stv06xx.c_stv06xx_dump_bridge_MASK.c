
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct sd*,int,int*) ;
 int FUNC_2 (struct sd*,int,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_0)
{
 int VAR_1;
 u8 VAR_2, VAR_3;

 FUNC_0("Dumping all stv06xx bridge registers");
 for (VAR_1 = 0x1400; VAR_1 < 0x160f; VAR_1++) {
  FUNC_1(VAR_0, VAR_1, &VAR_2);

  FUNC_0("Read 0x%x from address 0x%x", VAR_2, VAR_1);
 }

 FUNC_0("Testing stv06xx bridge registers for writability");
 for (VAR_1 = 0x1400; VAR_1 < 0x160f; VAR_1++) {
  FUNC_1(VAR_0, VAR_1, &VAR_2);
  VAR_3 = VAR_2;

  FUNC_2(VAR_0, VAR_1, 0xff);
  FUNC_1(VAR_0, VAR_1, &VAR_2);
  if (VAR_2 == 0xff)
   FUNC_0("Register 0x%x is read/write", VAR_1);
  else if (VAR_2 != VAR_3)
   FUNC_0("Register 0x%x is read/write,"
        " but only partially", VAR_1);
  else
   FUNC_0("Register 0x%x is read-only", VAR_1);

  FUNC_2(VAR_0, VAR_1, VAR_3);
 }
}
