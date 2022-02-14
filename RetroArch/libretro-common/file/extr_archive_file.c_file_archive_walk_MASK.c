
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct archive_extract_userdata {int dummy; } ;
struct TYPE_3__ {int * backend; int * data; int * directory; int * footer; int * stream; int * handle; scalar_t__ archive_size; int type; } ;
typedef TYPE_1__ file_archive_transfer_t ;
typedef int file_archive_file_cb ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int*,char const*,char const*,int ,struct archive_extract_userdata*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_1, const char *VAR_2,
      file_archive_file_cb VAR_3, struct archive_extract_userdata *VAR_4)
{
   file_archive_transfer_t VAR_5;
   bool VAR_6 = 1;

   VAR_5.type = VAR_0;
   VAR_5.archive_size = 0;
   VAR_5.handle = ((void*)0);
   VAR_5.stream = ((void*)0);
   VAR_5.footer = ((void*)0);
   VAR_5.directory = ((void*)0);
   VAR_5.data = ((void*)0);
   VAR_5.backend = ((void*)0);

   for (;;)
   {
      if (FUNC_0(&VAR_5, &VAR_6, VAR_1,
            VAR_2, VAR_3, VAR_4) != 0)
         break;
   }

   return VAR_6;
}
