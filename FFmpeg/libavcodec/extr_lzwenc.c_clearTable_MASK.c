
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bits; int tabsize; TYPE_1__* tab; int clear_code; } ;
struct TYPE_5__ {int code; int suffix; int hash_prefix; } ;
typedef TYPE_2__ LZWEncodeState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(LZWEncodeState * VAR_3)
{
    int VAR_4, VAR_5;

    FUNC_1(VAR_3, VAR_3->clear_code);
    VAR_3->bits = 9;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_3->tab[VAR_4].hash_prefix = VAR_2;
    }
    for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
        VAR_5 = FUNC_0(0, VAR_4);
        VAR_3->tab[VAR_5].code = VAR_4;
        VAR_3->tab[VAR_5].suffix = VAR_4;
        VAR_3->tab[VAR_5].hash_prefix = VAR_1;
    }
    VAR_3->tabsize = 258;
}
