
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(unsigned VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_3->lock, VAR_5);
 VAR_6 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 == VAR_0)
  FUNC_1(VAR_3, VAR_2, VAR_6 & ~(0xffff << 0));
 if (VAR_4 == VAR_1)
  FUNC_1(VAR_3, VAR_2, VAR_6 & ~(0xffff << 16));
 FUNC_3(&VAR_3->lock, VAR_5);
}
