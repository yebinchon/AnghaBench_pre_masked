
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {int phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tsi108_prv_data *VAR_9, int VAR_10)
{
 unsigned VAR_11;

 FUNC_1(VAR_0,
    (VAR_9->phy << VAR_1) |
    (VAR_10 << VAR_2));
 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_3, VAR_4);
 for (VAR_11 = 0; VAR_11 < 100; VAR_11++) {
  if (!(FUNC_0(VAR_6) &
        (VAR_8 | VAR_7)))
   break;
  FUNC_2(10);
 }

 if (VAR_11 == 100)
  return 0xffff;
 else
  return (FUNC_0(VAR_5));
}
