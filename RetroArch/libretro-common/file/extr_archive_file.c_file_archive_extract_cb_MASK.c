
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wanted_file ;
typedef int uint8_t ;
typedef int uint32_t ;
struct archive_extract_userdata {char const* archive_path; int found_file; int extracted_file_path; int first_extracted_file_path; int extraction_directory; int ext; } ;
typedef int new_path ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,int const*,unsigned int,int ,int ,int ,struct archive_extract_userdata*) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (char*,char const*,int ,int) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,char const*) ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_10(const char *VAR_1, const char *VAR_2,
      const uint8_t *VAR_3,
      unsigned VAR_4, uint32_t VAR_5, uint32_t VAR_6,
      uint32_t VAR_7, struct archive_extract_userdata *VAR_8)
{
   const char *VAR_9 = FUNC_5(VAR_1);


   if (VAR_9 && FUNC_8(VAR_8->ext, VAR_9))
   {
      char VAR_10[VAR_0];
      char VAR_11[VAR_0];
      const char *VAR_12 = ((void*)0);

      VAR_10[0] = VAR_11[0] = '\0';

      if (VAR_8->extraction_directory)
         FUNC_1(VAR_10, VAR_8->extraction_directory,
               FUNC_3(VAR_1), sizeof(VAR_10));
      else
         FUNC_2(VAR_10, VAR_8->archive_path,
               FUNC_3(VAR_1), sizeof(VAR_10));

      VAR_8->first_extracted_file_path = FUNC_6(VAR_10);

      VAR_12 = FUNC_4(VAR_8->archive_path);

      if (VAR_12)
      {
         FUNC_9(VAR_11, VAR_12 + 1, sizeof(VAR_11));

         if (!FUNC_7(VAR_8->extracted_file_path,
                   VAR_11))
           return 1;
      }
      else
         FUNC_9(VAR_11, VAR_8->archive_path, sizeof(VAR_11));

      if (FUNC_0(VAR_10,
                VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                0, VAR_8))
         VAR_8->found_file = 1;

      return 0;
   }

   return 1;
}
