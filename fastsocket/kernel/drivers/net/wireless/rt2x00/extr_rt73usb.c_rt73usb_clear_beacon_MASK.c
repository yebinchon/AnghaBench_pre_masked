
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {int entry_idx; TYPE_1__* queue; } ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,unsigned int,int *) ;
 int FUNC_3 (struct rt2x00_dev*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct queue_entry *VAR_2)
{
 struct rt2x00_dev *VAR_3 = VAR_2->queue->rt2x00dev;
 unsigned int VAR_4;
 u32 VAR_5;





 FUNC_2(VAR_3, VAR_0, &VAR_5);
 FUNC_1(&VAR_5, VAR_1, 0);
 FUNC_3(VAR_3, VAR_0, VAR_5);




 VAR_4 = FUNC_0(VAR_2->entry_idx);
 FUNC_3(VAR_3, VAR_4, 0);




 FUNC_1(&VAR_5, VAR_1, 1);
 FUNC_3(VAR_3, VAR_0, VAR_5);
}
