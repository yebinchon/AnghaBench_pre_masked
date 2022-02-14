
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2, int VAR_3,
   unsigned VAR_4, void *VAR_5)
{
 int VAR_6;
 int VAR_7;
 char VAR_8[10];

 for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
  FUNC_4(VAR_8, 10, "user_sw%d", VAR_7);
  VAR_6 = FUNC_3(VAR_3, VAR_8);
  if (VAR_6)
   goto out_free;
  VAR_1[VAR_7] = VAR_3++;

  VAR_6 = FUNC_0(VAR_1[VAR_7]);
  if (VAR_6) {
   FUNC_2(VAR_1[VAR_7]);
   VAR_1[VAR_7] = -VAR_0;
   goto out_free;
  }

  VAR_6 = FUNC_1(VAR_1[VAR_7], 0);
  if (VAR_6) {
   FUNC_2(VAR_1[VAR_7]);
   VAR_1[VAR_7] = -VAR_0;
   goto out_free;
  }
 }
 return VAR_6;
out_free:
 for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
  if (VAR_1[VAR_7] != -VAR_0) {
   FUNC_2(VAR_1[VAR_7]);
   VAR_1[VAR_7] = -VAR_0;
  }
 }
 return VAR_6;
}
