
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410fb_info {unsigned long clk_rate; } ;


 int FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (char*,unsigned long,long) ;

__attribute__((used)) static unsigned int FUNC_2(struct s3c2410fb_info *VAR_0,
       unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_0->clk_rate;
 unsigned long long VAR_3;






 VAR_3 = (unsigned long long)VAR_2 * VAR_1;
 VAR_3 >>= 12;
 FUNC_0(VAR_3, 625 * 625UL * 625);

 FUNC_1("pixclk %ld, divisor is %ld\n", VAR_1, (long)VAR_3);
 return VAR_3;
}
