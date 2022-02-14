
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_1)
{
        char *VAR_2;

        VAR_2 = FUNC_1("ethaddr");
 if (!VAR_2) {
         FUNC_0("ethaddr not set in boot prom\n");
  return -1;
 }
 FUNC_2(VAR_1, VAR_2);

 if (VAR_0 > 1) {
         int VAR_3;
  FUNC_0("get_ethernet_addr: ");
         for (VAR_3=0; VAR_3<5; VAR_3++)
          FUNC_0("%02x:", (unsigned char)*(VAR_1+VAR_3));
  FUNC_0("%02x\n", *(VAR_1+VAR_3));
 }

 return 0;
}
