
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct netsocket {int conn; } ;
struct ip_addr {int addr; } ;
typedef int socklen_t ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 struct netsocket* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct ip_addr*) ;
 scalar_t__ FUNC_3 (scalar_t__,void const*,scalar_t__,int ) ;
 int FUNC_4 (int ,struct ip_addr*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,struct ip_addr*,int *) ;
 int FUNC_7 (int ) ;

s32 FUNC_8(s32 VAR_4,const void *VAR_5,s32 VAR_6,u32 VAR_7,struct sockaddr *VAR_8,socklen_t VAR_9)
{
 struct netsocket *VAR_10;
 struct ip_addr VAR_11, VAR_12;
 u16_t VAR_13, VAR_14 = 0;
 s32 VAR_15,VAR_16;

 FUNC_0(VAR_3, ("net_sendto(%d, data=%p, size=%d, flags=0x%x)\n", VAR_4, VAR_5, VAR_6, VAR_7));
 if(VAR_5==((void*)0) || VAR_6<=0) return -VAR_0;

 VAR_10 = FUNC_1(VAR_4);
 if (!VAR_10) return -VAR_1;


 VAR_16 = (FUNC_6(VAR_10->conn, &VAR_12, &VAR_14) == VAR_2);

 VAR_11.addr = ((struct sockaddr_in *)VAR_8)->sin_addr.s_addr;
 VAR_13 = ((struct sockaddr_in *)VAR_8)->sin_port;

 FUNC_0(VAR_3, ("net_sendto(%d, data=%p, size=%d, flags=0x%x to=", VAR_4, VAR_5, VAR_6, VAR_7));
 FUNC_2(VAR_3, &VAR_11);
 FUNC_0(VAR_3, (" port=%u\n", FUNC_7(VAR_13)));

 FUNC_4(VAR_10->conn, &VAR_11, FUNC_7(VAR_13));

 VAR_15 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);



 if (VAR_16)
  FUNC_4(VAR_10->conn, &VAR_12, VAR_14);
 else
  FUNC_5(VAR_10->conn);
 return VAR_15;
}
