
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct driver_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct driver_data *VAR_3)
{
 unsigned long VAR_4 = VAR_2 << 1;


 while (!(FUNC_1(VAR_3) & VAR_1) && --VAR_4)
  FUNC_0();

 FUNC_2(VAR_3, VAR_0);

 return VAR_4;
}
