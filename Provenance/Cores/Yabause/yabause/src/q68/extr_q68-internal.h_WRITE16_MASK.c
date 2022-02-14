
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int (* writew_func ) (int,int ) ;} ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline void FUNC_4(Q68State *VAR_1, uint32_t VAR_2, uint16_t VAR_3) {
    VAR_2 &= 0xFFFFFF;





    VAR_1->writew_func(VAR_2, VAR_3);
}
