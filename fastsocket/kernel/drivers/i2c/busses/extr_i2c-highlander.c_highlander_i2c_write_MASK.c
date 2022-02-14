
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct highlander_i2c_dev {int buf_len; int dev; scalar_t__ base; int buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct highlander_i2c_dev*) ;
 scalar_t__ FUNC_2 (struct highlander_i2c_dev*) ;
 int FUNC_3 (struct highlander_i2c_dev*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct highlander_i2c_dev *VAR_2)
{
 int VAR_3, VAR_4;
 u16 VAR_5[16];

 FUNC_5(VAR_2->buf, VAR_5, VAR_2->buf_len);

 VAR_4 = (VAR_2->buf_len + 1) >> 1;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_4(VAR_5[VAR_3], VAR_2->base + VAR_1 + (VAR_3 * sizeof(u16)));
  FUNC_0(VAR_2->dev, "write data[%x] 0x%04x\n", VAR_3, VAR_5[VAR_3]);
 }

 if (FUNC_2(VAR_2))
  return -VAR_0;

 FUNC_1(VAR_2);

 return FUNC_3(VAR_2);
}
