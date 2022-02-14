
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;
struct antenna_setup {int rx; int tx; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct rt2x00_dev*,int,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rt2x00_dev *VAR_13,
     struct antenna_setup *VAR_14)
{
 u8 VAR_15;
 u8 VAR_16;
 u16 VAR_17;
 u16 VAR_18;





 FUNC_0(VAR_14->rx == VAR_0 ||
        VAR_14->tx == VAR_0);

 FUNC_1(VAR_13, 2, &VAR_15);
 FUNC_1(VAR_13, 14, &VAR_16);
 FUNC_3(VAR_13, VAR_5, &VAR_17);
 FUNC_3(VAR_13, VAR_8, &VAR_18);




 switch (VAR_14->tx) {
 case 128:
  FUNC_7(&VAR_15, VAR_3, 1);
  FUNC_6(&VAR_17, VAR_6, 1);
  FUNC_6(&VAR_18, VAR_9, 1);
  break;
 case 130:
  FUNC_7(&VAR_15, VAR_3, 0);
  FUNC_6(&VAR_17, VAR_6, 0);
  FUNC_6(&VAR_18, VAR_9, 0);
  break;
 case 129:
 default:
  FUNC_7(&VAR_15, VAR_3, 2);
  FUNC_6(&VAR_17, VAR_6, 2);
  FUNC_6(&VAR_18, VAR_9, 2);
  break;
 }




 switch (VAR_14->rx) {
 case 128:
  FUNC_7(&VAR_16, VAR_1, 1);
  break;
 case 130:
  FUNC_7(&VAR_16, VAR_1, 0);
  break;
 case 129:
 default:
  FUNC_7(&VAR_16, VAR_1, 2);
  break;
 }




 if (FUNC_5(VAR_13, VAR_11) || FUNC_5(VAR_13, VAR_12)) {
  FUNC_7(&VAR_15, VAR_4, 1);
  FUNC_6(&VAR_17, VAR_7, 1);
  FUNC_6(&VAR_18, VAR_10, 1);




  if (FUNC_5(VAR_13, VAR_11))
   FUNC_7(&VAR_16, VAR_2, 0);
 } else {
  FUNC_6(&VAR_17, VAR_7, 0);
  FUNC_6(&VAR_18, VAR_10, 0);
 }

 FUNC_2(VAR_13, 2, VAR_15);
 FUNC_2(VAR_13, 14, VAR_16);
 FUNC_4(VAR_13, VAR_5, VAR_17);
 FUNC_4(VAR_13, VAR_8, VAR_18);
}
