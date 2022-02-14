
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (unsigned char*,int,int,int *) ;
 int FUNC_3 (int *,unsigned int,int ) ;

__attribute__((used)) static unsigned FUNC_4(const char *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3 = ~0;
   FILE *VAR_4 = FUNC_1(VAR_1, "rb");
   if (VAR_4)
   {
      unsigned char VAR_5[4];
      FUNC_3(VAR_4, VAR_2, VAR_0);
      if (FUNC_2(VAR_5, 1, sizeof VAR_5, VAR_4) == sizeof VAR_5)
         VAR_3 = VAR_5[0] << 24 | VAR_5[1] << 16 | VAR_5[2] << 8 | VAR_5[3] << 0;
      FUNC_0(VAR_4);
   }
   return VAR_3;
}
