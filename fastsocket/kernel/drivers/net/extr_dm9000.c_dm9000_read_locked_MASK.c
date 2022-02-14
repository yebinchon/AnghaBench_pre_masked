
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ board_info_t ;


 unsigned int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_3(board_info_t *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_3;
}
