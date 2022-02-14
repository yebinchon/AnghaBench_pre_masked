
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct udp_pcb {int dummy; } ;
struct pbuf {scalar_t__ tot_len; } ;
struct netconn {scalar_t__ recvmbox; int (* callback ) (struct netconn*,int ,scalar_t__) ;int recvavail; } ;
struct netbuf {int fromport; struct ip_addr* fromaddr; struct pbuf* ptr; struct pbuf* p; } ;
struct ip_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct netbuf*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct netbuf* FUNC_1 (int ) ;
 int FUNC_2 (struct pbuf*) ;
 int FUNC_3 (struct netconn*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_4,struct udp_pcb *VAR_5,struct pbuf *VAR_6,struct ip_addr *VAR_7,u16 VAR_8)
{
 struct netbuf *VAR_9;
 struct netconn *VAR_10 = (struct netconn*)VAR_4;

 if(!VAR_10) {
  FUNC_2(VAR_6);
  return;
 }

 if(VAR_10->recvmbox!=VAR_3) {
  VAR_9 = FUNC_1(VAR_0);
  if(!VAR_9) {
   FUNC_2(VAR_6);
   return;
  }
  VAR_9->p = VAR_6;
  VAR_9->ptr = VAR_6;
  VAR_9->fromaddr = VAR_7;
  VAR_9->fromport = VAR_8;

  VAR_10->recvavail += VAR_6->tot_len;
  if(VAR_10->callback)
   (*VAR_10->callback)(VAR_10,VAR_2,VAR_6->tot_len);

  FUNC_0(VAR_10->recvmbox,VAR_9,VAR_1);
 }
}
