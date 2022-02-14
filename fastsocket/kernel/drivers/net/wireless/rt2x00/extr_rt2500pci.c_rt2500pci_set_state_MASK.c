
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 char FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,char) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_10,
          enum dev_state VAR_11)
{
 u32 VAR_12, VAR_13;
 unsigned int VAR_14;
 char VAR_15;
 char VAR_16;
 char VAR_17;

 VAR_15 = (VAR_11 != VAR_9);

 FUNC_3(VAR_10, VAR_1, &VAR_12);
 FUNC_2(&VAR_12, VAR_7, 1);
 FUNC_2(&VAR_12, VAR_3, VAR_11);
 FUNC_2(&VAR_12, VAR_6, VAR_11);
 FUNC_2(&VAR_12, VAR_4, VAR_15);
 FUNC_4(VAR_10, VAR_1, VAR_12);






 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  FUNC_3(VAR_10, VAR_1, &VAR_13);
  VAR_16 = FUNC_1(VAR_13, VAR_2);
  VAR_17 = FUNC_1(VAR_13, VAR_5);
  if (VAR_16 == VAR_11 && VAR_17 == VAR_11)
   return 0;
  FUNC_4(VAR_10, VAR_1, VAR_12);
  FUNC_0(10);
 }

 return -VAR_0;
}
