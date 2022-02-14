
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ssb_device*) ;
 int FUNC_1 (struct ssb_device*,int ) ;
 int FUNC_2 (struct ssb_device*) ;
 int FUNC_3 (struct ssb_device*,int ,int,int,int) ;
 int FUNC_4 (struct ssb_device*,int ,int) ;

void FUNC_5(struct ssb_device *VAR_11, u32 VAR_12)
{
 u32 VAR_13, VAR_14;

 if (FUNC_1(VAR_11, VAR_7) & VAR_10)
  return;

 VAR_13 = FUNC_2(VAR_11);

 if (FUNC_1(VAR_11, VAR_7) & VAR_8) {
  FUNC_4(VAR_11, VAR_7, VAR_13 | VAR_8);
  FUNC_3(VAR_11, VAR_7, VAR_13, 1000, 1);
  FUNC_3(VAR_11, VAR_5, VAR_6, 1000, 0);

  if (FUNC_1(VAR_11, VAR_0) & VAR_1) {
   VAR_14 = FUNC_1(VAR_11, VAR_2);
   VAR_14 |= VAR_4;
   FUNC_4(VAR_11, VAR_2, VAR_14);
   FUNC_3(VAR_11, VAR_2, VAR_3, 1000,
          0);
  }

  FUNC_4(VAR_11, VAR_7,
   VAR_9 | VAR_8 |
   VAR_13 | VAR_10 |
   VAR_12);
  FUNC_0(VAR_11);

  if (FUNC_1(VAR_11, VAR_0) & VAR_1) {
   VAR_14 = FUNC_1(VAR_11, VAR_2);
   VAR_14 &= ~VAR_4;
   FUNC_4(VAR_11, VAR_2, VAR_14);
  }
 }

 FUNC_4(VAR_11, VAR_7,
      VAR_13 | VAR_10 |
      VAR_12);
 FUNC_0(VAR_11);
}
