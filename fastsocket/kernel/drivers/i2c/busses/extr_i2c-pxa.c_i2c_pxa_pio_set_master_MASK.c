
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pxa_i2c {TYPE_1__ adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pxa_i2c*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct pxa_i2c *VAR_5)
{

 long VAR_6 = 2 * VAR_0;




 while (VAR_6-- && FUNC_3(FUNC_1(VAR_5)) & (VAR_3 | VAR_4)) {
  FUNC_5(1000);
  FUNC_4(VAR_5);
 }

 if (VAR_6 < 0) {
  FUNC_4(VAR_5);
  FUNC_2(&VAR_5->adap.dev,
   "i2c_pxa: timeout waiting for bus free\n");
  return VAR_1;
 }




 FUNC_6(FUNC_3(FUNC_0(VAR_5)) | VAR_2, FUNC_0(VAR_5));

 return 0;
}
