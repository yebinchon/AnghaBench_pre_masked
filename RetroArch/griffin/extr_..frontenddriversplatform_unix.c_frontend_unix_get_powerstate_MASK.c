
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int jint ;
typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;
struct TYPE_4__ {scalar_t__ getBatteryLevel; TYPE_1__* activity; scalar_t__ getPowerstate; } ;
struct TYPE_3__ {int clazz; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,int,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int*,int*,int*) ;
 scalar_t__ FUNC_2 (int*,int*,int*) ;
 scalar_t__ FUNC_3 (int*,int*,int*) ;
 TYPE_2__* VAR_1 ;
 int * FUNC_4 () ;

__attribute__((used)) static enum frontend_powerstate FUNC_5(
      int *VAR_2, int *VAR_3)
{
   enum frontend_powerstate VAR_4 = VAR_0;
   if (FUNC_2(&VAR_4, VAR_2, VAR_3))
      return VAR_4;

   VAR_4 = VAR_0;

   if (FUNC_1(&VAR_4, VAR_2, VAR_3))
      return VAR_4;

   if (FUNC_3(&VAR_4, VAR_2, VAR_3))
      return VAR_4;


   return VAR_4;
}
