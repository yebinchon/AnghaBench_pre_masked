
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_isdb_t_tune_params {int frequency; } ;
struct s921_isdb_t {int (* i2c_write ) (int ,int,int) ;int priv_dev; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ,int,int) ;

__attribute__((used)) static int FUNC_15(struct s921_isdb_t *VAR_2, struct s921_isdb_t_tune_params *VAR_3) {

 int VAR_4;
 int VAR_5;

 VAR_5 = (VAR_3->frequency - 473143000)/6000000;

 if (VAR_5 > 48) {
  return -VAR_0;
 }

 VAR_2->i2c_write(VAR_2->priv_dev, 0x47, 0x60);

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0x68, 0x00);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0x69, 0x89);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf0, 0x48);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf1, 0x19);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf2, VAR_1[VAR_5*3]);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf3, VAR_1[VAR_5*3+1]);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf4, VAR_1[VAR_5*3+2]);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf5, 0xae);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf6, 0xb7);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf7, 0xba);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xf8, 0xd7);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0x68, 0x0a);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0x69, 0x09);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_2->i2c_write(VAR_2->priv_dev, 0x01, 0x40);
 return 0;
}
