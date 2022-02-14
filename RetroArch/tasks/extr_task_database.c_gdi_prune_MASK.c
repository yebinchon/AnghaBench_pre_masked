
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char intfstream_t ;
struct TYPE_7__ {size_t list_ptr; TYPE_2__* list; } ;
typedef TYPE_3__ database_info_handle_t ;
struct TYPE_6__ {size_t size; TYPE_1__* elems; } ;
struct TYPE_5__ {char* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*,char*,scalar_t__) ;
 char* FUNC_3 (char const*,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(database_info_handle_t *VAR_3, const char *VAR_4)
{
   size_t VAR_5;
   char *VAR_6 = (char *)FUNC_4(VAR_0 + 1);
   intfstream_t *VAR_7 = FUNC_3(VAR_4,
         VAR_2, VAR_1);

   if (!VAR_7)
      goto end;

   while (FUNC_2(VAR_7, VAR_4, VAR_6, VAR_0))
   {
      for (VAR_5 = VAR_3->list_ptr; VAR_5 < VAR_3->list->size; ++VAR_5)
      {
         if (VAR_3->list->elems[VAR_5].data
               && FUNC_5(VAR_6, VAR_3->list->elems[VAR_5].data))
         {
            FUNC_0("Pruning file referenced by gdi: %s\n", VAR_6);
            FUNC_1(VAR_3->list->elems[VAR_5].data);
            VAR_3->list->elems[VAR_5].data = ((void*)0);
         }
      }
   }

end:
   FUNC_1(VAR_7);
   FUNC_1(VAR_6);
}
