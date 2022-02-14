
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_size_t ;
typedef TYPE_2__* png_row_infop ;
typedef unsigned int* png_bytep ;
struct TYPE_15__ {int rowbytes; int pixel_depth; } ;
struct TYPE_14__ {unsigned int* row_buf; unsigned int do_filter; unsigned int* try_row; unsigned int* tst_row; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,unsigned int*,int) ;

void
FUNC_11(png_structrp VAR_6, png_row_infop VAR_7)
{

   FUNC_10(VAR_6, VAR_6->row_buf, VAR_7->rowbytes+1);
}
