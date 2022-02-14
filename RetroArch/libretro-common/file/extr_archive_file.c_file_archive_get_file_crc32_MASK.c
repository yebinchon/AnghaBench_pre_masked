
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int member_0; } ;
struct archive_extract_userdata {scalar_t__ crc; int extracted_file_path; TYPE_1__ member_0; } ;
struct TYPE_6__ {scalar_t__ type; int * backend; int * data; int * directory; int * footer; int * stream; int * handle; scalar_t__ archive_size; } ;
typedef TYPE_2__ file_archive_transfer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int*,char const*,int *,int *,struct archive_extract_userdata*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,char const*) ;

uint32_t FUNC_5(const char *VAR_2)
{
   file_archive_transfer_t VAR_3;
   struct archive_extract_userdata VAR_4 = {0};
   bool VAR_5 = 0;
   const char *VAR_6 = ((void*)0);
   bool VAR_7 = FUNC_2(VAR_2);

   if (VAR_7)
   {
      VAR_6 = FUNC_3(VAR_2);


      if (VAR_6)
         VAR_6 += 1;
   }

   VAR_3.type = VAR_0;
   VAR_3.archive_size = 0;
   VAR_3.handle = ((void*)0);
   VAR_3.stream = ((void*)0);
   VAR_3.footer = ((void*)0);
   VAR_3.directory = ((void*)0);
   VAR_3.data = ((void*)0);
   VAR_3.backend = ((void*)0);



   FUNC_0(&VAR_3,
            &VAR_5, VAR_2, ((void*)0), ((void*)0),
            &VAR_4);

   for (;;)
   {

      if (VAR_3.type == VAR_1)
         FUNC_0(&VAR_3,
                  &VAR_5, VAR_2, ((void*)0), ((void*)0),
                  &VAR_4);




      if (!VAR_7)
         break;


      if (VAR_6)
      {
         if (FUNC_4(VAR_4.extracted_file_path, VAR_6))
            break;
      }
      else
         break;
   }

   FUNC_1(&VAR_3);

   if (VAR_4.crc)
      return VAR_4.crc;

   return 0;
}
