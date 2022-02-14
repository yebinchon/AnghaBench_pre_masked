
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tcp_pcb {int dummy; } ;
struct pbuf {scalar_t__ tot_len; } ;
struct netconn {scalar_t__ recvmbox; int (* callback ) (struct netconn*,int ,scalar_t__) ;int recvavail; int err; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,struct pbuf*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct pbuf*) ;
 int FUNC_3 (struct netconn*,int ,scalar_t__) ;

__attribute__((used)) static err_t FUNC_4(void *VAR_6,struct tcp_pcb *VAR_7,struct pbuf *VAR_8,err_t VAR_9)
{
 u16 VAR_10;
 struct netconn *VAR_11 = (struct netconn*)VAR_6;

 FUNC_0(VAR_0, ("api_msg: recv_tcp(%p,%p,%p,%d)\n",VAR_6,VAR_7,VAR_8,VAR_9));

 if(VAR_11==((void*)0)) {
  FUNC_2(VAR_8);
  return VAR_2;
 }

 if(VAR_11->recvmbox!=VAR_5) {
  VAR_11->err = VAR_9;
  if(VAR_8!=((void*)0)) {
   VAR_10 = VAR_8->tot_len;
   VAR_11->recvavail += VAR_10;
  } else VAR_10 = 0;

  if(VAR_11->callback)
   (*VAR_11->callback)(VAR_11,VAR_4,VAR_10);

  FUNC_1(VAR_11->recvmbox,VAR_8,VAR_3);
 }
 return VAR_1;
}
