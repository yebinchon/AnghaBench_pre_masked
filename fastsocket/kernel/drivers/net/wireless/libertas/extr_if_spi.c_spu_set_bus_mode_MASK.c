
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct if_spi_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct if_spi_card*,int ,int*) ;
 int FUNC_2 (struct if_spi_card*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct if_spi_card *VAR_2, u16 VAR_3)
{
 int VAR_4 = 0;
 u16 VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;
 if ((VAR_5 & 0xF) != VAR_3) {
  FUNC_0("Can't read bus mode register.\n");
  return -VAR_0;
 }
 return 0;
}
