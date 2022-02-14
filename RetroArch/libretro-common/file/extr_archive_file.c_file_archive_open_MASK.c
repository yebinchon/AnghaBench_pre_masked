
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ size; int data; } ;
typedef TYPE_1__ file_archive_file_data_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,int *,scalar_t__*) ;

__attribute__((used)) static file_archive_file_data_t* FUNC_3(const char *VAR_0)
{
   int64_t VAR_1 = -1;
   bool VAR_2 = 0;
   file_archive_file_data_t *VAR_3 = (file_archive_file_data_t*)
      FUNC_0(1, sizeof(*VAR_3));

   if (!VAR_3)
      return ((void*)0);

   VAR_2 = FUNC_2(VAR_0, &VAR_3->data, &VAR_1);


   if (!VAR_2 || VAR_1 < 0)
      goto error;

   VAR_3->size = VAR_1;
   return VAR_3;

error:
   FUNC_1(VAR_3);
   return ((void*)0);
}
