
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16_t ;
typedef int u16 ;
struct netsocket {int flags; TYPE_1__* conn; } ;
typedef int s32 ;
struct TYPE_2__ {int recvavail; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct netsocket* FUNC_1 (int ) ;

s32 FUNC_2(s32 VAR_4, u32 VAR_5, void *VAR_6)
{
 struct netsocket *VAR_7 = FUNC_1(VAR_4);

 if(!VAR_7) return -VAR_1;

 switch (VAR_5) {
  case 128:
   if(!VAR_6) return -VAR_0;

   *((u16_t*)VAR_6) = VAR_7->conn->recvavail;

   FUNC_0(VAR_3, ("net_ioctl(%d, FIONREAD, %p) = %u\n", VAR_4, VAR_6, *((u16*)VAR_6)));
   return 0;

  case 129:
   if(VAR_6 && *(u32*)VAR_6)
    VAR_7->flags |= VAR_2;
   else
    VAR_7->flags &= ~VAR_2;
   FUNC_0(VAR_3, ("net_ioctl(%d, FIONBIO, %d)\n", VAR_4, !!(VAR_7->flags&VAR_2)));
   return 0;

  default:
   FUNC_0(VAR_3, ("net_ioctl(%d, UNIMPL: 0x%lx, %p)\n", VAR_4, VAR_5, VAR_6));
   return -VAR_0;
 }
}
