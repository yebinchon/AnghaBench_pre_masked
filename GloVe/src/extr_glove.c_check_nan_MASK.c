
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

inline real FUNC_3(real VAR_1) {
    if (FUNC_2(VAR_1) || FUNC_1(VAR_1)) {
        FUNC_0(VAR_0,"\ncaught NaN in update");
        return 0.;
    } else {
        return VAR_1;
    }
}
