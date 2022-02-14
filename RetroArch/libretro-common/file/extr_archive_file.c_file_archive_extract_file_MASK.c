
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct TYPE_2__ {int found; scalar_t__ size; int * needle; int * opt_file; } ;
struct archive_extract_userdata {char* archive_path; char const* extraction_directory; size_t archive_path_size; int found_file; int list_only; char* archive_name; int * first_extracted_file_path; TYPE_1__ decomp_state; int * dec; scalar_t__ crc; int * context; int * list; struct string_list* ext; int * extracted_file_path; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int ,struct archive_extract_userdata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int *,size_t) ;

bool FUNC_6(
      char *VAR_1,
      size_t VAR_2,
      const char *VAR_3,
      const char *VAR_4,
      char *VAR_5, size_t VAR_6)
{
   struct archive_extract_userdata VAR_7;
   bool VAR_8 = 1;
   struct string_list *VAR_9 = FUNC_4(VAR_3, "|");

   VAR_7.archive_path[0] = '\0';
   VAR_7.first_extracted_file_path = ((void*)0);
   VAR_7.extracted_file_path = ((void*)0);
   VAR_7.extraction_directory = VAR_4;
   VAR_7.archive_path_size = VAR_2;
   VAR_7.ext = VAR_9;
   VAR_7.list = ((void*)0);
   VAR_7.found_file = 0;
   VAR_7.list_only = 0;
   VAR_7.context = ((void*)0);
   VAR_7.archive_name[0] = '\0';
   VAR_7.crc = 0;
   VAR_7.dec = ((void*)0);

   VAR_7.decomp_state.opt_file = ((void*)0);
   VAR_7.decomp_state.needle = ((void*)0);
   VAR_7.decomp_state.size = 0;
   VAR_7.decomp_state.found = 0;

   if (!VAR_9)
   {
      VAR_8 = 0;
      goto end;
   }

   if (!FUNC_0(VAR_1, VAR_3,
            VAR_0, &VAR_7))
   {

      VAR_8 = 0;
      goto end;
   }

   if (!VAR_7.found_file)
   {


      VAR_8 = 0;
      goto end;
   }

   if (!FUNC_2(VAR_7.first_extracted_file_path))
      FUNC_5(VAR_5, VAR_7.first_extracted_file_path, VAR_6);

end:
   if (VAR_7.first_extracted_file_path)
      FUNC_1(VAR_7.first_extracted_file_path);
   if (VAR_9)
      FUNC_3(VAR_9);
   return VAR_8;
}
