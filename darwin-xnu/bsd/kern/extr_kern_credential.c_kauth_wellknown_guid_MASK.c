
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * g_guid; } ;
typedef TYPE_1__ guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*,char*,int) ;

int
FUNC_2(guid_t *VAR_5)
{
 static char VAR_6[] = {0xab, 0xcd, 0xef, 0xab, 0xcd, 0xef, 0xab, 0xcd, 0xef, 0xab, 0xcd, 0xef};
 uint32_t VAR_7;



 if (FUNC_1((void *)VAR_5, VAR_6, 12) == 0) {



  VAR_7 = FUNC_0(*(uint32_t *)&VAR_5->g_guid[12]);
  switch(VAR_7) {
  case 0x0000000c:
   return(VAR_0);
  case 0xfffffffe:
   return(VAR_2);
  case 0x0000000a:
   return(VAR_4);
  case 0x00000010:
   return(VAR_1);
  }
 }
 return(VAR_3);
}
