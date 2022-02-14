
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int path ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {TYPE_4__* backend; scalar_t__ directory; scalar_t__ footer; int handle; int data; scalar_t__ archive_size; } ;
typedef TYPE_1__ file_archive_transfer_t ;
struct TYPE_6__ {int (* archive_parse_file_init ) (TYPE_1__*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_7(file_archive_transfer_t *VAR_1,
      const char *VAR_2)
{
   char VAR_3[VAR_0];
   char *VAR_4 = ((void*)0);

   VAR_3[0] = '\0';

   FUNC_5(VAR_3, VAR_2, sizeof(VAR_3));

   VAR_4 = (char*)FUNC_4(VAR_3);

   if (VAR_4)
      *VAR_4 = '\0';

   VAR_1->backend = FUNC_1(VAR_3);
   if (!VAR_1->backend)
      return -1;

   VAR_1->handle = FUNC_2(VAR_3);
   if (!VAR_1->handle)
      return -1;

   VAR_1->archive_size = (int32_t)FUNC_3(VAR_1->handle);
   VAR_1->data = FUNC_0(VAR_1->handle);
   VAR_1->footer = 0;
   VAR_1->directory = 0;

   return VAR_1->backend->archive_parse_file_init(VAR_1, VAR_3);
}
