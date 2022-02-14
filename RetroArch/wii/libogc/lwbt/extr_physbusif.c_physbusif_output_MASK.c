
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16_t ;
struct usbtxbuf {void* rpData; scalar_t__ txsize; } ;
struct pbuf {scalar_t__ len; scalar_t__ payload; struct pbuf* next; } ;
struct memb_blks {int dummy; } ;
struct TYPE_2__ {int openstate; int acl_out; int fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,void*,int ,struct usbtxbuf*) ;
 int FUNC_2 (int ,int,int ,int ,int ,scalar_t__,void*,int ,struct usbtxbuf*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct memb_blks VAR_5 ;
 struct usbtxbuf* FUNC_3 (struct memb_blks*) ;
 struct memb_blks VAR_6 ;
 int FUNC_4 (scalar_t__*,scalar_t__,scalar_t__) ;

void FUNC_5(struct pbuf *VAR_7,u16_t VAR_8)
{
 u32 VAR_9;
 u8 *VAR_10;
 struct pbuf *VAR_11;
 struct memb_blks *VAR_12;
 struct usbtxbuf *VAR_13;

 if(VAR_2.openstate!=0x0002) return;

 if(((u8*)VAR_7->payload)[0]==VAR_1) VAR_12 = &VAR_6;
 else if(((u8*)VAR_7->payload)[0]==VAR_0) VAR_12 = &VAR_5;
 else return;

 VAR_13 = FUNC_3(VAR_12);
 if(VAR_13!=((void*)0)) {
  VAR_13->txsize = --VAR_8;
  VAR_13->rpData = (void*)FUNC_0(((u32)VAR_13+sizeof(struct usbtxbuf)));

  VAR_10 = VAR_13->rpData;
  for(VAR_11=VAR_7,VAR_9=1;VAR_11!=((void*)0) && VAR_8>0;VAR_11=VAR_11->next,VAR_9=0) {
   FUNC_4(VAR_10,VAR_11->payload+VAR_9,(VAR_11->len-VAR_9));
   VAR_10 += (VAR_11->len-VAR_9);
   VAR_8 -= (VAR_11->len-VAR_9);
  }

  if(((u8*)VAR_7->payload)[0]==VAR_1) {
   FUNC_2(VAR_2.fd,0x20,0,0,0,VAR_13->txsize,VAR_13->rpData,VAR_4,VAR_13);
  } else if(((u8*)VAR_7->payload)[0]==VAR_0) {
   FUNC_1(VAR_2.fd,VAR_2.acl_out,VAR_13->txsize,VAR_13->rpData,VAR_3,VAR_13);
  }
 }
}
