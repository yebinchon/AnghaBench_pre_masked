
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cipher_suite; } ;
struct tlsv1_server {TYPE_1__ rl; } ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(struct tlsv1_server *VAR_0, char *VAR_1,
       size_t VAR_2)
{

    char *VAR_3;

 switch (VAR_0->rl.cipher_suite) {
 case 129:
  VAR_3 = "RC4-MD5";
  break;
 case 128:
  VAR_3 = "RC4-SHA";
  break;
 case 134:
  VAR_3 = "ADH-AES-128-SHA";
  break;
 case 131:
  VAR_3 = "AES-256-SHA";
  break;
 case 132:
  VAR_3 = "AES-128-SHA";
  break;
 default:
  return -1;
 }




 FUNC_0((u8 *)VAR_1, (u8 *)VAR_3, VAR_2);

 return 0;
}
