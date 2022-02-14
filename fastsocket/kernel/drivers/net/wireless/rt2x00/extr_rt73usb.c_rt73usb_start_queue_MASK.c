
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct data_queue {int qid; struct rt2x00_dev* rt2x00dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct data_queue *VAR_6)
{
 struct rt2x00_dev *VAR_7 = VAR_6->rt2x00dev;
 u32 VAR_8;

 switch (VAR_6->qid) {
 case 128:
  FUNC_1(VAR_7, VAR_0, &VAR_8);
  FUNC_0(&VAR_8, VAR_1, 0);
  FUNC_2(VAR_7, VAR_0, VAR_8);
  break;
 case 129:
  FUNC_1(VAR_7, VAR_2, &VAR_8);
  FUNC_0(&VAR_8, VAR_5, 1);
  FUNC_0(&VAR_8, VAR_4, 1);
  FUNC_0(&VAR_8, VAR_3, 1);
  FUNC_2(VAR_7, VAR_2, VAR_8);
  break;
 default:
  break;
 }
}
