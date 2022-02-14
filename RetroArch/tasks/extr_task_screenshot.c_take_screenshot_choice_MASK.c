
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,void*,int,int,int,int,int,unsigned int) ;
 int FUNC_1 (char const*,char const*,int,int,int,int,int,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (void const**,unsigned int*,unsigned int*,size_t*) ;
 int FUNC_4 (void const*,unsigned int,unsigned int,size_t) ;
 void* FUNC_5 (unsigned int*,unsigned int*,size_t*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static bool FUNC_8(
      const char *VAR_0,
      const char *VAR_1,
      bool VAR_2,
      bool VAR_3,
      bool VAR_4,
      bool VAR_5,
      bool VAR_6,
      bool VAR_7,
      bool VAR_8,
      bool VAR_9,
      unsigned VAR_10
      )
{
   size_t VAR_11;
   unsigned VAR_12, VAR_13;
   void *VAR_14 = ((void*)0);
   const void* VAR_15 = ((void*)0);

   if (VAR_8)
   {

      FUNC_7(0, 0);
      if (!VAR_4)
         FUNC_2();
      return FUNC_1(VAR_0,
            VAR_1, VAR_2, VAR_4, VAR_3, VAR_6, VAR_7,
            VAR_10);
   }

   if (!VAR_5)
      return FUNC_0(VAR_0,
            VAR_1, ((void*)0), VAR_2, VAR_4, VAR_3, VAR_6, VAR_7,
            VAR_10);

   if (!VAR_9)
      return 0;

   FUNC_3(&VAR_15, &VAR_12, &VAR_13,
         &VAR_11);

   VAR_14 = FUNC_5(
         &VAR_12, &VAR_13, &VAR_11);

   FUNC_4(VAR_15, VAR_12, VAR_13,
         VAR_11);

   if (VAR_14)
   {
      FUNC_6(VAR_14);
      if (FUNC_0(VAR_0,
               VAR_1, VAR_14, VAR_2, VAR_4, VAR_3, VAR_6, VAR_7,
               VAR_10))
         return 1;
   }

   return 0;
}
