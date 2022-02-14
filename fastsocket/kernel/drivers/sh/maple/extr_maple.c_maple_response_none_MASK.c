
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {scalar_t__ unit; size_t port; int busy; int dev; int maple_wait; int (* can_unload ) (struct maple_device*) ;} ;


 int FUNC_0 (int *,int) ;
 int* VAR_0 ;
 int FUNC_1 (int *,char*,size_t,...) ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct maple_device*) ;
 int FUNC_4 (struct maple_device*) ;
 int VAR_3 ;
 int FUNC_5 (struct maple_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct maple_device *VAR_4)
{
 FUNC_3(VAR_4);

 if (FUNC_2(VAR_4->unit != 0)) {
  if (VAR_4->can_unload) {
   if (!VAR_4->can_unload(VAR_4)) {
    FUNC_0(&VAR_4->busy, 2);
    FUNC_6(&VAR_4->maple_wait);
    return;
   }
  }

  FUNC_1(&VAR_4->dev, "detaching device at (%d, %d)\n",
   VAR_4->port, VAR_4->unit);
  FUNC_4(VAR_4);
  return;
 } else {
  if (!VAR_3 || !VAR_2) {
   if (VAR_0[VAR_4->port] == 0) {
    VAR_0[VAR_4->port] = 1;
    VAR_1[VAR_4->port] = 1;
    FUNC_1(&VAR_4->dev, "no devices"
     " to port %d\n", VAR_4->port);
   }
   return;
  }
 }

 FUNC_0(&VAR_4->busy, 0);
}
