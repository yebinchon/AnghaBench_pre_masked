
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct si470x_device*,int) ;
 int FUNC_1 (struct si470x_device*,size_t) ;
 int VAR_12 ;

int FUNC_2(struct si470x_device *VAR_13)
{
 int VAR_14;


 VAR_13->registers[VAR_2] =
  VAR_3 | VAR_4 | VAR_5;
 VAR_14 = FUNC_1(VAR_13, VAR_2);
 if (VAR_14 < 0)
  goto done;


 VAR_13->registers[VAR_6] = VAR_7;
 VAR_14 = FUNC_1(VAR_13, VAR_6);
 if (VAR_14 < 0)
  goto done;


 VAR_13->registers[VAR_8] =
  (0x3f << 8) |
  ((VAR_11 << 6) & VAR_9) |
  ((VAR_12 << 4) & VAR_10) |
  15;
 VAR_14 = FUNC_1(VAR_13, VAR_8);
 if (VAR_14 < 0)
  goto done;


 VAR_14 = FUNC_0(VAR_13,
  VAR_13->registers[VAR_0] & VAR_1);

done:
 return VAR_14;
}
