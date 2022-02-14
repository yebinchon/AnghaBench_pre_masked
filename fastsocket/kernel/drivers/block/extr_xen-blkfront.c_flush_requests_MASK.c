
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkfront_info {int irq; int ring; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct blkfront_info *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->ring, VAR_1);

 if (VAR_1)
  FUNC_1(VAR_0->irq);
}
