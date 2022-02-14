
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rmsgpack_dom_value {scalar_t__ type; } ;
struct TYPE_3__ {int eof; scalar_t__ query; int fd; } ;
typedef TYPE_1__ libretrodb_cursor_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct rmsgpack_dom_value*) ;
 int FUNC_1 (int ,struct rmsgpack_dom_value*) ;
 int FUNC_2 (struct rmsgpack_dom_value*) ;

int FUNC_3(libretrodb_cursor_t *VAR_2,
      struct rmsgpack_dom_value *VAR_3)
{
   int VAR_4;

   if (VAR_2->eof)
      return VAR_0;

retry:
   VAR_4 = FUNC_1(VAR_2->fd, VAR_3);
   if (VAR_4 < 0)
      return VAR_4;

   if (VAR_3->type == VAR_1)
   {
      VAR_2->eof = 1;
      return VAR_0;
   }

   if (VAR_2->query)
   {
      if (!FUNC_0(VAR_2->query, VAR_3))
      {
         FUNC_2(VAR_3);
         goto retry;
      }
   }

   return 0;
}
