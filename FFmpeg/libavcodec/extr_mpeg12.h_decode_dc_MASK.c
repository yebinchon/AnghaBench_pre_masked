
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int table; } ;
struct TYPE_3__ {int table; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    if (VAR_5 == 0) {
        VAR_6 = FUNC_1(VAR_4, VAR_3.table, VAR_1, 2);
    } else {
        VAR_6 = FUNC_1(VAR_4, VAR_2.table, VAR_1, 2);
    }
    if (VAR_6 < 0){
        FUNC_0(((void*)0), VAR_0, "invalid dc code at\n");
        return 0xffff;
    }
    if (VAR_6 == 0) {
        VAR_7 = 0;
    } else {
        VAR_7 = FUNC_2(VAR_4, VAR_6);
    }
    return VAR_7;
}
