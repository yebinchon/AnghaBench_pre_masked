
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {void* s_addr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in_addr*,struct in_addr*,struct in_addr*,int,int) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (struct in_addr) ;
 int FUNC_3 (char*,int ) ;

s32 FUNC_4(char *VAR_1, char *VAR_2, char *VAR_3,bool VAR_4, int VAR_5)
{
 s32 VAR_6 = 0;
 struct in_addr VAR_7, VAR_8, VAR_9;

 VAR_7.s_addr = 0;
 VAR_8.s_addr = 0;
 VAR_9.s_addr = 0;

 if ( VAR_1 != ((void*)0) ) VAR_7.s_addr = FUNC_1(VAR_1);
 if ( VAR_2 != ((void*)0) ) VAR_8.s_addr = FUNC_1(VAR_2);
 if ( VAR_3 != ((void*)0) ) VAR_9.s_addr = FUNC_1(VAR_3);

 VAR_6 = FUNC_0( &VAR_7, &VAR_8, &VAR_9, VAR_4, VAR_5);

 if (VAR_6<0) return VAR_6;

 if ( VAR_4 == VAR_0 ) {

  if ( VAR_1 != ((void*)0) ) FUNC_3(VAR_1, FUNC_2( VAR_7 ));
  if ( VAR_2 != ((void*)0) ) FUNC_3(VAR_2, FUNC_2( VAR_8));
  if ( VAR_3 != ((void*)0) ) FUNC_3(VAR_3, FUNC_2( VAR_9 ));
 }
 return VAR_6;
}
