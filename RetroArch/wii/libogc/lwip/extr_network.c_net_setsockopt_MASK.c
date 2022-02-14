
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct netsocket {TYPE_3__* conn; } ;
typedef int socklen_t ;
typedef scalar_t__ s32 ;
struct TYPE_5__ {TYPE_1__* tcp; } ;
struct TYPE_6__ {TYPE_2__ pcb; int type; } ;
struct TYPE_4__ {int so_options; int keepalive; int flags; void* tos; void* ttl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 struct netsocket* FUNC_1 (scalar_t__) ;

s32 FUNC_2(s32 VAR_6,u32 VAR_7,u32 VAR_8,const void *VAR_9,socklen_t VAR_10)
{
 s32 VAR_11 = 0;
 struct netsocket *VAR_12;

 VAR_12 = FUNC_1(VAR_6);
 if(VAR_12==((void*)0)) return -VAR_2;
 if(VAR_9==((void*)0)) return -VAR_0;

 switch(VAR_7) {
  case 134:
  {
   switch(VAR_8) {
    case 133:
    case 132:
    case 131:
    case 130:
     if(VAR_10<sizeof(u32)) VAR_11 = VAR_0;
     break;
    default:
     FUNC_0(VAR_4, ("net_setsockopt(%d, SOL_SOCKET, UNIMPL: optname=0x%x, ..)\n", VAR_6, VAR_8));
     VAR_11 = VAR_1;
   }
  }
  break;

  case 138:
  {
   switch(VAR_8) {
    case 135:
    case 136:
     if(VAR_10<sizeof(u32)) VAR_11 = VAR_0;
     break;
    default:
     FUNC_0(VAR_4, ("net_setsockopt(%d, IPPROTO_IP, UNIMPL: optname=0x%x, ..)\n", VAR_6, VAR_8));
     VAR_11 = VAR_1;
   }
  }
  break;

  case 137:
  {
   if(VAR_10<sizeof(u32)) {
    VAR_11 = VAR_0;
    break;
   }
   if(VAR_12->conn->type!=VAR_3) return 0;

   switch(VAR_8) {
    case 128:
    case 129:
     break;
    default:
     FUNC_0(VAR_4, ("net_setsockopt(%d, IPPROTO_TCP, UNIMPL: optname=0x%x, ..)\n", VAR_6, VAR_8));
     VAR_11 = VAR_1;
   }
  }
  break;

  default:
   FUNC_0(VAR_4, ("net_setsockopt(%d, level=0x%x, UNIMPL: optname=0x%x, ..)\n", VAR_6, VAR_7, VAR_8));
   VAR_11 = VAR_1;
 }
 if(VAR_11!=0) return -1;

 switch(VAR_7) {
  case 134:
  {
   switch(VAR_8) {
    case 133:
    case 132:
    case 131:
    case 130:
     if(*(u32*)VAR_9)
      VAR_12->conn->pcb.tcp->so_options |= VAR_8;
     else
      VAR_12->conn->pcb.tcp->so_options &= ~VAR_8;
     FUNC_0(VAR_4, ("net_setsockopt(%d, SOL_SOCKET, optname=0x%x, ..) -> %s\n", VAR_6, VAR_8, (*(u32*)VAR_9?"on":"off")));
     break;
   }
  }
  break;

  case 138:
  {
   switch(VAR_8) {
    case 135:
     VAR_12->conn->pcb.tcp->ttl = (u8)(*(u32*)VAR_9);
     FUNC_0(VAR_4, ("net_setsockopt(%d, IPPROTO_IP, IP_TTL, ..) -> %u\n", VAR_6, VAR_12->conn->pcb.tcp->ttl));
     break;
    case 136:
     VAR_12->conn->pcb.tcp->tos = (u8)(*(u32*)VAR_9);
     FUNC_0(VAR_4, ("net_setsockopt(%d, IPPROTO_IP, IP_TOS, ..)-> %u\n", VAR_6, VAR_12->conn->pcb.tcp->tos));
     break;
   }
  }
  break;

  case 137:
  {
   switch(VAR_8) {
    case 128:
     if(*(u32*)VAR_9)
      VAR_12->conn->pcb.tcp->flags |= VAR_5;
     else
      VAR_12->conn->pcb.tcp->flags &= ~VAR_5;
     FUNC_0(VAR_4, ("net_setsockopt(%d, IPPROTO_TCP, TCP_NODELAY) -> %s\n", VAR_6, (*(u32*)VAR_9)?"on":"off") );
     break;
    case 129:
     VAR_12->conn->pcb.tcp->keepalive = (u32)(*(u32*)VAR_9);
     FUNC_0(VAR_4, ("net_setsockopt(%d, IPPROTO_TCP, TCP_KEEPALIVE) -> %u\n", VAR_6, VAR_12->conn->pcb.tcp->keepalive));
     break;
   }
  }
 }
 return VAR_11?-1:0;
}
