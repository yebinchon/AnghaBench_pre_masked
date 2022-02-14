
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file_archive_file_backend {int (* archive_parse_file_iterate_step ) (TYPE_2__*,char const*,struct archive_extract_userdata*,int ) ;} ;
struct archive_extract_userdata {int * context; int archive_path; } ;
struct TYPE_7__ {int type; int * stream; TYPE_1__* backend; int * handle; } ;
typedef TYPE_2__ file_archive_transfer_t ;
typedef int file_archive_file_cb ;
struct TYPE_6__ {int (* stream_free ) (int *) ;} ;







 int FUNC_0 (int *) ;
 struct file_archive_file_backend* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (TYPE_2__*,char const*,struct archive_extract_userdata*,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(
      file_archive_transfer_t *VAR_0,
      bool *VAR_1,
      const char *VAR_2,
      const char *VAR_3,
      file_archive_file_cb VAR_4,
      struct archive_extract_userdata *VAR_5)
{
   if (!VAR_0)
      return -1;

   switch (VAR_0->type)
   {
      case 128:
         break;
      case 130:
         if (FUNC_2(VAR_0, VAR_2) == 0)
         {
            if (VAR_5)
            {
               VAR_5->context = VAR_0->stream;
               FUNC_4(VAR_5->archive_path, VAR_2,
                     sizeof(VAR_5->archive_path));
            }
            VAR_0->type = 129;
         }
         else
            VAR_0->type = 131;
         break;
      case 129:
         if (FUNC_1(VAR_2))
         {
            const struct file_archive_file_backend *VAR_6 =
               FUNC_1(VAR_2);
            int VAR_7 =
               VAR_6->archive_parse_file_iterate_step(VAR_0,
                  VAR_3, VAR_5, VAR_4);

            if (VAR_7 != 1)
               VAR_0->type = 132;
            if (VAR_7 == -1)
               VAR_0->type = 131;


            return 0;
         }
         return -1;
      case 131:
         *VAR_1 = 0;
      case 132:
         if (VAR_0->handle)
         {
            FUNC_0(VAR_0->handle);
            VAR_0->handle = ((void*)0);
         }

         if (VAR_0->stream && VAR_0->backend)
         {
            if (VAR_0->backend->stream_free)
               VAR_0->backend->stream_free(VAR_0->stream);

            if (VAR_0->stream)
               FUNC_3(VAR_0->stream);

            VAR_0->stream = ((void*)0);

            if (VAR_5)
               VAR_5->context = ((void*)0);
         }
         break;
   }

   if ( VAR_0->type == 132 ||
         VAR_0->type == 131)
      return -1;

   return 0;
}
