
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int trans_start; } ;
struct TYPE_4__ {int lock; int io_addr; } ;
typedef TYPE_1__ board_info_t ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 board_info_t *VAR_2 = FUNC_2(VAR_1);
 u8 VAR_3;
 unsigned long VAR_4;


 VAR_3 = FUNC_5(VAR_2->io_addr);
 FUNC_6(&VAR_2->lock, VAR_4);

 FUNC_3(VAR_1);
 FUNC_1(VAR_2);
 FUNC_0(VAR_1);

 VAR_1->trans_start = VAR_0;
 FUNC_4(VAR_1);


 FUNC_8(VAR_3, VAR_2->io_addr);
 FUNC_7(&VAR_2->lock, VAR_4);
}
