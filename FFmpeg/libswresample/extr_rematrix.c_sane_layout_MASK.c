
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int64_t VAR_10){
    if(!(VAR_10 & VAR_6))
        return 0;
    if(!FUNC_1(VAR_10 & (VAR_2 | VAR_4)))
        return 0;
    if(!FUNC_1(VAR_10 & (VAR_7 | VAR_8)))
        return 0;
    if(!FUNC_1(VAR_10 & (VAR_0 | VAR_1)))
        return 0;
    if(!FUNC_1(VAR_10 & (VAR_3 | VAR_5)))
        return 0;
    if(FUNC_0(VAR_10) >= VAR_9)
        return 0;

    return 1;
}
