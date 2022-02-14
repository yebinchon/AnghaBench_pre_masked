
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct netsocket {int flags; scalar_t__ lastoffset; struct netbuf* lastdata; int conn; int rcvevt; } ;
struct netbuf {int dummy; } ;
struct ip_addr {int addr; } ;
typedef int socklen_t ;
typedef int sin ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct netsocket* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct ip_addr*) ;
 int FUNC_4 (struct sockaddr*,struct sockaddr_in*,int) ;
 int FUNC_5 (struct sockaddr_in*,int ,int) ;
 int FUNC_6 (struct netbuf*,void*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct netbuf*) ;
 struct ip_addr* FUNC_8 (struct netbuf*) ;
 scalar_t__ FUNC_9 (struct netbuf*) ;
 scalar_t__ FUNC_10 (struct netbuf*) ;
 struct netbuf* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

s32 FUNC_13(s32 VAR_8,void *VAR_9,s32 VAR_10,u32 VAR_11,struct sockaddr *VAR_12,socklen_t *VAR_13)
{
 struct netsocket *VAR_14;
 struct netbuf *VAR_15;
 u16 VAR_16,VAR_17;
 struct ip_addr *VAR_18;
 u16 VAR_19;

 FUNC_0(VAR_7, ("net_recvfrom(%d, %p, %d, 0x%x, ..)\n", VAR_8, VAR_9, VAR_10, VAR_11));
 if(VAR_9==((void*)0) || VAR_10<=0) return -VAR_2;

 VAR_14 = FUNC_1(VAR_8);
 if(!VAR_14) return -VAR_3;

 if(VAR_14->lastdata)
  VAR_15 = VAR_14->lastdata;
 else {
  if(((VAR_11&VAR_4) || (VAR_14->flags&VAR_6)) && !VAR_14->rcvevt) {
   FUNC_0(VAR_7, ("net_recvfrom(%d): returning EWOULDBLOCK\n", VAR_8));
   return -VAR_1;
  }
  VAR_15 = FUNC_11(VAR_14->conn);
  if(!VAR_15) {
      FUNC_0(VAR_7, ("net_recvfrom(%d): buf == NULL!\n", VAR_8));
   return 0;
  }
 }

 VAR_16 = FUNC_10(VAR_15);
 VAR_16 -= VAR_14->lastoffset;
 if(VAR_16<=0)
  return 0;
 if(VAR_10>VAR_16)
  VAR_17 = VAR_16;
 else
  VAR_17 = VAR_10;

 FUNC_6(VAR_15,VAR_9,VAR_17,VAR_14->lastoffset);

 if(VAR_12 && VAR_13) {
  struct sockaddr_in VAR_20;

  VAR_18 = FUNC_8(VAR_15);
  VAR_19 = FUNC_9(VAR_15);

  FUNC_5(&VAR_20,0,sizeof(VAR_20));
  VAR_20.sin_family = VAR_0;
  VAR_20.sin_port = FUNC_2(VAR_19);
  VAR_20.sin_addr.s_addr = VAR_18->addr;

  if(*VAR_13>sizeof(VAR_20))
   *VAR_13 = sizeof(VAR_20);

  FUNC_4(VAR_12,&VAR_20,*VAR_13);

  FUNC_0(VAR_7, ("net_recvfrom(%d): addr=", VAR_8));
  FUNC_3(VAR_7, VAR_18);
  FUNC_0(VAR_7, (" port=%u len=%u\n", VAR_19, VAR_17));
 }
 if(FUNC_12(VAR_14->conn)==VAR_5 && (VAR_16-VAR_17)>0) {
  VAR_14->lastdata = VAR_15;
  VAR_14->lastoffset += VAR_17;
 } else {
  VAR_14->lastdata = ((void*)0);
  VAR_14->lastoffset = 0;
  FUNC_7(VAR_15);
 }
 return VAR_17;
}
