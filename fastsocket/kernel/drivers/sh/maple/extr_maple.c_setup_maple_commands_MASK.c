
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct maple_device {scalar_t__ interval; scalar_t__ when; int busy; TYPE_1__ devinfo; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct maple_device*,int ,int ,int,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct maple_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, void *VAR_5)
{
 int VAR_6;
 struct maple_device *VAR_7 = FUNC_5(VAR_4);
 if (VAR_7->interval > 0 && FUNC_0(&VAR_7->busy) == 0 &&
  FUNC_4(VAR_2, VAR_7->when)) {

  VAR_6 = FUNC_3(VAR_7,
   FUNC_2(VAR_7->devinfo.function),
   VAR_1, 1, ((void*)0));
  if (!VAR_6)
   VAR_7->when = VAR_2 + VAR_7->interval;
 } else {
  if (FUNC_4(VAR_2, VAR_3))



   if (FUNC_0(&VAR_7->busy) == 0) {
    FUNC_1(&VAR_7->busy, 1);
    FUNC_3(VAR_7, 0,
     VAR_0, 0, ((void*)0));
   }
 }
 return 0;
}
