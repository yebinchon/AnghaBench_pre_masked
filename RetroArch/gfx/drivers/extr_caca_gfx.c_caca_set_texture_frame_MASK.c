
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned char*,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(void *VAR_4,
      const void *VAR_5, bool VAR_6, unsigned VAR_7, unsigned VAR_8,
      float VAR_9)
{
   unsigned VAR_10 = VAR_7 * 2;

   if (VAR_6)
      VAR_10 = VAR_7 * 4;

   if (VAR_0)
   {
      FUNC_0(VAR_0);
      VAR_0 = ((void*)0);
   }

   if ( !VAR_0 ||
         VAR_3 != VAR_7 ||
         VAR_1 != VAR_8 ||
         VAR_2 != VAR_10)
      if (VAR_10 && VAR_8)
         VAR_0 = (unsigned char*)FUNC_1(VAR_10 * VAR_8);

   if (VAR_0 && VAR_5 && VAR_10 && VAR_8)
      FUNC_2(VAR_0, VAR_5, VAR_10 * VAR_8);
}
