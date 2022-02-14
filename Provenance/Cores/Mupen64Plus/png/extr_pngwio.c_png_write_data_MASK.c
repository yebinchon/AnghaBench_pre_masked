
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_size_t ;
typedef int png_const_bytep ;
struct TYPE_5__ {int (* write_data_fn ) (TYPE_1__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

void
FUNC_3(png_structrp VAR_1, png_const_bytep VAR_2, png_size_t VAR_3)
{

   if (VAR_1->write_data_fn != ((void*)0) )
      (*(VAR_1->write_data_fn))(VAR_1, FUNC_0(VAR_0,VAR_2),
          VAR_3);

   else
      FUNC_1(VAR_1, "Call to NULL write function");
}
