
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {int addr_lock; int lock; int io_addr; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_10(struct net_device *VAR_7,
   int VAR_8, int VAR_9, int VAR_10)
{
 board_info_t *VAR_11 = FUNC_5(VAR_7);
 unsigned long VAR_12;
 unsigned long VAR_13;

 FUNC_0(VAR_11, 5, "phy_write[%02x] = %04x\n", VAR_9, VAR_10);
 FUNC_3(&VAR_11->addr_lock);

 FUNC_7(&VAR_11->lock,VAR_12);


 VAR_13 = FUNC_6(VAR_11->io_addr);


 FUNC_2(VAR_11, VAR_0, VAR_4 | VAR_9);


 FUNC_2(VAR_11, VAR_3, VAR_10);
 FUNC_2(VAR_11, VAR_2, VAR_10 >> 8);

 FUNC_2(VAR_11, VAR_1, VAR_5 | VAR_6);

 FUNC_9(VAR_13, VAR_11->io_addr);
 FUNC_8(&VAR_11->lock, VAR_12);

 FUNC_1(VAR_11, 1);

 FUNC_7(&VAR_11->lock,VAR_12);
 VAR_13 = FUNC_6(VAR_11->io_addr);

 FUNC_2(VAR_11, VAR_1, 0x0);


 FUNC_9(VAR_13, VAR_11->io_addr);

 FUNC_8(&VAR_11->lock, VAR_12);
 FUNC_4(&VAR_11->addr_lock);
}
