
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxser_port {scalar_t__ ioaddr; scalar_t__ rx_low_water; scalar_t__ rx_trigger; scalar_t__ rx_high_water; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mxser_port *VAR_8)
{
 u8 VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_0(VAR_8->ioaddr + VAR_7);
 FUNC_1(VAR_3, VAR_8->ioaddr + VAR_7);

 VAR_10 = FUNC_0(VAR_8->ioaddr + VAR_2);
 VAR_10 &= ~VAR_1;
 VAR_10 |= VAR_0;

 FUNC_1(VAR_10, VAR_8->ioaddr + VAR_2);
 FUNC_1((u8)VAR_8->rx_high_water, VAR_8->ioaddr + VAR_4);
 FUNC_1((u8)VAR_8->rx_trigger, VAR_8->ioaddr + VAR_5);
 FUNC_1((u8)VAR_8->rx_low_water, VAR_8->ioaddr + VAR_6);
 FUNC_1(VAR_9, VAR_8->ioaddr + VAR_7);
}
