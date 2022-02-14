
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct highlander_i2c_dev {int buf_len; scalar_t__ last_read_time; int buf; int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct highlander_i2c_dev*) ;
 scalar_t__ FUNC_3 (struct highlander_i2c_dev*) ;
 scalar_t__ FUNC_4 (struct highlander_i2c_dev*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct highlander_i2c_dev *VAR_4)
{
 int VAR_5, VAR_6;
 u16 VAR_7[16];

 if (FUNC_3(VAR_4))
  return -VAR_0;

 FUNC_2(VAR_4);

 if (FUNC_4(VAR_4)) {
  FUNC_1(VAR_4->dev, "Arbitration loss\n");
  return -VAR_0;
 }
 if (VAR_2 && FUNC_10(VAR_3, VAR_4->last_read_time +
     FUNC_7(VAR_2)))
  FUNC_8(FUNC_6((VAR_4->last_read_time +
    FUNC_7(VAR_2)) - VAR_3));

 VAR_6 = (VAR_4->buf_len + 1) >> 1;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7[VAR_5] = FUNC_5(VAR_4->base + VAR_1 + (VAR_5 * sizeof(u16)));
  FUNC_0(VAR_4->dev, "read data[%x] 0x%04x\n", VAR_5, VAR_7[VAR_5]);
 }

 FUNC_9(VAR_7, VAR_4->buf, VAR_4->buf_len);

 VAR_4->last_read_time = VAR_3;

 return 0;
}
