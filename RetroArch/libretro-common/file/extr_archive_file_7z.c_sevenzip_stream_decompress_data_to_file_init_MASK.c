
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sevenzip_context_t {TYPE_1__* handle; } ;
struct TYPE_3__ {scalar_t__ stream; } ;
typedef TYPE_1__ file_archive_file_handle_t ;



__attribute__((used)) static bool FUNC_0(
      file_archive_file_handle_t *VAR_0,
      const uint8_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
   struct sevenzip_context_t *VAR_4 =
         (struct sevenzip_context_t*)VAR_0->stream;

   if (!VAR_4)
      return 0;

   VAR_4->handle = VAR_0;

   return 1;
}
