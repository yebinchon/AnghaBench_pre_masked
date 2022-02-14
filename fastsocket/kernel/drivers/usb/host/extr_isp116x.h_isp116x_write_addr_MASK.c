
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp116x {int addr_reg; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct isp116x*,int) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct isp116x *VAR_0, unsigned VAR_1)
{
 FUNC_0();
 FUNC_2(VAR_1 & 0xff, VAR_0->addr_reg);
 FUNC_1(VAR_0, 300);
}
