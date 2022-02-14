
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
struct TYPE_5__ {int flags; int * chunk_list; int * tst_row; int * try_row; int * prev_row; int * row_buf; int zbuffer_list; int zstream; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_4(png_structrp VAR_1)
{
   FUNC_1(1, "in png_write_destroy");


   if ((VAR_1->flags & VAR_0) != 0)
      FUNC_0(&VAR_1->zstream);


   FUNC_3(VAR_1, &VAR_1->zbuffer_list);
   FUNC_2(VAR_1, VAR_1->row_buf);
   VAR_1->row_buf = ((void*)0);
}
