
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int rate; int _ana_snb; } ;
typedef TYPE_1__ hdcd_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,double) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(hdcd_state *VAR_1, int32_t *VAR_2, int VAR_3, int VAR_4) {
    int VAR_5, VAR_6 = 300;
    int VAR_7 = VAR_1->rate / VAR_6;
    for (VAR_5 = 0; VAR_5 < VAR_3 * VAR_4; VAR_5 += VAR_4) {





        int32_t VAR_8 = (FUNC_1(VAR_2[VAR_5]) - VAR_0 >= 0) ? 2 : 0;
        VAR_8 |= VAR_2[VAR_5] & 1;
        VAR_2[VAR_5] = FUNC_0(VAR_1->_ana_snb, VAR_6, VAR_1->rate, 0.1);
        VAR_2[VAR_5] = (VAR_2[VAR_5] | 3) ^ ((~VAR_8) & 3);
        if (++VAR_1->_ana_snb > VAR_7) VAR_1->_ana_snb = 0;
    }
}
