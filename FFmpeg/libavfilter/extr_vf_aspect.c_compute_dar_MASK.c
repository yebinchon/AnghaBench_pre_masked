
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; int den; } ;
typedef TYPE_1__ AVRational ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int,int,int ) ;

__attribute__((used)) static inline void FUNC_1(AVRational *VAR_1, AVRational VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_2.num && VAR_2.den) {
        FUNC_0(&VAR_1->num, &VAR_1->den, VAR_2.num * VAR_3, VAR_2.den * VAR_4, VAR_0);
    } else {
        FUNC_0(&VAR_1->num, &VAR_1->den, VAR_3, VAR_4, VAR_0);
    }
}
