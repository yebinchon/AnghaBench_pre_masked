
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int stateLog; int symbolTT; } ;
typedef int FSE_CTable ;
typedef TYPE_1__ FSE_CState_t ;


 int FUNC_0 (int,char*,unsigned int const,...) ;
 size_t FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,unsigned int const,unsigned int,unsigned int const) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int VAR_0 ;
 unsigned int const FUNC_4 (int const*) ;

__attribute__((used)) static size_t FUNC_5(
    FSE_CTable const* VAR_1,
    unsigned const* VAR_2,
    unsigned const VAR_3)
{
    unsigned const VAR_4 = 8;
    size_t VAR_5 = 0;
    unsigned VAR_6;
    FSE_CState_t VAR_7;
    FUNC_3(&VAR_7, VAR_1);
    if (FUNC_4(VAR_1) < VAR_3) {
        FUNC_0(5, "Repeat FSE_CTable has maxSymbolValue %u < %u",
                    FUNC_4(VAR_1), VAR_3);
        return FUNC_1(VAR_0);
    }
    for (VAR_6 = 0; VAR_6 <= VAR_3; ++VAR_6) {
        unsigned const VAR_8 = VAR_7.stateLog;
        unsigned const VAR_9 = (VAR_8 + 1) << VAR_4;
        unsigned const VAR_10 = FUNC_2(VAR_7.symbolTT, VAR_8, VAR_6, VAR_4);
        if (VAR_2[VAR_6] == 0)
            continue;
        if (VAR_10 >= VAR_9) {
            FUNC_0(5, "Repeat FSE_CTable has Prob[%u] == 0", VAR_6);
            return FUNC_1(VAR_0);
        }
        VAR_5 += VAR_2[VAR_6] * VAR_10;
    }
    return VAR_5 >> VAR_4;
}
