
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int update_lock; int drv; scalar_t__ nonblocking; } ;
typedef TYPE_1__ libnx_audren_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,void const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   libnx_audren_t *VAR_3 = (libnx_audren_t*)VAR_0;
   size_t VAR_4 = 0;

   if (!VAR_3)
      return -1;

   while(VAR_4 < VAR_2)
   {
      VAR_4 += FUNC_2(VAR_3, VAR_1 + VAR_4, VAR_2 - VAR_4);
      if(VAR_4 != VAR_2)
      {
         if(VAR_3->nonblocking)
         {
            break;
         }
         else
         {
            FUNC_3(&VAR_3->update_lock);
            FUNC_1(&VAR_3->drv);
            FUNC_4(&VAR_3->update_lock);
            FUNC_0();
         }
      }
   }

   return VAR_4;
}
