
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,char) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_7, enum dev_state VAR_8)
{
 u32 VAR_9, VAR_10;
 unsigned int VAR_11;
 char VAR_12;

 VAR_12 = (VAR_8 != VAR_6);

 FUNC_3(VAR_7, VAR_1, &VAR_9);
 FUNC_2(&VAR_9, VAR_3, !VAR_12);
 FUNC_2(&VAR_9, VAR_4, VAR_12);
 FUNC_4(VAR_7, VAR_1, VAR_9);






 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  FUNC_3(VAR_7, VAR_1, &VAR_10);
  VAR_8 = FUNC_1(VAR_10, VAR_2);
  if (VAR_8 == !VAR_12)
   return 0;
  FUNC_4(VAR_7, VAR_1, VAR_9);
  FUNC_0(10);
 }

 return -VAR_0;
}
