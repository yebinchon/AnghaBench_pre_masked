
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_dev {int dummy; } ;
struct budget {int debilock; struct saa7146_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct saa7146_dev*,int ) ;
 int FUNC_1 (struct saa7146_dev*,int) ;
 int FUNC_2 (struct saa7146_dev*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct budget *VAR_5, u32 VAR_6, int VAR_7, int VAR_8,
     int VAR_9, int VAR_10)
{
 struct saa7146_dev *VAR_11 = VAR_5->dev;
 int VAR_12 = 0;
 unsigned long VAR_13 = 0;

 if (VAR_8 > 4 || VAR_8 <= 0)
  return 0;

 if (VAR_9)
  FUNC_3(&VAR_5->debilock, VAR_13);

 if ((VAR_12 = FUNC_1(VAR_11, VAR_10)) < 0) {
  if (VAR_9)
   FUNC_4(&VAR_5->debilock, VAR_13);
  return VAR_12;
 }

 FUNC_2(VAR_11, VAR_1, (VAR_8 << 17) | 0x10000 | (VAR_7 & 0xffff));
 FUNC_2(VAR_11, VAR_2, VAR_6);
 FUNC_2(VAR_11, VAR_3, 0);
 FUNC_2(VAR_11, VAR_4, (2 << 16) | 2);

 if ((VAR_12 = FUNC_1(VAR_11, VAR_10)) < 0) {
  if (VAR_9)
   FUNC_4(&VAR_5->debilock, VAR_13);
  return VAR_12;
 }

 VAR_12 = FUNC_0(VAR_11, VAR_0);
 VAR_12 &= (0xffffffffUL >> ((4 - VAR_8) * 8));

 if (VAR_9)
  FUNC_4(&VAR_5->debilock, VAR_13);

 return VAR_12;
}
