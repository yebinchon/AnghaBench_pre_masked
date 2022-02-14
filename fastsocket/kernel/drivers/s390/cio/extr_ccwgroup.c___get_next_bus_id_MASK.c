
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const char **VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6, *VAR_7;

 VAR_6 = (char *)*VAR_2;
 VAR_7 = FUNC_0(VAR_6, ',');
 if (!VAR_7) {

  VAR_7 = FUNC_0(VAR_6, '\n');
  if (VAR_7)
   *VAR_7 = '\0';
  VAR_5 = FUNC_2(VAR_6) + 1;
 } else {
  VAR_5 = VAR_7 - VAR_6 + 1;
  VAR_7++;
 }
 if (VAR_5 < VAR_0) {
  FUNC_1(VAR_3, VAR_6, VAR_5);
  VAR_4 = 0;
 } else
  VAR_4 = -VAR_1;
 *VAR_2 = VAR_7;
 return VAR_4;
}
