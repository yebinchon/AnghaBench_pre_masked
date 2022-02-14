
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct skge_port {int dma; int mem; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct skge_element {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct skge_hw*,int ) ;
 int FUNC_2 (struct skge_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct skge_port *VAR_8, u16 VAR_9,
        const struct skge_element *VAR_10)
{
 struct skge_hw *VAR_11 = VAR_8->hw;
 u32 VAR_12 = 0x600;
 u64 VAR_13 = VAR_8->dma + (VAR_10->desc - VAR_8->mem);


 if ((FUNC_1(VAR_11, VAR_0) & (VAR_2 | VAR_3)) == 0)
  VAR_12 /= 2;

 FUNC_2(VAR_11, FUNC_0(VAR_9, VAR_4), VAR_1);
 FUNC_2(VAR_11, FUNC_0(VAR_9, VAR_7), VAR_12);
 FUNC_2(VAR_11, FUNC_0(VAR_9, VAR_5), (u32)(VAR_13 >> 32));
 FUNC_2(VAR_11, FUNC_0(VAR_9, VAR_6), (u32)VAR_13);
}
