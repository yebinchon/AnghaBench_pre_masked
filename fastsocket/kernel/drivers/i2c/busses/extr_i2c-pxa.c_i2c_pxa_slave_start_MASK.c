
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
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
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct pxa_i2c *VAR_5, u32 VAR_6)
{
 int VAR_7;






 FUNC_4(FUNC_3(FUNC_1(VAR_5)) & ~(VAR_2|VAR_3), FUNC_1(VAR_5));
 FUNC_4(FUNC_3(FUNC_1(VAR_5)) | VAR_4 | VAR_0, FUNC_1(VAR_5));

 VAR_7 = 0x10000;

 while (1) {
  if ((FUNC_3(FUNC_0(VAR_5)) & 2) == 2)
   break;

  VAR_7--;

  if (VAR_7 <= 0) {
   FUNC_2(&VAR_5->adap.dev, "timeout waiting for SCL high\n");
   break;
  }
 }

 FUNC_4(FUNC_3(FUNC_1(VAR_5)) & ~VAR_1, FUNC_1(VAR_5));
}
