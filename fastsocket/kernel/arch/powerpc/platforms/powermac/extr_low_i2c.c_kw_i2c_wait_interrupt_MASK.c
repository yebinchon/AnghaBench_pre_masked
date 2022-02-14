
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmac_i2c_host_kw {scalar_t__ polled; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static u8 FUNC_3(struct pmac_i2c_host_kw *VAR_2)
{
 int VAR_3, VAR_4;
 u8 VAR_5;

 for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
  VAR_5 = FUNC_0(VAR_1) & VAR_0;
  if (VAR_5 != 0)
   return VAR_5;





  if (VAR_2->polled) {
   for (VAR_4 = 1; VAR_4 < 100000; VAR_4++)
    FUNC_1();
  } else
   FUNC_2(1);
 }
 return VAR_5;
}
