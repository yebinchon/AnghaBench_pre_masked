
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
 int VAR_4 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct mc13783 *VAR_5, int VAR_6, u32 VAR_7)
{
 unsigned int VAR_8 = 0;

 if (VAR_6 > VAR_2)
  return -VAR_0;

 VAR_8 |= (1 << VAR_4);
 VAR_8 |= VAR_6 << VAR_3;
 VAR_8 |= VAR_7 & VAR_1;

 return FUNC_0(VAR_5->spi_device, (u8 *)&VAR_8, 4);
}
