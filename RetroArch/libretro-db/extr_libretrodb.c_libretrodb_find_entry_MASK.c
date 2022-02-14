
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct rmsgpack_dom_value {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int fd; int count; } ;
typedef TYPE_1__ libretrodb_t ;
struct TYPE_7__ {scalar_t__ next; scalar_t__ key_size; } ;
typedef TYPE_2__ libretrodb_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void const*,int ,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,void*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,TYPE_2__*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,struct rmsgpack_dom_value*) ;

int FUNC_7(libretrodb_t *VAR_3, const char *VAR_4,
      const void *VAR_5, struct rmsgpack_dom_value *VAR_6)
{
   libretrodb_index_t VAR_7;
   int VAR_8;
   void *VAR_9;
   uint64_t VAR_10;
   ssize_t VAR_11, VAR_12 = 0;

   if (FUNC_4(VAR_3, VAR_4, &VAR_7) < 0)
      return -1;

   VAR_11 = VAR_7.next;
   VAR_9 = FUNC_5(VAR_11);

   if (!VAR_9)
      return -VAR_0;

   while (VAR_12 < VAR_11)
   {
      void *VAR_13 = (uint64_t *)VAR_9 + VAR_12;
      VAR_8 = (int)FUNC_1(VAR_3->fd, VAR_13, VAR_11 - VAR_12);

      if (VAR_8 <= 0)
      {
         FUNC_3(VAR_9);
         return -VAR_2;
      }
      VAR_12 += VAR_8;
   }

   VAR_8 = FUNC_0(VAR_9, VAR_5, VAR_3->count, (ssize_t)VAR_7.key_size, &VAR_10);
   FUNC_3(VAR_9);

   if (VAR_8 == 0)
      FUNC_2(VAR_3->fd, (ssize_t)VAR_10,
            VAR_1);

   return FUNC_6(VAR_3->fd, VAR_6);
}
