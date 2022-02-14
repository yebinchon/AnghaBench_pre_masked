
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_2__ {int lock; int buffer; int cond; scalar_t__ nonblocking; } ;
typedef TYPE_1__ ps3_audio_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void const*,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
   ps3_audio_t *VAR_4 = VAR_1;

   if (VAR_4->nonblocking)
   {
      if (FUNC_1(VAR_4->buffer) < VAR_3)
         return 0;
   }

   while (FUNC_1(VAR_4->buffer) < VAR_3)
      FUNC_2(&VAR_4->cond, 0);

   FUNC_3(&VAR_4->lock, VAR_0);
   FUNC_0(VAR_4->buffer, VAR_2, VAR_3);
   FUNC_4(&VAR_4->lock);

   return VAR_3;
}
