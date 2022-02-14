
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static char *FUNC_7(char *VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;

 VAR_3 = 64;
 while (1) {
  VAR_4 = -VAR_0;
  VAR_5 = FUNC_3(VAR_3, VAR_1);
  if (VAR_5 == ((void*)0))
   goto out;

  VAR_4 = FUNC_1(VAR_2, VAR_5, VAR_3);
  if (VAR_4 < VAR_3)
   break;
  VAR_3 *= 2;
  FUNC_2(VAR_5);
 }
 if (VAR_4 < 0)
  goto out_free;

 if (*VAR_5 == '/')
  return VAR_5;

 VAR_7 = FUNC_6(VAR_2, '/');
 if (VAR_7 == ((void*)0))
  return VAR_5;

 *(VAR_7 + 1) = '\0';
 VAR_3 = FUNC_5(VAR_2) + FUNC_5(VAR_5) + 1;

 VAR_6 = FUNC_3(VAR_3, VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_4 = -VAR_0;
  goto out_free;
 }

 FUNC_4(VAR_6, "%s%s", VAR_2, VAR_5);
 FUNC_2(VAR_5);
 FUNC_2(VAR_2);
 return VAR_6;

 out_free:
 FUNC_2(VAR_5);
 out:
 return FUNC_0(VAR_4);
}
