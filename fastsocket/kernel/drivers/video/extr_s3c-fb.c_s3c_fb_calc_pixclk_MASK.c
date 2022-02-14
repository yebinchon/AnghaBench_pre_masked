
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_fb {int dev; int bus_clk; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned long,unsigned int,unsigned long) ;
 int FUNC_2 (unsigned long long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct s3c_fb *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_0->bus_clk);
 unsigned long long VAR_3;
 unsigned int VAR_4;

 VAR_3 = (unsigned long long)VAR_2;
 VAR_3 *= VAR_1;

 FUNC_2(VAR_3, 1000000000UL);
 VAR_4 = (unsigned int)VAR_3 / 1000;

 FUNC_1(VAR_0->dev, "pixclk=%u, clk=%lu, div=%d (%lu)\n",
  VAR_1, VAR_2, VAR_4, VAR_2 / VAR_4);

 return VAR_4;
}
