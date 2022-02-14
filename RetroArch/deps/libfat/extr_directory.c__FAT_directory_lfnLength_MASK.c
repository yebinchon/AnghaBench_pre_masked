
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char const**,int,int *) ;
 size_t FUNC_1 (char const*,size_t) ;
 int * FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3 (const char* VAR_4)
{
   unsigned int VAR_5;
   int VAR_6;
   const char* VAR_7 = VAR_4;
   size_t VAR_8 = FUNC_1(VAR_4, VAR_3);


   if ( VAR_8 >= VAR_3)
      return -1;


   if (FUNC_2 (VAR_4, VAR_1) != ((void*)0))
      return -1;


   for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
   {
      unsigned char VAR_9 = (unsigned char) VAR_4[VAR_5];
      if (VAR_9 < 0x20 || VAR_9 >= VAR_0)
         return -1;
   }


   VAR_6 = FUNC_0(((void*)0), &VAR_7, VAR_2, ((void*)0));
   if (VAR_6 < 0 || VAR_6 >= VAR_2)
      return -1;


   return VAR_6;
}
