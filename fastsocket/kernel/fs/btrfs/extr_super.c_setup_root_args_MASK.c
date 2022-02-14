
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (unsigned int,int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5(char *VAR_1)
{
 unsigned VAR_2 = FUNC_3(VAR_1) + 2 + 1;
 char *VAR_3, *VAR_4, *VAR_5;
 VAR_3 = FUNC_4(VAR_1, "subvol=");

 if (!VAR_3)
  return ((void*)0);

 VAR_5 = VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_5)
  return ((void*)0);





 if (VAR_3 != VAR_1) {
  *VAR_3++ = '\0';
  FUNC_2(VAR_5, VAR_1);
  VAR_4 += FUNC_3(VAR_1);
 }

 FUNC_2(VAR_4, "subvolid=0");
 VAR_4 += FUNC_3("subvolid=0");





 VAR_3 = FUNC_1(VAR_3, ',');
 if (VAR_3)
  FUNC_2(VAR_4, VAR_3);

 return VAR_5;
}
