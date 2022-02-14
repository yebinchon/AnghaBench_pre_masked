
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

int FUNC_5(char* VAR_4, char* VAR_5, int* VAR_6, char* VAR_7, char* VAR_8)
{
 char* VAR_9 = FUNC_4(VAR_4, VAR_0);

 if(VAR_9 == ((void*)0))
  return 0;

 VAR_9 += FUNC_3(VAR_0) + 1;

 VAR_9 += FUNC_1(VAR_5, VAR_9, ',', VAR_1);
 if(*VAR_9 != ',') return 0;
 VAR_9++;
 VAR_9 += FUNC_2(VAR_9);

 *VAR_6 = FUNC_0(VAR_9);
 VAR_9 = FUNC_4(VAR_9, ",");
 if(VAR_9 == ((void*)0)) return 0;
    VAR_9++;
 VAR_9 += FUNC_2(VAR_9);

 VAR_9 += FUNC_1(VAR_7, VAR_9, ',', VAR_3);
 if(*VAR_9 != ',') return 0;
 VAR_9++;
 VAR_9 += FUNC_2(VAR_9);

 VAR_9 += FUNC_1(VAR_8, VAR_9, ')', VAR_2);
 if(*VAR_9 != ')') return 0;
 VAR_9++;
 VAR_9 += FUNC_2(VAR_9);

 return 1;
}
