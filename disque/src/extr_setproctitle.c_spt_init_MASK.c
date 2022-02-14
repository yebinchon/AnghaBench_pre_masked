
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* nul; char* base; char* end; int error; void* arg0; } ;


 TYPE_1__ VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 () ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char**) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(int VAR_5, char *VAR_6[]) {
        char **VAR_7 = VAR_1;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 if (!(VAR_8 = VAR_6[0]))
  return;

 VAR_10 = &VAR_8[FUNC_5(VAR_8)];
 VAR_9 = VAR_10 + 1;

 for (VAR_12 = 0; VAR_12 < VAR_5 || (VAR_12 >= VAR_5 && VAR_6[VAR_12]); VAR_12++) {
  if (!VAR_6[VAR_12] || VAR_6[VAR_12] < VAR_9)
   continue;

  VAR_9 = VAR_6[VAR_12] + FUNC_5(VAR_6[VAR_12]) + 1;
 }

 for (VAR_12 = 0; VAR_7[VAR_12]; VAR_12++) {
  if (VAR_7[VAR_12] < VAR_9)
   continue;

  VAR_9 = VAR_7[VAR_12] + FUNC_5(VAR_7[VAR_12]) + 1;
 }

 if (!(VAR_0.arg0 = FUNC_4(VAR_6[0])))
  goto syerr;
 if ((VAR_13 = FUNC_3(VAR_7)))
  goto error;

 if ((VAR_13 = FUNC_2(VAR_5, VAR_6)))
  goto error;

 VAR_0.nul = VAR_10;
 VAR_0.base = VAR_8;
 VAR_0.end = VAR_9;

 return;
syerr:
 VAR_13 = VAR_2;
error:
 VAR_0.error = VAR_13;
}
