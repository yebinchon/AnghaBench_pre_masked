
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {char const* filename; unsigned int w; unsigned int h; unsigned int bpp; unsigned int size; unsigned int read_size; int * fp; } ;


 int VAR_0 ;
 int FUNC_0 (struct display*,int ,char*,int ) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,char*) ;
 int * VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct display *VAR_3, const char *VAR_4)
{
   if (VAR_4 != ((void*)0))
   {
      VAR_3->filename = VAR_4;
      VAR_3->fp = FUNC_1(VAR_4, "rb");
   }

   else
   {
      VAR_3->filename = "<stdin>";
      VAR_3->fp = VAR_2;
   }

   VAR_3->w = VAR_3->h = 0U;
   VAR_3->bpp = 0U;
   VAR_3->size = 0U;
   VAR_3->read_size = 0U;

   if (VAR_3->fp == ((void*)0))
      FUNC_0(VAR_3, VAR_0, "file open failed (%s)", FUNC_2(VAR_1));
}
