
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_fh {unsigned int resources; struct au0828_dev* dev; } ;
struct au0828_dev {unsigned int resources; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct au0828_fh *VAR_0, unsigned int VAR_1)
{
 struct au0828_dev *VAR_2 = VAR_0->dev;

 FUNC_0((VAR_0->resources & VAR_1) != VAR_1);

 FUNC_2(&VAR_2->lock);
 VAR_0->resources &= ~VAR_1;
 VAR_2->resources &= ~VAR_1;
 FUNC_1(1, "res: put %d\n", VAR_1);
 FUNC_3(&VAR_2->lock);
}
