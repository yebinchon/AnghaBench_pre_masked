
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {int dummy; } ;
struct queue_entry {TYPE_1__* queue; } ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


 int FUNC_0 (struct rt2x00_dev*) ;

__attribute__((used)) static void FUNC_1(struct queue_entry *VAR_0)
{
 struct rt2x00_dev *VAR_1 = VAR_0->queue->rt2x00dev;

 FUNC_0(VAR_1);
}
