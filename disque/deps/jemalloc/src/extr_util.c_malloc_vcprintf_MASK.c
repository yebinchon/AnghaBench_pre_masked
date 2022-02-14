
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int buf ;


 int VAR_0 ;
 void FUNC_0 (void*,char const*) ;
 int FUNC_1 (char*,int,char const*,int ) ;
 void FUNC_2 (void*,char const*) ;

void
FUNC_3(void (*VAR_1)(void *, const char *), void *VAR_2,
    const char *VAR_3, va_list VAR_4)
{
 char VAR_5[VAR_0];

 if (VAR_1 == ((void*)0)) {





  VAR_1 = (&FUNC_0 != ((void*)0)) ? FUNC_0 :
      FUNC_2;
  VAR_2 = ((void*)0);
 }

 FUNC_1(VAR_5, sizeof(VAR_5), VAR_3, VAR_4);
 VAR_1(VAR_2, VAR_5);
}
