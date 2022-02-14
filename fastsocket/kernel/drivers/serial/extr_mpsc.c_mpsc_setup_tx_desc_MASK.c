
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ u32 ;
struct mpsc_tx_desc {int cmdstat; int bytecnt; int shadow; } ;
struct TYPE_2__ {int dev; } ;
struct mpsc_port_info {int txr_head; scalar_t__ cache_mgmt; TYPE_1__ port; scalar_t__ txr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*,int,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct mpsc_port_info *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct mpsc_tx_desc *VAR_9;

 VAR_9 = (struct mpsc_tx_desc *)(VAR_6->txr
   + (VAR_6->txr_head * VAR_1));

 VAR_9->bytecnt = FUNC_0(VAR_7);
 VAR_9->shadow = VAR_9->bytecnt;
 FUNC_4();
 VAR_9->cmdstat = FUNC_1(VAR_5 | VAR_3
   | VAR_4
   | ((VAR_8) ? VAR_2 : 0));
 FUNC_4();
 FUNC_2(VAR_6->port.dev, (void *)VAR_9, VAR_1,
   VAR_0);





}
