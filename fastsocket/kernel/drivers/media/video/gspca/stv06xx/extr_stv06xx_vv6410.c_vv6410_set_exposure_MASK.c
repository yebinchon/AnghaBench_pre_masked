
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (struct sd*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_7, __s32 VAR_8)
{
 int VAR_9;
 struct sd *VAR_10 = (struct sd *) VAR_7;
 s32 *VAR_11 = VAR_10->sensor_priv;
 unsigned int VAR_12, VAR_13;

 VAR_11[VAR_1] = VAR_8;

 VAR_8 = (VAR_8 * VAR_8 >> 14) + VAR_8 / 4;

 VAR_12 = VAR_8 % VAR_2;
 VAR_13 = FUNC_1(512, VAR_8 / VAR_2);

 FUNC_0(VAR_0, "Set coarse exposure to %d, fine expsure to %d",
        VAR_13, VAR_12);

 VAR_9 = FUNC_2(VAR_10, VAR_5, VAR_12 >> 8);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_2(VAR_10, VAR_6, VAR_12 & 0xff);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_2(VAR_10, VAR_3, VAR_13 >> 8);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_2(VAR_10, VAR_4, VAR_13 & 0xff);

out:
 return VAR_9;
}
