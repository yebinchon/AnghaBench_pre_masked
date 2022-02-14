
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; int flags; int mc_count; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_7)
{
    unsigned int VAR_8 = VAR_7->base_addr;
    unsigned VAR_9;

    FUNC_2(0x42);
    VAR_9 = FUNC_0(VAR_6) & 0xC0;

    if (VAR_7->flags & VAR_2) {
 FUNC_1(VAR_6, VAR_9 | 0x06);
    } else if (VAR_7->mc_count > 9 || (VAR_7->flags & VAR_1)) {
 FUNC_1(VAR_6, VAR_9 | 0x02);
    } else if (VAR_7->mc_count) {

 FUNC_1(VAR_6, VAR_9 | 0x01);
 FUNC_2(0x40);
 FUNC_1(VAR_5, VAR_3);
 FUNC_3(VAR_7);
 FUNC_2(0x40);
 FUNC_1(VAR_5, VAR_0 | VAR_4);
    } else {
 FUNC_1(VAR_6, VAR_9 | 0x00);
    }
    FUNC_2(0);
}
