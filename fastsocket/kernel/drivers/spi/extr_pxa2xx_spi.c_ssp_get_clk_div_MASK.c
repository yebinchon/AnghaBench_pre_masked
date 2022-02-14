
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {scalar_t__ type; int clk; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct ssp_device *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1->clk);

 if (VAR_1->type == VAR_0)
  return ((VAR_3 / (2 * VAR_2) - 1) & 0xff) << 8;
 else
  return ((VAR_3 / VAR_2 - 1) & 0xfff) << 8;
}
