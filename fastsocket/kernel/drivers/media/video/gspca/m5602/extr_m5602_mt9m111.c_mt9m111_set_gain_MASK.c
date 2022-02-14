
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_6, __s32 VAR_7)
{
 int VAR_8, VAR_9;
 u8 VAR_10[2] = {0x00, 0x00};
 struct sd *VAR_11 = (struct sd *) VAR_6;
 s32 *VAR_12 = VAR_11->sensor_priv;

 VAR_12[VAR_2] = VAR_7;


 VAR_8 = FUNC_1(VAR_11, VAR_4, VAR_10, 2);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 >= VAR_3 * 2 * 2 * 2)
  return -VAR_1;

 if ((VAR_7 >= VAR_3 * 2 * 2) &&
     (VAR_7 < (VAR_3 - 1) * 2 * 2 * 2))
  VAR_9 = (1 << 10) | (VAR_7 << 9) |
    (VAR_7 << 8) | (VAR_7 / 8);
 else if ((VAR_7 >= VAR_3 * 2) &&
   (VAR_7 < VAR_3 * 2 * 2))
  VAR_9 = (1 << 9) | (1 << 8) | (VAR_7 / 4);
 else if ((VAR_7 >= VAR_3) &&
   (VAR_7 < VAR_3 * 2))
  VAR_9 = (1 << 8) | (VAR_7 / 2);
 else
  VAR_9 = VAR_7;

 VAR_10[1] = (VAR_9 & 0xff);
 VAR_10[0] = (VAR_9 & 0xff00) >> 8;
 FUNC_0(VAR_0, "tmp=%d, data[1]=%d, data[0]=%d", VAR_9,
        VAR_10[1], VAR_10[0]);

 VAR_8 = FUNC_1(VAR_11, VAR_5,
       VAR_10, 2);

 return VAR_8;
}
