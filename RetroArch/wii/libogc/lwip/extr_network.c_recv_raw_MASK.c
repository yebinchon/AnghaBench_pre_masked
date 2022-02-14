
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct raw_pcb {int protocol; } ;
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

__attribute__((used)) static u8_t FUNC_4(void *VAR_4,struct raw_pcb *VAR_5,struct pbuf *VAR_6,struct ip_addr *VAR_7)
{
 struct netbuf *VAR_8;
 struct netconn *VAR_9 = (struct netconn*)VAR_4;

 if(!VAR_9) return 0;

 if(VAR_9->recvmbox!=VAR_3) {
  if((VAR_8=FUNC_1(VAR_0))==((void*)0)) return 0;

  FUNC_2(VAR_6);
  VAR_8->p = VAR_6;
  VAR_8->ptr = VAR_6;
  VAR_8->fromaddr = VAR_7;
  VAR_8->fromport = VAR_5->protocol;

  VAR_9->recvavail += VAR_6->tot_len;
  if(VAR_9->callback)
   (*VAR_9->callback)(VAR_9,VAR_2,VAR_6->tot_len);
  FUNC_0(VAR_9->recvmbox,VAR_8,VAR_1);
 }
 return 0;
}
