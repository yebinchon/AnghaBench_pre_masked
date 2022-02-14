
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp116x {int data_reg; } ;


 int FUNC_0 (struct isp116x*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct isp116x *VAR_0)
{
 u32 VAR_1;

 VAR_1 = (u32) FUNC_1(VAR_0->data_reg);
 FUNC_0(VAR_0, 150);
 VAR_1 |= ((u32) FUNC_1(VAR_0->data_reg)) << 16;
 FUNC_0(VAR_0, 150);
 return VAR_1;
}
