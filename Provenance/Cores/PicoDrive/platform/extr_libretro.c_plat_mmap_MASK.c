
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned long,void*,...) ;
 void* FUNC_1 (void*,size_t,int,int,int,int ) ;
 int FUNC_2 (void*,size_t) ;

void *FUNC_3(unsigned long VAR_6, size_t VAR_7, int VAR_8, int VAR_9)
{
   int VAR_10 = VAR_2 | VAR_0;
   void *VAR_11, *VAR_12;

   VAR_11 = (void *)VAR_6;
   VAR_12 = FUNC_1(VAR_11, VAR_7, VAR_3 | VAR_4, VAR_10, -1, 0);
   if (VAR_12 == VAR_1) {
      FUNC_0("mmap(%08lx, %zd) failed: %d\n", VAR_6, VAR_7, VAR_5);
      return ((void*)0);
   }

   if (VAR_6 != 0 && VAR_12 != (void *)VAR_6) {
      FUNC_0("warning: wanted to map @%08lx, got %p\n",
            VAR_6, VAR_12);

      if (VAR_9) {
         FUNC_2(VAR_12, VAR_7);
         return ((void*)0);
      }
   }

 return VAR_12;
}
