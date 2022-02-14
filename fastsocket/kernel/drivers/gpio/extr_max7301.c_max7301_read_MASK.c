
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef int u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int *,int) ;
 int FUNC_1 (struct spi_device*,int const*,int) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 VAR_3 = 0x8000 | (VAR_1 << 8);
 VAR_2 = FUNC_1(VAR_0, (const u8 *)&VAR_3, sizeof(VAR_3));
 if (VAR_2)
  return VAR_2;




 VAR_2 = FUNC_0(VAR_0, (u8 *)&VAR_3, sizeof(VAR_3));
 if (VAR_2)
  return VAR_2;
 return VAR_3 & 0xff;
}
