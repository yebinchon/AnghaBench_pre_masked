
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ real_checksum; int stream; TYPE_2__* backend; scalar_t__ data; } ;
typedef TYPE_1__ file_archive_file_handle_t ;
struct TYPE_5__ {scalar_t__ (* stream_crc_calculate ) (int ,scalar_t__,scalar_t__) ;int (* stream_free ) (int ) ;} ;


 int FUNC_0 (char const*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(
      file_archive_file_handle_t *VAR_1,
      int VAR_2,
      const char *VAR_3,
      const char *VAR_4,
      const uint8_t *VAR_5,
      uint32_t VAR_6,
      uint32_t VAR_7,
      uint32_t VAR_8)
{
   if (!VAR_1 || VAR_2 == -1)
   {
      VAR_2 = 0;
      goto end;
   }
   if (!FUNC_0(VAR_3, VAR_1->data, VAR_7))
   {
      VAR_2 = 0;
      goto end;
   }

end:

   if (VAR_1)
   {
      if (VAR_1->backend)
      {
         if (VAR_1->backend->stream_free)
         {
            VAR_1->backend->stream_free(VAR_1->stream);

         }
      }
   }

   return VAR_2;
}
