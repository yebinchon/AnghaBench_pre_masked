
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_16 ;
typedef int png_structp ;
typedef int png_infop ;
typedef char** png_charpp ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int VAR_0 ;
 unsigned long FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_5(png_structp VAR_1, png_infop VAR_2, int VAR_3,
      png_charpp VAR_4)
{
   int VAR_5;
   png_uint_16 VAR_6[256];




   FUNC_2(VAR_6, 0, sizeof VAR_6);
   for (VAR_5=0; VAR_5<VAR_3; ++VAR_5)
   {
      char *VAR_7 = ((void*)0);
      unsigned long int VAR_8 = FUNC_4(VAR_4[VAR_5], &VAR_7, 0 );

      if (VAR_4[VAR_5][0] && *VAR_7 == 0 && VAR_8 <= 65535)
         VAR_6[VAR_5] = (png_uint_16)VAR_8;

      else
      {
         FUNC_1(VAR_0, "hIST[%d]: %s: invalid frequency\n", VAR_5, VAR_4[VAR_5]);
         FUNC_0(1);
      }
   }

   FUNC_3(VAR_1, VAR_2, VAR_6);
}
