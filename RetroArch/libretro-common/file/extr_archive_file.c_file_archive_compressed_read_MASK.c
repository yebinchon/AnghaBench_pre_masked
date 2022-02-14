
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int size; TYPE_1__* elems; } ;
struct file_archive_file_backend {int (* compressed_file_read ) (int ,int ,void**,char const*) ;} ;
typedef int int64_t ;
struct TYPE_2__ {int data; } ;


 struct string_list* FUNC_0 (char const*) ;
 struct file_archive_file_backend* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (struct string_list*) ;
 int FUNC_4 (int ,int ,void**,char const*) ;

int FUNC_5(
      const char * VAR_0, void **VAR_1,
      const char* VAR_2, int64_t *VAR_3)
{
   const struct
      file_archive_file_backend *VAR_4 = ((void*)0);
   struct string_list *VAR_5 = ((void*)0);







   if (VAR_2 && FUNC_2(VAR_2))
   {
      *VAR_3 = 0;
      return 1;
   }

   VAR_5 = FUNC_0(VAR_0);






   if (VAR_5->size <= 1)
   {

      FUNC_3(VAR_5);
      *VAR_3 = 0;
      return 0;
   }

   VAR_4 = FUNC_1(VAR_5->elems[0].data);
   *VAR_3 = VAR_4->compressed_file_read(VAR_5->elems[0].data,
         VAR_5->elems[1].data, VAR_1, VAR_2);

   FUNC_3(VAR_5);

   if (*VAR_3 != -1)
      return 1;

   return 0;
}
