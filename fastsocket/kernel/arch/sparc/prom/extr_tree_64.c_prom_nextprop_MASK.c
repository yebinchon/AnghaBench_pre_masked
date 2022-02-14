
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,int,char const*,char*) ;
 int FUNC_3 (char*,char const*) ;

inline char *FUNC_4(int VAR_2, const char *VAR_3, char *VAR_4)
{
 char VAR_5[32];

 if(VAR_2 == -1) {
  *VAR_4 = 0;
  return VAR_4;
 }
 if (VAR_3 == VAR_4) {
  FUNC_3 (VAR_5, VAR_3);
  VAR_3 = VAR_5;
 }
 FUNC_2 ("nextprop", FUNC_0(1,VAR_0)|
        FUNC_0(2,VAR_1)|
        FUNC_1(3, 0),
        VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
