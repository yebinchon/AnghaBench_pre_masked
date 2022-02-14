
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eof; int * query; int * db; int * fd; scalar_t__ is_valid; } ;
typedef TYPE_1__ libretrodb_cursor_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(libretrodb_cursor_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->fd)
      FUNC_0(VAR_0->fd);

   if (VAR_0->query)
      FUNC_1(VAR_0->query);

   VAR_0->is_valid = 0;
   VAR_0->eof = 1;
   VAR_0->fd = ((void*)0);
   VAR_0->db = ((void*)0);
   VAR_0->query = ((void*)0);
}
