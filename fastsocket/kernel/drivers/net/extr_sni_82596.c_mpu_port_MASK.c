
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct i596_private {int options; int mpu_port; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 struct i596_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, int VAR_2, dma_addr_t VAR_3)
{
 struct i596_private *VAR_4 = FUNC_0(VAR_1);

 u32 VAR_5 = (u32) (VAR_2) | (u32) (VAR_3);

 if (VAR_4->options & VAR_0) {
  FUNC_4(VAR_5 & 0xffff, VAR_4->mpu_port);
  FUNC_2();
  FUNC_1(1);
  FUNC_4(VAR_5 >> 16, VAR_4->mpu_port);
 } else {
  FUNC_3(VAR_5, VAR_4->mpu_port);
  FUNC_2();
  FUNC_1(1);
  FUNC_3(VAR_5, VAR_4->mpu_port);
 }
}
