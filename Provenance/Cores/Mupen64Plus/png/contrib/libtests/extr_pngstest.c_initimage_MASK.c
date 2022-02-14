
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_4__ {char const* file_name; int stride_extra; int opts; int image; } ;
typedef TYPE_1__ Image ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(Image *VAR_0, png_uint_32 VAR_1, const char *VAR_2,
   int VAR_3)
{
   FUNC_0(VAR_0);
   FUNC_1(&VAR_0->image, 0, sizeof VAR_0->image);
   VAR_0->opts = VAR_1;
   VAR_0->file_name = VAR_2;
   VAR_0->stride_extra = VAR_3;
}
