
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {scalar_t__ mmio; int dd_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct driver_data *VAR_4)
{
 unsigned long VAR_5;


 FUNC_5(VAR_1, VAR_4->mmio + VAR_0);


 FUNC_2(VAR_4->mmio + VAR_0);


 VAR_5 = VAR_3 + FUNC_1(2000);
 do {
  FUNC_0(10);
  if (FUNC_3(VAR_2, &VAR_4->dd_flag))
   return -1;

 } while ((FUNC_2(VAR_4->mmio + VAR_0) & VAR_1)
   && FUNC_4(VAR_3, VAR_5));

 if (FUNC_2(VAR_4->mmio + VAR_0) & VAR_1)
  return -1;

 return 0;
}
