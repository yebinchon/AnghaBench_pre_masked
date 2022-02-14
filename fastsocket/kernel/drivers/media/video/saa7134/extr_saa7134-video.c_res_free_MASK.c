
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_fh {unsigned int resources; } ;
struct saa7134_dev {unsigned int resources; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
void FUNC_4(struct saa7134_dev *VAR_0, struct saa7134_fh *VAR_1, unsigned int VAR_2)
{
 FUNC_0((VAR_1->resources & VAR_2) != VAR_2);

 FUNC_2(&VAR_0->lock);
 VAR_1->resources &= ~VAR_2;
 VAR_0->resources &= ~VAR_2;
 FUNC_1("res: put %d\n",VAR_2);
 FUNC_3(&VAR_0->lock);
}
