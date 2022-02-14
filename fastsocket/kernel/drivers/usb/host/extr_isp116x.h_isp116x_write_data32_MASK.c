
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp116x {int data_reg; } ;


 int FUNC_0 (struct isp116x*,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct isp116x *VAR_0, u32 VAR_1)
{
 FUNC_1(VAR_1 & 0xffff, VAR_0->data_reg);
 FUNC_0(VAR_0, 150);
 FUNC_1(VAR_1 >> 16, VAR_0->data_reg);
 FUNC_0(VAR_0, 150);
}
