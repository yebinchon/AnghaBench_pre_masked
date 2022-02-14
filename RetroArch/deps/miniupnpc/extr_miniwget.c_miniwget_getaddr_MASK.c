
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (char*,unsigned short,char*,int*,char*,int,unsigned int,int*) ;
 int FUNC_1 (char const*,char*,unsigned short*,char**,unsigned int*) ;
 int FUNC_2 (char*,char*,unsigned short,char*,unsigned int) ;

void *
FUNC_3(const char * VAR_1, int * VAR_2,
                 char * VAR_3, int VAR_4, unsigned int VAR_5,
                 int * VAR_6)
{
 unsigned short VAR_7;
 char * VAR_8;

 char VAR_9[VAR_0+1];
 *VAR_2 = 0;
 if(VAR_3)
  VAR_3[0] = '\0';
 if(!FUNC_1(VAR_1, VAR_9, &VAR_7, &VAR_8, &VAR_5))
  return ((void*)0);




 return FUNC_0(VAR_9, VAR_7, VAR_8, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
