
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s921_isdb_t {int (* i2c_read ) (int ,int) ;int priv_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct s921_isdb_t *VAR_0, void *VAR_1) {
 unsigned int *VAR_2 = (unsigned int*)VAR_1;
 u8 VAR_3;
 u8 VAR_4;

 FUNC_0(10);
 VAR_3 = VAR_0->i2c_read(VAR_0->priv_dev, 0x81);
 VAR_4 = VAR_0->i2c_read(VAR_0->priv_dev, 0x82);
 if (VAR_4 == 0x40) {
  *VAR_2 = 1;
 }
 return 0;
}
