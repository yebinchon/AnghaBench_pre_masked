
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int format_list ;
typedef int Image ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int *,int,int *) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_3, format_list *VAR_4, png_uint_32 VAR_5,
   int VAR_6, int VAR_7)
{
   int VAR_8;
   Image VAR_9;

   if (!(VAR_5 & VAR_0))
      FUNC_8();
   FUNC_4(&VAR_9);
   FUNC_3(&VAR_9, VAR_5, VAR_3, VAR_6);
   VAR_8 = FUNC_7(&VAR_9);
   if (VAR_8)
      VAR_8 = FUNC_9(&VAR_9, VAR_5, VAR_4);
   FUNC_2(&VAR_9);


   FUNC_1(VAR_1);

   if (VAR_7)
   {
      if (VAR_8)
         FUNC_6("PASS:");

      else
         FUNC_6("FAIL:");


         FUNC_6(" (no write)");


      FUNC_5(VAR_5);
      FUNC_6(" %s\n", VAR_3);

      FUNC_1(VAR_2);
   }

   else if (!VAR_8)
      FUNC_0(1);

   return VAR_8;
}
