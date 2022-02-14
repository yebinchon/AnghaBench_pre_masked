
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int options; char* output_file; int * fp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct display*,int ,char*,char*,int ) ;
 int VAR_2 ;
 int * FUNC_2 (char const*,char*) ;
 int * VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct display *VAR_4, const char *VAR_5)
{
   FUNC_0(VAR_4->fp == ((void*)0));

   if ((VAR_4->options & VAR_0) != 0)
      VAR_4->output_file = "<no write>";

   else
   {
      if (VAR_5 != ((void*)0))
      {
         VAR_4->output_file = VAR_5;
         VAR_4->fp = FUNC_2(VAR_5, "wb");
      }

      else
      {
         VAR_4->output_file = "<stdout>";
         VAR_4->fp = VAR_3;
      }

      if (VAR_4->fp == ((void*)0))
         FUNC_1(VAR_4, VAR_1, "%s: file open failed (%s)",
               VAR_4->output_file, FUNC_3(VAR_2));
   }
}
