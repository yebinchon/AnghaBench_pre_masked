
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct archive_extract_userdata {int archive_path; int context; } ;
struct TYPE_5__ {int stream; TYPE_3__* backend; int real_checksum; int * data; } ;
typedef TYPE_1__ file_archive_file_handle_t ;
struct TYPE_6__ {int (* stream_decompress_data_to_file_iterate ) (int ) ;int (* stream_decompress_data_to_file_init ) (TYPE_1__*,int const*,int ,int ) ;} ;




 int FUNC_0 (TYPE_1__*,int,char const*,char const*,int const*,int ,int ,int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int const*,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int ,int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(const char *VAR_0, const char *VAR_1,
      const uint8_t *VAR_2, unsigned VAR_3, uint32_t VAR_4, uint32_t VAR_5,
      uint32_t VAR_6, struct archive_extract_userdata *VAR_7)
{
   switch (VAR_3)
   {
      case 128:
         if (!FUNC_2(VAR_0, VAR_2, VAR_5))
            return 0;
         break;

      case 129:
         {
            int VAR_8 = 0;
            file_archive_file_handle_t VAR_9;

            VAR_9.stream = VAR_7->context;
            VAR_9.data = ((void*)0);
            VAR_9.real_checksum = 0;
            VAR_9.backend = FUNC_1(VAR_7->archive_path);

            if (!VAR_9.backend)
               return 0;

            if (!VAR_9.backend->stream_decompress_data_to_file_init(&VAR_9,
                     VAR_2, VAR_4, VAR_5))
               return 0;

            do
            {
               VAR_8 = VAR_9.backend->stream_decompress_data_to_file_iterate(
                     VAR_9.stream);
            }while(VAR_8 == 0);

            if (!FUNC_0(&VAR_9,
                     VAR_8, VAR_0, VAR_1,
                     VAR_2, VAR_4, VAR_5, VAR_6))
               return 0;
         }
         break;
      default:
         return 0;
   }

   return 1;
}
