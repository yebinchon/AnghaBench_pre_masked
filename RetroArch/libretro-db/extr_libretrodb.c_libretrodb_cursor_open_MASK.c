
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
typedef TYPE_1__ libretrodb_t ;
typedef int libretrodb_query_t ;
struct TYPE_7__ {int is_valid; int * query; TYPE_1__* db; int * fd; } ;
typedef TYPE_2__ libretrodb_cursor_t ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(libretrodb_t *VAR_3, libretrodb_cursor_t *VAR_4,
      libretrodb_query_t *VAR_5)
{
   RFILE *VAR_6 = ((void*)0);
   if (!VAR_3 || FUNC_3(VAR_3->path))
      return -VAR_2;

   VAR_6 = FUNC_0(VAR_3->path,
         VAR_1,
         VAR_0);

   if (!VAR_6)
      return -VAR_2;

   VAR_4->fd = VAR_6;
   VAR_4->db = VAR_3;
   VAR_4->is_valid = 1;
   FUNC_1(VAR_4);
   VAR_4->query = VAR_5;

   if (VAR_5)
      FUNC_2(VAR_5);

   return 0;
}
