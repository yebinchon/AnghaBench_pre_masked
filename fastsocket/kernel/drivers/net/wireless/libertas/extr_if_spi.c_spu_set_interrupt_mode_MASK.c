
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_spi_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct if_spi_card*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct if_spi_card *VAR_11,
      int VAR_12,
      int VAR_13)
{
 int VAR_14 = 0;



 if (VAR_12) {
  VAR_14 = FUNC_0(VAR_11, VAR_10, 0);
  if (VAR_14)
   return VAR_14;
 } else {
  VAR_14 = FUNC_0(VAR_11, VAR_10,
         VAR_8 |
         VAR_7 |
         VAR_5 |
         VAR_4 |
         VAR_6);
  if (VAR_14)
   return VAR_14;
 }





 if (VAR_13) {
  VAR_14 = FUNC_0(VAR_11, VAR_9,
    VAR_3 |
    VAR_2 |
    VAR_0 |
    VAR_1);
  if (VAR_14)
   return VAR_14;
 } else {
  VAR_14 = FUNC_0(VAR_11, VAR_10, 0);
  if (VAR_14)
   return VAR_14;
 }
 return VAR_14;
}
