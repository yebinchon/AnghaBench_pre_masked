
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ htlo; scalar_t__ hthi; } ;
struct fs_enet_private {int ev_err; int ev_tx; int ev_rx; int ev_napi_rx; TYPE_1__ fec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fs_enet_private*) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5)
{
 struct fs_enet_private *VAR_6 = FUNC_1(VAR_5);

 if (FUNC_0(VAR_6) != 0)
  return -VAR_0;

 VAR_6->fec.hthi = 0;
 VAR_6->fec.htlo = 0;

 VAR_6->ev_napi_rx = VAR_2;
 VAR_6->ev_rx = VAR_3;
 VAR_6->ev_tx = VAR_4;
 VAR_6->ev_err = VAR_1;

 return 0;
}
