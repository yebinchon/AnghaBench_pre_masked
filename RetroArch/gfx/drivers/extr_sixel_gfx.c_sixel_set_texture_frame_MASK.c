
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned char*,void const*,unsigned int) ;
 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static void FUNC_3(void *VAR_5,
      const void *VAR_6, bool VAR_7, unsigned VAR_8, unsigned VAR_9,
      float VAR_10)
{
   unsigned VAR_11 = VAR_8 * 2;

   if (VAR_7)
      VAR_11 = VAR_8 * 4;

   if (VAR_1)
   {
      FUNC_0(VAR_1);
      VAR_1 = ((void*)0);
   }

   if (!VAR_1 || VAR_4 != VAR_8 || VAR_2 != VAR_9 || VAR_3 != VAR_11)
      if (VAR_11 && VAR_9)
         VAR_1 = (unsigned char*)FUNC_1(VAR_11 * VAR_9);

   if (VAR_1 && VAR_6 && VAR_11 && VAR_9)
   {
      FUNC_2(VAR_1, VAR_6, VAR_11 * VAR_9);
      VAR_4 = VAR_8;
      VAR_2 = VAR_9;
      VAR_3 = VAR_11;
      VAR_0 = VAR_7 ? 32 : 16;
   }
}
