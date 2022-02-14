
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int num; int den; } ;
typedef TYPE_1__ AVRational ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__,TYPE_1__) ;
 int FUNC_1 (int,int,int,int ) ;

int FUNC_2(AVRational VAR_2, AVRational VAR_3, AVRational VAR_4)
{

    int64_t VAR_5 = VAR_3 * (int64_t)VAR_4 + VAR_4 * (int64_t)VAR_3;
    int64_t VAR_6 = 2 * (int64_t)VAR_3 * VAR_4;


    int64_t VAR_7 = FUNC_1(VAR_5, VAR_2.den, VAR_6, VAR_1);


    int64_t VAR_8 = FUNC_1(VAR_5, VAR_2.den, VAR_6, VAR_0);

    return ((VAR_7 > VAR_2.num) - (VAR_8 < VAR_2.num)) * FUNC_0(VAR_4, VAR_3);
}
