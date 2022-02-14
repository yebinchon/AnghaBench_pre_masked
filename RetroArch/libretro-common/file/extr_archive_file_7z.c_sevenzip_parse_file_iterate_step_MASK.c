
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sevenzip_context_t {unsigned int index; } ;
struct archive_extract_userdata {char* extracted_file_path; int crc; } ;
struct TYPE_4__ {scalar_t__ stream; } ;
typedef TYPE_1__ file_archive_transfer_t ;
typedef int (* file_archive_file_cb ) (char*,char const*,int const*,unsigned int,int ,int ,int ,struct archive_extract_userdata*) ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int const**,unsigned int*,int *,int *,int *,unsigned int*,struct archive_extract_userdata*) ;

__attribute__((used)) static int FUNC_1(file_archive_transfer_t *VAR_1,
      const char *VAR_2,
      struct archive_extract_userdata *VAR_3, file_archive_file_cb VAR_4)
{
   char VAR_5[VAR_0];
   const uint8_t *VAR_6 = ((void*)0);
   uint32_t VAR_7 = 0;
   uint32_t VAR_8 = 0;
   uint32_t VAR_9 = 0;
   unsigned VAR_10 = 0;
   unsigned VAR_11 = 0;
   struct sevenzip_context_t *VAR_12 = ((void*)0);
   int VAR_13;

   VAR_5[0] = '\0';

   VAR_13 = FUNC_0(VAR_1, VAR_5,
         &VAR_6, &VAR_10, &VAR_8, &VAR_9,
         &VAR_7, &VAR_11, VAR_3);

   if (VAR_13 != 1)
      return VAR_13;

   VAR_3->extracted_file_path = VAR_5;
   VAR_3->crc = VAR_7;

   if (VAR_4 && !VAR_4(VAR_5, VAR_2, VAR_6, VAR_10,
            VAR_9, VAR_8, VAR_7, VAR_3))
      return 0;

   VAR_12 = (struct sevenzip_context_t*)VAR_1->stream;

   VAR_12->index += VAR_11;

   return 1;
}
