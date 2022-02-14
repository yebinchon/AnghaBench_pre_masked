
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct TYPE_2__ {int found; scalar_t__ size; int * needle; int * opt_file; } ;
struct archive_extract_userdata {int found_file; int list_only; char* archive_name; struct string_list* list; TYPE_1__ decomp_state; int * dec; scalar_t__ crc; int * context; int * ext; scalar_t__ archive_path_size; int * extraction_directory; int * extracted_file_path; int * first_extracted_file_path; int archive_path; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int ,struct archive_extract_userdata*) ;
 int FUNC_1 (struct string_list*) ;
 struct string_list* FUNC_2 () ;
 int FUNC_3 (int ,char const*,int) ;

struct string_list *FUNC_4(const char *VAR_1,
      const char *VAR_2)
{
   struct archive_extract_userdata VAR_3;

   FUNC_3(VAR_3.archive_path, VAR_1, sizeof(VAR_3.archive_path));
   VAR_3.first_extracted_file_path = ((void*)0);
   VAR_3.extracted_file_path = ((void*)0);
   VAR_3.extraction_directory = ((void*)0);
   VAR_3.archive_path_size = 0;
   VAR_3.ext = ((void*)0);
   VAR_3.list = FUNC_2();
   VAR_3.found_file = 0;
   VAR_3.list_only = 1;
   VAR_3.context = ((void*)0);
   VAR_3.archive_name[0] = '\0';
   VAR_3.crc = 0;
   VAR_3.dec = ((void*)0);

   VAR_3.decomp_state.opt_file = ((void*)0);
   VAR_3.decomp_state.needle = ((void*)0);
   VAR_3.decomp_state.size = 0;
   VAR_3.decomp_state.found = 0;

   if (!VAR_3.list)
      goto error;

   if (!FUNC_0(VAR_1, VAR_2,
         VAR_0, &VAR_3))
      goto error;

   return VAR_3.list;

error:
   if (VAR_3.list)
      FUNC_1(VAR_3.list);
   return ((void*)0);
}
