
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int,char const*,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int,char const*) ;

inline int FUNC_5(int VAR_3, const char *VAR_4,
       char *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if ((VAR_7 > VAR_6) || (VAR_7 == 0) || (VAR_7 == -1)) {
  return -1;
 } else {

  return FUNC_3(VAR_2,
     FUNC_0(1,VAR_0)|
     FUNC_0(2,VAR_1)|
     FUNC_1(4, 1),
     VAR_3, VAR_4, VAR_5, FUNC_2(VAR_7));
 }
}
