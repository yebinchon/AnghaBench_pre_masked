
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int* sensor_priv; } ;
struct gspca_dev {int width; int height; } ;
typedef int s32 ;
typedef int __s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_4, __s32 VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 struct sd *VAR_10 = (struct sd *) VAR_4;
 s32 *VAR_11 = VAR_10->sensor_priv;

 VAR_11[VAR_0] = VAR_5;



 VAR_7 = VAR_4->width * VAR_4->height;
 VAR_7 = VAR_7/(8*8) + VAR_7/(64*64);

 VAR_8 = (VAR_7 * VAR_5) >> 8;
 VAR_9 = VAR_7 - VAR_8;
 VAR_6 = FUNC_1(VAR_10, VAR_2, VAR_8);
 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_10, VAR_3, VAR_9);

 FUNC_0(VAR_1, "Set autogain target to %d, status: %d", VAR_5, VAR_6);

 return VAR_6;
}
