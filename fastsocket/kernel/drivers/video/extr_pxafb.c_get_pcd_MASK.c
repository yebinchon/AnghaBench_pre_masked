
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_info {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct pxafb_info *VAR_0,
       unsigned int VAR_1)
{
 unsigned long long VAR_2;




 VAR_2 = (unsigned long long)(FUNC_0(VAR_0->clk) / 10000);
 VAR_2 *= VAR_1;
 FUNC_1(VAR_2, 100000000 * 2);


 return (unsigned int)VAR_2;
}
