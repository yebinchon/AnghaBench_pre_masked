
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct joydev {int mutex; scalar_t__ exist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct joydev *VAR_0)
{
 FUNC_0(&VAR_0->mutex);
 VAR_0->exist = 0;
 FUNC_1(&VAR_0->mutex);
}
