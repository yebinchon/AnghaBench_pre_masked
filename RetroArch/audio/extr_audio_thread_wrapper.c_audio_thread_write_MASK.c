
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int alive; int lock; int cond; int driver_data; TYPE_1__* driver; } ;
typedef TYPE_2__ audio_thread_t ;
struct TYPE_3__ {scalar_t__ (* write ) (int ,void const*,size_t) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   ssize_t VAR_3;
   audio_thread_t *VAR_4 = (audio_thread_t*)VAR_0;

   if (!VAR_4)
      return 0;

   VAR_3 = VAR_4->driver->write(VAR_4->driver_data, VAR_1, VAR_2);

   if (VAR_3 < 0)
   {
      FUNC_1(VAR_4->lock);
      VAR_4->alive = 0;
      FUNC_0(VAR_4->cond);
      FUNC_2(VAR_4->lock);
   }

   return VAR_3;
}
