
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nforce2_smbus {int dummy; } ;
struct i2c_adapter {int dev; struct nforce2_smbus* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_5(struct i2c_adapter *VAR_5)
{
 struct nforce2_smbus *VAR_6 = VAR_5->algo_data;
 int VAR_7 = 0;
 unsigned char VAR_8;

 FUNC_0(&VAR_5->dev, "Aborting current transaction\n");

 FUNC_4(VAR_2, VAR_1);
 do {
  FUNC_3(1);
  VAR_8 = FUNC_2(VAR_3);
 } while (!(VAR_8 & VAR_4) &&
   (VAR_7++ < VAR_0));
 if (!(VAR_8 & VAR_4))
  FUNC_1(&VAR_5->dev, "Can't reset the smbus\n");
 FUNC_4(VAR_4, VAR_3);
}
