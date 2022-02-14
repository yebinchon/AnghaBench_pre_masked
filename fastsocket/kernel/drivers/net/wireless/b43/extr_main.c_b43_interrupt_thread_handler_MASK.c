
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* wl; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct b43_wldev *VAR_3 = VAR_2;

 FUNC_2(&VAR_3->wl->mutex);
 FUNC_0(VAR_3);
 FUNC_1();
 FUNC_3(&VAR_3->wl->mutex);

 return VAR_0;
}
