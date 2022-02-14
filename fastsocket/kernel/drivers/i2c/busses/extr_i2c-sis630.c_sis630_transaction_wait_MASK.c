
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = 0, VAR_10 = 0;


 do {
  FUNC_2(1);
  VAR_8 = FUNC_3(VAR_5);

  if (VAR_7 == VAR_4 && (VAR_8 & 0x10))
   break;
 } while (!(VAR_8 & 0x0e) && (VAR_10++ < VAR_3));


 if (VAR_10 > VAR_3) {
  FUNC_0(&VAR_6->dev, "SMBus Timeout!\n");
  VAR_9 = -VAR_2;
 }

 if (VAR_8 & 0x02) {
  FUNC_0(&VAR_6->dev, "Error: Failed bus transaction\n");
  VAR_9 = -VAR_1;
 }

 if (VAR_8 & 0x04) {
  FUNC_1(&VAR_6->dev, "Bus collision!\n");
  VAR_9 = -VAR_0;





 }

 return VAR_9;
}
