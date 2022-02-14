
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, char *VAR_2[]) {
 char *VAR_3;
 int VAR_4;

 for (VAR_4 = 1; VAR_4 < VAR_1 || (VAR_4 >= VAR_1 && VAR_2[VAR_4]); VAR_4++) {
  if (!VAR_2[VAR_4])
   continue;

  if (!(VAR_3 = FUNC_0(VAR_2[VAR_4])))
   return VAR_0;

  VAR_2[VAR_4] = VAR_3;
 }

 return 0;
}
