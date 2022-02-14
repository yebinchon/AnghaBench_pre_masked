
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct queue_entry {int entry_idx; } ;
struct data_queue {int qid; struct rt2x00_dev* rt2x00dev; } ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ) ;
 struct queue_entry* FUNC_2 (struct data_queue*,int ) ;

__attribute__((used)) static void FUNC_3(struct data_queue *VAR_1)
{
 struct rt2x00_dev *VAR_2 = VAR_1->rt2x00dev;
 struct queue_entry *VAR_3;

 switch (VAR_1->qid) {
 case 129:
 case 130:
 case 132:
 case 131:
  VAR_3 = FUNC_2(VAR_1, VAR_0);
  FUNC_1(VAR_2, FUNC_0(VAR_1->qid),
       VAR_3->entry_idx);
  break;
 case 128:
  VAR_3 = FUNC_2(VAR_1, VAR_0);
  FUNC_1(VAR_2, FUNC_0(5),
       VAR_3->entry_idx);
  break;
 default:
  break;
 }
}
