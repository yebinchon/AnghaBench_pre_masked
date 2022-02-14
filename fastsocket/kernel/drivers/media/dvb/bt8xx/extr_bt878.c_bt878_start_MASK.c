
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bt878 {int risc_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bt878*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(struct bt878 *VAR_12, u32 VAR_13, u32 VAR_14,
  u32 VAR_15)
{
 u32 VAR_16;

 FUNC_2("bt878 debug: bt878_start (ctl=%8.8x)\n", VAR_13);



 FUNC_0(VAR_12, VAR_14);
 VAR_13 &= ~0x1f;
 VAR_13 |= 0x1b;

 FUNC_1(VAR_12->risc_dma, VAR_10);
 VAR_16 = VAR_11 | VAR_5 | VAR_6 |
  VAR_8 | VAR_7 | VAR_1 | VAR_2 |
  VAR_0 | VAR_9;



 VAR_16 &= ~VAR_15;

 FUNC_1(VAR_16, VAR_4);
 FUNC_1(VAR_13, VAR_3);
}
