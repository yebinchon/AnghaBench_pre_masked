
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
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*,size_t,int,int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*,size_t,int,int,int,int ) ;
 int FUNC_3 (void*,size_t) ;

void *
FUNC_4(void *VAR_8, size_t VAR_9)
{
 void *VAR_10;

 FUNC_1(VAR_9 != 0);
 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_6 | VAR_7, VAR_2 | VAR_0,
     -1, 0);
 FUNC_1(VAR_10 != ((void*)0));

 if (VAR_10 == VAR_1)
  VAR_10 = ((void*)0);
 else if (VAR_8 != ((void*)0) && VAR_10 != VAR_8) {



  FUNC_3(VAR_10, VAR_9);
  VAR_10 = ((void*)0);
 }

 FUNC_1(VAR_10 == ((void*)0) || (VAR_8 == ((void*)0) && VAR_10 != VAR_8)
     || (VAR_8 != ((void*)0) && VAR_10 == VAR_8));
 return (VAR_10);
}
