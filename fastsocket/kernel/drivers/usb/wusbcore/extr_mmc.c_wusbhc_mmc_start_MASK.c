
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int (* start ) (struct wusbhc*) ;int active; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wusbhc*) ;

__attribute__((used)) static int FUNC_3(struct wusbhc *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->mutex);
 VAR_1 = VAR_0->start(VAR_0);
 if (VAR_1 >= 0)
  VAR_0->active = 1;
 FUNC_1(&VAR_0->mutex);

 return VAR_1;
}
