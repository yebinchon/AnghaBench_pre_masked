
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int main_arena_ind ;
typedef int buf ;
typedef int arena_ind ;


 int VAR_0 ;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (unsigned int,unsigned int,char*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,unsigned int*,size_t*,unsigned int*,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char*,char*) ;

void *
FUNC_7(void *VAR_1)
{
 unsigned VAR_2 = *(unsigned *)VAR_1;
 void *VAR_3;
 unsigned VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_3 = FUNC_5(1);
 FUNC_0(VAR_3, "Error in malloc()");
 FUNC_3(VAR_3);

 VAR_5 = sizeof(VAR_4);
 if ((VAR_6 = FUNC_4("thread.arena", &VAR_4, &VAR_5, &VAR_2,
     sizeof(VAR_2)))) {
  char VAR_7[VAR_0];

  FUNC_2(VAR_6, VAR_7, sizeof(VAR_7));
  FUNC_6("Error in mallctl(): %s", VAR_7);
 }

 VAR_5 = sizeof(VAR_4);
 if ((VAR_6 = FUNC_4("thread.arena", &VAR_4, &VAR_5, ((void*)0), 0))) {
  char VAR_8[VAR_0];

  FUNC_2(VAR_6, VAR_8, sizeof(VAR_8));
  FUNC_6("Error in mallctl(): %s", VAR_8);
 }
 FUNC_1(VAR_4, VAR_2,
     "Arena index should be same as for main thread");

 return (((void*)0));
}
