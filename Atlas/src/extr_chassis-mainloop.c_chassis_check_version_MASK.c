
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,char const*,int) ;
 int FUNC_1 (char const*,char*,int*,int*,int*) ;

int FUNC_2(const char *VAR_1, const char *VAR_2) {
 int VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 if (3 != (VAR_9 = FUNC_1(VAR_1, "%d.%d.%d%*s", &VAR_3, &VAR_4, &VAR_5))) {
  FUNC_0("%s: library version %s failed to parse: %d",
    VAR_0, VAR_1, VAR_9);
  return -1;
 }
 if (3 != (VAR_9 = FUNC_1(VAR_2, "%d.%d.%d%*s", &VAR_6, &VAR_7, &VAR_8))) {
  FUNC_0("%s: header version %s failed to parse: %d",
    VAR_0, VAR_2, VAR_9);
  return -1;
 }

 if (VAR_3 == VAR_6 &&
     VAR_4 == VAR_7 &&
     VAR_5 >= VAR_8) {
  return 0;
 }

 return -1;
}
