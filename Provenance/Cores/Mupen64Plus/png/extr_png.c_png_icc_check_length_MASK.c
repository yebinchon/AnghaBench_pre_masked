
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_const_structrp ;
typedef int png_const_charp ;
typedef int png_colorspacerp ;
struct TYPE_5__ {scalar_t__ user_chunk_malloc_max; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int ,scalar_t__,char*) ;

int
FUNC_2(png_const_structrp VAR_2, png_colorspacerp VAR_3,
    png_const_charp VAR_4, png_uint_32 VAR_5)
{
   if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5))
      return 0;
      else if (VAR_0 < VAR_5)
         return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
             "exceeds system limits");


   return 1;
}
