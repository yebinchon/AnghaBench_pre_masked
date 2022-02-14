
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; } ;
struct e8390_pkt_hdr {int count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,struct e8390_pkt_hdr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6,
    struct e8390_pkt_hdr *VAR_7,
    int VAR_8)
{
    unsigned int VAR_9 = VAR_6->base_addr;

    FUNC_2(0, VAR_9 + VAR_5);
    FUNC_2(VAR_8, VAR_9 + VAR_4);
    FUNC_2(VAR_2+VAR_3, VAR_9 + VAR_0);

    FUNC_0(VAR_9 + VAR_1, VAR_7,
     sizeof(struct e8390_pkt_hdr)>>1);

    VAR_7->count = FUNC_1(VAR_7->count);

}
