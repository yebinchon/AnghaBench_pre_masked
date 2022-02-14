
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; scalar_t__ if_port; } ;
struct el3_private {int media_status; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 struct el3_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6, int VAR_7)
{
    struct el3_private *VAR_8 = FUNC_1(VAR_6);
    unsigned int VAR_9 = VAR_6->base_addr;

    FUNC_0(0);
    switch (VAR_7) {
    case 0: case 1: FUNC_2(0, VAR_9 + 6); break;
    case 2: FUNC_2(3<<14, VAR_9 + 6); break;
    case 3: FUNC_2(1<<14, VAR_9 + 6); break;
    }

    FUNC_2((VAR_7 == 2) ? VAR_3 : VAR_4, VAR_9 + VAR_0);

    FUNC_0(4);
    FUNC_2(VAR_1 | ((VAR_7 < 2) ? VAR_2 : 0), VAR_9 + VAR_5);
    FUNC_0(1);
    if (VAR_7 == 2)
 VAR_8->media_status = ((VAR_6->if_port == 0) ? 0x8000 : 0x4000);
    else
 VAR_8->media_status = ((VAR_6->if_port == 0) ? 0x4010 : 0x8800);
}
