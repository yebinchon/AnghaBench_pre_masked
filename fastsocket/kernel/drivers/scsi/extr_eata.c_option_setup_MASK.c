
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int *,int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(char *VAR_1)
{
 int VAR_2[VAR_0];
 char *VAR_3 = VAR_1;
 int VAR_4 = 1;

 while (VAR_3 && FUNC_1(*VAR_3) && VAR_4 <= VAR_0) {
  VAR_2[VAR_4++] = FUNC_2(VAR_3, ((void*)0), 0);

  if ((VAR_3 = FUNC_3(VAR_3, ',')) != ((void*)0))
   VAR_3++;
 }

 VAR_2[0] = VAR_4 - 1;
 FUNC_0(VAR_3, VAR_2);
 return 1;
}
