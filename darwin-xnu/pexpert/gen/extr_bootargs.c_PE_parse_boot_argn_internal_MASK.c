
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;

 char* FUNC_0 () ;

 scalar_t__ VAR_1 ;
 int FUNC_1 (long long,void*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,long long*,scalar_t__ (*) (char),scalar_t__) ;
 scalar_t__ FUNC_5 (char) ;
 uintptr_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char const*,uintptr_t) ;

__attribute__((used)) static boolean_t
FUNC_8(
 const char *VAR_2,
 void * VAR_3,
 int VAR_4,
 boolean_t VAR_5)
{
 char *VAR_6;
 char *VAR_7, VAR_8;
 uintptr_t VAR_9;
 long long VAR_10 = 0;
 boolean_t VAR_11;
 boolean_t VAR_12;

 VAR_6 = FUNC_0();
 if (*VAR_6 == '\0') return VAR_0;





 VAR_12 = VAR_0;

 while(*VAR_6 && FUNC_5(*VAR_6)) VAR_6++;

 while (*VAR_6)
 {
  if (*VAR_6 == '-')
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_0;

  VAR_7 = VAR_6;
  while (!FUNC_5 (*VAR_7) && *VAR_7 != '=')
   VAR_7++;
  if (*VAR_7 != '=' && !VAR_11)
   goto gotit;

  VAR_8 = *VAR_7;

  VAR_9 = VAR_7-VAR_6;
  if (FUNC_7(VAR_6, VAR_2, VAR_9) ||
      (VAR_9!=FUNC_6(VAR_2)))
   goto gotit;

  if (VAR_11) {
   if (!VAR_5) {
    if (VAR_4 > 0) {
     FUNC_1(1, VAR_3, VAR_4);
     VAR_12 = VAR_1;
    }
    else if (VAR_4 == 0) {
     VAR_12 = VAR_1;
    }
   }
   break;
  } else {
   while (*VAR_7 && FUNC_5 (*VAR_7))
    VAR_7++;
   if (*VAR_7 == '=' && VAR_8 != '=') {
    VAR_6 = VAR_7+1;
    goto gotit;
   }
   if ('_' == *VAR_2)
   {
    if (VAR_4 > 0) {
     int VAR_13 = 17 > VAR_4 ? 17 : VAR_4;
     FUNC_3 (++VAR_7, (char *)VAR_3, VAR_13 - 1);
     VAR_12 = VAR_1;
    }
    else if (VAR_4 == 0) {
     VAR_12 = VAR_1;
    }
    break;
   }
   switch ((VAR_5 && *VAR_7 == '=') ? 128 : FUNC_4(VAR_7, &VAR_10, FUNC_5, VAR_0))
   {
    case 129:
     if (VAR_4 > 0) {
      FUNC_1(VAR_10, VAR_3, VAR_4);
      VAR_12 = VAR_1;
     }
     else if (VAR_4 == 0) {
      VAR_12 = VAR_1;
     }
     break;
    case 128:
     if (VAR_4 > 0) {
      FUNC_3(++VAR_7, (char *)VAR_3, VAR_4 - 1);
      VAR_12 = VAR_1;
     }
     else if (VAR_4 == 0) {
      VAR_12 = VAR_1;
     }

     else if (VAR_4 == -1) {
      FUNC_2(++VAR_7, (char *)VAR_3);
      VAR_12 = VAR_1;
     }

     break;
   }
   goto gotit;
  }
gotit:

  while(!FUNC_5(*VAR_6)) VAR_6++;


  while(*VAR_6 && FUNC_5(*VAR_6)) VAR_6++;
 }

 return(VAR_12);
}
