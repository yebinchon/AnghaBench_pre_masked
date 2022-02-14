
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {unsigned int skpcr_mask; } ;
struct sa1111 {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct sa1111* FUNC_0 (struct sa1111_dev*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct sa1111_dev *VAR_1)
{
 struct sa1111 *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_3(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_1(VAR_2->base + VAR_0);
 FUNC_2(VAR_4 & ~VAR_1->skpcr_mask, VAR_2->base + VAR_0);
 FUNC_4(&VAR_2->lock, VAR_3);
}
