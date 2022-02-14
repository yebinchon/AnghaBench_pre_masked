
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_mem {int loc; int nr; int data; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, struct rtc_mem *VAR_3)
{
 unsigned char VAR_4[9];
 int VAR_5;

 if (VAR_3->loc < 8 || VAR_3->nr > 8)
  return -VAR_0;

 VAR_4[0] = VAR_3->loc;
 FUNC_1(VAR_4 + 1, VAR_3->data, VAR_3->nr);

 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3->nr + 1);
 return VAR_5 == VAR_3->nr + 1 ? 0 : -VAR_1;
}
