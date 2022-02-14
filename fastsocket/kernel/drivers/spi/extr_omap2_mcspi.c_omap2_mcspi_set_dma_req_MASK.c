
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct spi_device const*) ;
 int FUNC_2 (struct spi_device const*,int ) ;

__attribute__((used)) static void FUNC_3(const struct spi_device *VAR_2,
  int VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_2);

 if (VAR_3)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;

 FUNC_0(VAR_5, VAR_6, VAR_4);
 FUNC_2(VAR_2, VAR_5);
}
