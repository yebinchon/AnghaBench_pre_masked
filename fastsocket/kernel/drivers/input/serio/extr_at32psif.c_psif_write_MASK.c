
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {struct psif* port_data; } ;
struct psif {int lock; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct psif*,int ) ;
 int FUNC_4 (struct psif*,int ,unsigned char) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct serio *VAR_4, unsigned char VAR_5)
{
 struct psif *VAR_6 = VAR_4->port_data;
 unsigned long VAR_7;
 int VAR_8 = 10;
 int VAR_9 = 0;

 FUNC_5(&VAR_6->lock, VAR_7);

 while (!(FUNC_3(VAR_6, VAR_1) & FUNC_0(VAR_3)) && VAR_8--)
  FUNC_2(10);

 if (VAR_8 >= 0) {
  FUNC_4(VAR_6, VAR_2, VAR_5);
 } else {
  FUNC_1(&VAR_6->pdev->dev, "timeout writing to THR\n");
  VAR_9 = -VAR_0;
 }

 FUNC_6(&VAR_6->lock, VAR_7);

 return VAR_9;
}
