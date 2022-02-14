
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,scalar_t__*) ;
 int FUNC_4 (struct rt2x00_dev*,int,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ,int) ;

__attribute__((used)) static u8 FUNC_6(struct rt2x00_dev *VAR_3, bool VAR_4,
    u8 VAR_5)
{
 unsigned int VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11 = 0;
 u8 VAR_12 = (VAR_4) ? 0x27 : 0x07;

 FUNC_4(VAR_3, 24, VAR_12);

 FUNC_1(VAR_3, 4, &VAR_7);
 FUNC_5(&VAR_7, VAR_0, 2 * VAR_4);
 FUNC_2(VAR_3, 4, VAR_7);

 FUNC_3(VAR_3, 31, &VAR_8);
 FUNC_5(&VAR_8, VAR_2, VAR_4);
 FUNC_4(VAR_3, 31, VAR_8);

 FUNC_3(VAR_3, 22, &VAR_8);
 FUNC_5(&VAR_8, VAR_1, 1);
 FUNC_4(VAR_3, 22, VAR_8);




 FUNC_2(VAR_3, 24, 0);

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  FUNC_2(VAR_3, 25, 0x90);
  FUNC_0(1);

  FUNC_1(VAR_3, 55, &VAR_9);
  if (VAR_9)
   break;
 }




 FUNC_2(VAR_3, 24, 0x06);

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  FUNC_2(VAR_3, 25, 0x90);
  FUNC_0(1);

  FUNC_1(VAR_3, 55, &VAR_10);

  if ((VAR_9 - VAR_10) <= VAR_5) {
   VAR_12++;
   VAR_11 += ((VAR_9 - VAR_10) == VAR_5);
  } else
   break;

  FUNC_4(VAR_3, 24, VAR_12);
 }

 VAR_12 -= !!VAR_11;

 FUNC_4(VAR_3, 24, VAR_12);
 return VAR_12;
}
