
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct TCP_Server_Info {int response_q; int dstaddr; } ;


 int VAR_0 ;




 int FUNC_0 (int,char*,unsigned char) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct TCP_Server_Info*) ;
 int FUNC_3 (struct sockaddr*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool
FUNC_6(struct TCP_Server_Info *VAR_1, unsigned char VAR_2)
{





 switch (VAR_2) {
 case 128:

  return 1;
 case 129:
  FUNC_1(1, "RFC 1002 session keep alive");
  break;
 case 130:
  FUNC_1(1, "RFC 1002 positive session response");
  break;
 case 131:




  FUNC_1(1, "RFC 1002 negative session response");

  FUNC_4(1000);






  FUNC_3((struct sockaddr *)&VAR_1->dstaddr, VAR_0);
  FUNC_2(VAR_1);
  FUNC_5(&VAR_1->response_q);
  break;
 default:
  FUNC_0(1, "RFC 1002 unknown response type 0x%x", VAR_2);
  FUNC_2(VAR_1);
 }

 return 0;
}
