
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_isdb_t_transmission_mode_params {int dummy; } ;
struct s921_isdb_t {int (* i2c_write ) (int ,int,int) ;int priv_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct s921_isdb_t *VAR_2, struct s921_isdb_t_transmission_mode_params *VAR_3) {

 int VAR_4;




 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xb0, 0xa0);
 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xb2, 0x3d);

 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xb3, 0x25);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xb4, 0x8b);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xb5, 0x4b);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xb6, 0x3f);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->i2c_write(VAR_2->priv_dev, 0xb7, 0x3f);
 if (VAR_4 < 0)
  return -VAR_0;

 return VAR_1;
}
