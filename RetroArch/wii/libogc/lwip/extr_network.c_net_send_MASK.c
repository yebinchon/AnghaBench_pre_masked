
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netsocket {int conn; } ;
struct netbuf {int dummy; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;





 int VAR_6 ;
 struct netsocket* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct netbuf*) ;
 struct netbuf* FUNC_3 () ;
 int FUNC_4 (struct netbuf*,void const*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,struct netbuf*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,void const*,scalar_t__,int ) ;

s32 FUNC_8(s32 VAR_7,const void *VAR_8,s32 VAR_9,u32 VAR_10)
{
 struct netsocket *VAR_11;
 struct netbuf *VAR_12;
 err_t VAR_13;

 FUNC_0(VAR_6, ("net_send(%d, data=%p, size=%d, flags=0x%x)\n", VAR_7, VAR_8, VAR_9, VAR_10));
 if(VAR_8==((void*)0) || VAR_9<=0) return -VAR_0;

 VAR_11 = FUNC_1(VAR_7);
 if(!VAR_11) return -VAR_2;

 switch(FUNC_6(VAR_11->conn)) {
  case 132:
  case 130:
  case 129:
  case 128:
   VAR_12 = FUNC_3();
   if(!VAR_12) {
    FUNC_0(VAR_6, ("net_send(%d) ENOBUFS\n", VAR_7));
    return -VAR_1;
   }
   FUNC_4(VAR_12,VAR_8,VAR_9);
   VAR_13 = FUNC_5(VAR_11->conn,VAR_12);
   FUNC_2(VAR_12);
   break;
  case 131:
   VAR_13 = FUNC_7(VAR_11->conn,VAR_8,VAR_9,VAR_5);
   break;
  default:
   VAR_13 = VAR_3;
   break;
 }
 if(VAR_13!=VAR_4) {
  FUNC_0(VAR_6, ("net_send(%d) err=%d\n", VAR_7, VAR_13));
  return -1;
 }

 FUNC_0(VAR_6, ("net_send(%d) ok size=%d\n", VAR_7, VAR_9));
 return VAR_9;
}
