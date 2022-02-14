
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ioc3 {int dummy; } ;


 int FUNC_0 (struct ioc3*,int*) ;
 int FUNC_1 (struct ioc3*) ;
 int FUNC_2 (struct ioc3*,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct ioc3 *VAR_0)
{
 const char *VAR_1 = "unknown";
 const char *VAR_2 = VAR_1;
 u8 VAR_3;
 u8 VAR_4[6];
 int VAR_5 = 0, VAR_6;

 while (1) {
  u64 VAR_7;
  VAR_7 = FUNC_0(VAR_0, &VAR_5);

  switch (VAR_7 & 0xff) {
  case 0x91:
   VAR_2 = "DS1981U";
   break;
  default:
   if (VAR_5 == 0) {

    return -1;
   }
   continue;
  }

  FUNC_1(VAR_0);


  FUNC_2(VAR_0, 0x55);
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
   FUNC_2(VAR_0, (VAR_7 >> (VAR_6 << 3)) & 0xff);

  VAR_7 >>= 8;
  for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
   VAR_4[VAR_6] = VAR_7 & 0xff;
   VAR_7 >>= 8;
  }
  VAR_3 = VAR_7 & 0xff;
  break;
 }

 FUNC_3("Found %s NIC", VAR_2);
 if (VAR_2 != VAR_1)
  FUNC_3 (" registration number %pM, CRC %02x", VAR_4, VAR_3);
 FUNC_3(".\n");

 return 0;
}
