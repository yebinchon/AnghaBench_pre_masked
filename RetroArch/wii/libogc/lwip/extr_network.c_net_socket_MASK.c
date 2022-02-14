
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netconn {int socket; } ;
typedef int s32 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (struct netconn*) ;
 int VAR_4 ;
 int FUNC_2 (struct netconn*) ;
 struct netconn* FUNC_3 (int ,int ) ;
 struct netconn* FUNC_4 (int ,int,int ) ;

s32 FUNC_5(u32 VAR_5,u32 VAR_6,u32 VAR_7)
{
 s32 VAR_8;
 struct netconn *VAR_9;

 switch(VAR_6) {
  case 129:
   FUNC_0(VAR_3, ("net_socket(SOCK_RAW)\n"));
   VAR_9 = FUNC_4(VAR_0,VAR_7,VAR_4);
   break;
  case 130:
   FUNC_0(VAR_3, ("net_socket(SOCK_DGRAM)\n"));
   VAR_9 = FUNC_3(VAR_2,VAR_4);
   break;
  case 128:
   FUNC_0(VAR_3, ("net_socket(SOCK_STREAM)\n"));
   VAR_9 = FUNC_3(VAR_1,VAR_4);
   break;
  default:
   return -1;
 }
 if(!VAR_9) return -1;

 VAR_8 = FUNC_1(VAR_9);
 if(VAR_8==-1) {
  FUNC_2(VAR_9);
  return -1;
 }

 VAR_9->socket = VAR_8;
 return VAR_8;
}
