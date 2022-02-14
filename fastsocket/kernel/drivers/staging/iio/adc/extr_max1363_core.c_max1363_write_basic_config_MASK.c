
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2,
          unsigned char VAR_3,
          unsigned char VAR_4)
{
 int VAR_5;
 u8 *VAR_6 = FUNC_2(2 , VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6[0] = VAR_3;
 VAR_6[1] = VAR_4;

 VAR_5 = FUNC_0(VAR_2, VAR_6, 2);
 FUNC_1(VAR_6);
 return (VAR_5 > 0) ? 0 : VAR_5;
}
