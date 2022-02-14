
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int cap_flags; } ;
struct antenna_setup {int rx; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int *) ;
 int FUNC_3 (struct rt2x00_dev*,int,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_6,
          struct antenna_setup *VAR_7)
{
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10;

 FUNC_2(VAR_6, 3, &VAR_8);
 FUNC_2(VAR_6, 4, &VAR_9);
 FUNC_2(VAR_6, 77, &VAR_10);

 FUNC_1(&VAR_8, VAR_0, FUNC_0(VAR_6, VAR_5));
 FUNC_1(&VAR_9, VAR_2,
     !FUNC_4(VAR_4, &VAR_6->cap_flags));




 switch (VAR_7->rx) {
 case 128:
  FUNC_1(&VAR_9, VAR_1, 2);
  break;
 case 130:
  FUNC_1(&VAR_9, VAR_1, 1);
  FUNC_1(&VAR_10, VAR_3, 3);
  break;
 case 129:
 default:
  FUNC_1(&VAR_9, VAR_1, 1);
  FUNC_1(&VAR_10, VAR_3, 0);
  break;
 }

 FUNC_3(VAR_6, 77, VAR_10);
 FUNC_3(VAR_6, 3, VAR_8);
 FUNC_3(VAR_6, 4, VAR_9);
}
