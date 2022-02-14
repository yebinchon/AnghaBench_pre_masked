
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7877 {int lock; int timer; scalar_t__ pending; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ad7877*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct ad7877 *VAR_3 = VAR_2;

 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_3);
 VAR_3->pending = 0;
 FUNC_1(&VAR_3->timer, VAR_1 + VAR_0);

 FUNC_3(&VAR_3->lock);
}
