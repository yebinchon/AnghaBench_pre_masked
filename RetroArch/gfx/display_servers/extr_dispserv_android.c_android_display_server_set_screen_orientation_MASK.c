
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum rotation { ____Placeholder_rotation } rotation ;
struct TYPE_4__ {scalar_t__ setScreenOrientation; TYPE_1__* activity; } ;
struct TYPE_3__ {int clazz; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,int ,scalar_t__,int) ;
 TYPE_2__* VAR_0 ;
 int * FUNC_1 () ;

__attribute__((used)) static void FUNC_2(enum rotation VAR_1)
{
   JNIEnv *VAR_2 = FUNC_1();

   if (!VAR_2 || !VAR_0)
      return;

   if (VAR_0->setScreenOrientation)
      FUNC_0(VAR_2, VAR_0->activity->clazz,
            VAR_0->setScreenOrientation, VAR_1);
}
