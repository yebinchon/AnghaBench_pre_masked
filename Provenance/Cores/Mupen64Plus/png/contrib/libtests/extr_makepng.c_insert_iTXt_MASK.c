
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int compression; void* lang_key; void* lang; } ;
typedef TYPE_1__ png_text ;
typedef int png_structp ;
typedef int png_infop ;
typedef void** png_charpp ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (int ,int ,TYPE_1__*,void*) ;

__attribute__((used)) static void
FUNC_3(png_structp VAR_0, png_infop VAR_1, int VAR_2,
   png_charpp VAR_3)
{
   png_text VAR_4;

   FUNC_0(VAR_2, 4);
   FUNC_1(&VAR_4, VAR_3[0]);
   VAR_4.compression = 2;
   VAR_4.lang = VAR_3[1];
   VAR_4.lang_key = VAR_3[2];
   FUNC_2(VAR_0, VAR_1, &VAR_4, VAR_3[3]);
}
