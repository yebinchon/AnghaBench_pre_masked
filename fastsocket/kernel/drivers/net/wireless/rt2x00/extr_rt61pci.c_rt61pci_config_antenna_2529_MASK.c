
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct antenna_setup {int rx; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_2,
     struct antenna_setup *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;
 u8 VAR_6;

 FUNC_1(VAR_2, 3, &VAR_4);
 FUNC_1(VAR_2, 4, &VAR_5);
 FUNC_1(VAR_2, 77, &VAR_6);




 switch (VAR_3->rx) {
 case 130:
  FUNC_0(&VAR_5, VAR_0, 1);
  FUNC_0(&VAR_6, VAR_1, 0);
  FUNC_3(VAR_2, 0, 0);
  break;
 case 128:





 case 129:
 default:
  FUNC_0(&VAR_5, VAR_0, 1);
  FUNC_0(&VAR_6, VAR_1, 3);
  FUNC_3(VAR_2, 1, 1);
  break;
 }

 FUNC_2(VAR_2, 77, VAR_6);
 FUNC_2(VAR_2, 3, VAR_4);
 FUNC_2(VAR_2, 4, VAR_5);
}
