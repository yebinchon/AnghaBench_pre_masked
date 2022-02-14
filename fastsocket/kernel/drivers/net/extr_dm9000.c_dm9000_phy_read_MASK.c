
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {int addr_lock; int lock; int io_addr; } ;
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
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct net_device*) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_11(struct net_device *VAR_7, int VAR_8, int VAR_9)
{
 board_info_t *VAR_10 = FUNC_6(VAR_7);
 unsigned long VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_4(&VAR_10->addr_lock);

 FUNC_8(&VAR_10->lock,VAR_11);


 VAR_12 = FUNC_7(VAR_10->io_addr);


 FUNC_3(VAR_10, VAR_0, VAR_4 | VAR_9);

 FUNC_3(VAR_10, VAR_1, VAR_6 | VAR_5);

 FUNC_10(VAR_12, VAR_10->io_addr);
 FUNC_9(&VAR_10->lock,VAR_11);

 FUNC_1(VAR_10, 1);

 FUNC_8(&VAR_10->lock,VAR_11);
 VAR_12 = FUNC_7(VAR_10->io_addr);

 FUNC_3(VAR_10, VAR_1, 0x0);


 VAR_13 = (FUNC_2(VAR_10, VAR_2) << 8) | FUNC_2(VAR_10, VAR_3);


 FUNC_10(VAR_12, VAR_10->io_addr);
 FUNC_9(&VAR_10->lock,VAR_11);

 FUNC_5(&VAR_10->addr_lock);

 FUNC_0(VAR_10, 5, "phy_read[%02x] -> %04x\n", VAR_9, VAR_13);
 return VAR_13;
}
