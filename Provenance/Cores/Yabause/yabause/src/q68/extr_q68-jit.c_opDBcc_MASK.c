
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ current_PC; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(Q68State *VAR_7, uint32_t VAR_8)
{
    VAR_0;
    VAR_2;
    VAR_1;
    uint32_t VAR_9 = VAR_7->current_PC + VAR_5;
    int32_t VAR_10 = FUNC_3(VAR_9);
    FUNC_2(VAR_3, VAR_4);
    if (VAR_10 >= 0) {
        FUNC_1(VAR_4, VAR_6*4, VAR_9, VAR_10);
    } else {
        FUNC_0(VAR_4, VAR_6*4, VAR_9);
    }
    return 0;
}
