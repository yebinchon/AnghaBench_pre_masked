
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLogLevelFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(int VAR_9, const char *VAR_10) {


 GLogLevelFlags VAR_11 = VAR_2;

 if (VAR_9 == VAR_5) VAR_11 = VAR_2;
 else if (VAR_9 == VAR_7) VAR_11 = VAR_3;
 else if (VAR_9 == VAR_8) VAR_11 = VAR_4;
 else if (VAR_9 == VAR_6) VAR_11 = VAR_1;


    if (VAR_9 == VAR_6) {
        FUNC_0(VAR_0, VAR_11, "(libevent) %s", VAR_10);
    }
}
