
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {TYPE_1__* tab; } ;
struct TYPE_4__ {int hash_prefix; scalar_t__ suffix; } ;
typedef TYPE_2__ LZWEncodeState ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(LZWEncodeState * VAR_1, uint8_t VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_1(FUNC_0(VAR_3, 0), VAR_2);
    int VAR_5 = FUNC_3(VAR_4);

    while (VAR_1->tab[VAR_4].hash_prefix != VAR_0) {
        if ((VAR_1->tab[VAR_4].suffix == VAR_2)
            && (VAR_1->tab[VAR_4].hash_prefix == VAR_3))
            return VAR_4;
        VAR_4 = FUNC_2(VAR_4, VAR_5);
    }

    return VAR_4;
}
