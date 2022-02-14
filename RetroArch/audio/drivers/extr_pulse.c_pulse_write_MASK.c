
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_3__ {int mainloop; int nonblock; int stream; scalar_t__ is_paused; } ;
typedef TYPE_1__ pa_t ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*,size_t,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static ssize_t FUNC_7(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
   pa_t *VAR_4 = (pa_t*)VAR_1;
   const uint8_t *VAR_5 = (const uint8_t*)VAR_2;
   size_t VAR_6 = 0;



   if (VAR_4->is_paused)
      if (!FUNC_6(VAR_4, 0))
         return -1;

   FUNC_3(VAR_4->mainloop);
   while (VAR_3)
   {
      size_t VAR_7 = FUNC_0(VAR_3, FUNC_1(VAR_4->stream));

      if (VAR_7)
      {
         FUNC_2(VAR_4->stream, VAR_5, VAR_7, ((void*)0), 0, VAR_0);
         VAR_5 += VAR_7;
         VAR_3 -= VAR_7;
         VAR_6 += VAR_7;
      }
      else if (!VAR_4->nonblock)
         FUNC_5(VAR_4->mainloop);
      else
         break;
   }

   FUNC_4(VAR_4->mainloop);

   return VAR_6;
}
