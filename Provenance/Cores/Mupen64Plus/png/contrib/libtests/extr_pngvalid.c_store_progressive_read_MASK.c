
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef scalar_t__ png_structp ;
struct TYPE_5__ {scalar_t__ pread; int * next; int * current; } ;
typedef TYPE_1__ png_store ;
typedef int png_size_t ;
typedef int png_infop ;
typedef int png_byte ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__,int ,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static void
FUNC_4(png_store *VAR_0, png_structp VAR_1, png_infop VAR_2)
{
   if (VAR_0->pread != VAR_1 || VAR_0->current == ((void*)0) || VAR_0->next == ((void*)0))
      FUNC_0(VAR_1, "store state damaged (progressive)");







   while (FUNC_2(VAR_0) > 0)
   {
      static png_uint_32 VAR_3 = 2;
      png_size_t VAR_4;
      png_byte VAR_5[512];


      VAR_3 = (VAR_3 << 9) | ((VAR_3 ^ (VAR_3 >> (9-5))) & 0x1ff);
      VAR_4 = VAR_3 & 0x1ff;
      VAR_4 -= FUNC_3(VAR_0, VAR_5, VAR_4, 1);
      FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4);
   }
}
