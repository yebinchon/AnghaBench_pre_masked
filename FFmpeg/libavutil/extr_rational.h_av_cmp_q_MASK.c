
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int num; int const den; } ;
typedef TYPE_1__ AVRational ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(AVRational VAR_1, AVRational VAR_2){
    const int64_t VAR_3= VAR_1.num * (int64_t)VAR_2.den - VAR_2.num * (int64_t)VAR_1.den;

    if(VAR_3) return (int)((VAR_3 ^ VAR_1.den ^ VAR_2.den)>>63)|1;
    else if(VAR_2.den && VAR_1.den) return 0;
    else if(VAR_1.num && VAR_2.num) return (VAR_1.num>>31) - (VAR_2.num>>31);
    else return VAR_0;
}
