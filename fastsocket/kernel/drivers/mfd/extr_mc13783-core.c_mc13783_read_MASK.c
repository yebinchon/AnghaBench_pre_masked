
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct mc13783 {int spi_device; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct mc13783 *VAR_4, int VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7 = 0;
 int VAR_8 = 0;

 if (VAR_5 > VAR_2)
  return -VAR_0;

 VAR_7 |= VAR_5 << VAR_3;

 VAR_8 = FUNC_0(VAR_4->spi_device, (u8 *)&VAR_7, 4);

 *VAR_6 = VAR_7 & VAR_1;

 return VAR_8;
}
