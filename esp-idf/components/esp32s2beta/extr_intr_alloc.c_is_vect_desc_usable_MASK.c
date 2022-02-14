
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int intno; int flags; } ;
typedef TYPE_1__ vector_desc_t ;
struct TYPE_5__ {scalar_t__* cpuflags; int level; scalar_t__ type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_11 ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static bool FUNC_3(vector_desc_t *VAR_12, int VAR_13, int VAR_14, int VAR_15)
{

    int VAR_16 = VAR_12->intno;
    if (VAR_11[VAR_16].cpuflags[VAR_14]==VAR_3) {
        FUNC_0("....Unusable: reserved");
        return 0;
    }
    if (VAR_11[VAR_16].cpuflags[VAR_14]==VAR_4 && VAR_15==-1) {
        FUNC_0("....Unusable: special-purpose int");
        return 0;
    }

    if (!(VAR_13&(1<<VAR_11[VAR_16].level))) {
        FUNC_0("....Unusable: incompatible level");
        return 0;
    }

    if (((VAR_13&VAR_0) && (VAR_11[VAR_16].type==VAR_6)) ||
            (((!(VAR_13&VAR_0)) && (VAR_11[VAR_16].type==VAR_5)))) {
        FUNC_0("....Unusable: incompatible trigger type");
        return 0;
    }

    if (VAR_12->flags&VAR_9) {
        FUNC_0("....Unusable: reserved at runtime.");
        return 0;
    }

    FUNC_1(!((VAR_12->flags&VAR_10)&&(VAR_12->flags&VAR_8)));

    if (VAR_12->flags&VAR_8) {
        FUNC_0("....Unusable: already in (non-shared) use.");
        return 0;
    }

    if (VAR_12->flags&VAR_10 ) {
        if (VAR_13&VAR_2) {
            bool VAR_17=((VAR_13&VAR_1)!=0);
            bool VAR_18=((VAR_12->flags&VAR_7)!=0);

            if ((VAR_12->flags&VAR_10) && (VAR_18!=VAR_17)) {
                FUNC_0("....Unusable: shared but iram prop doesn't match");
                return 0;
            }
        } else {

            FUNC_0("...Unusable: int is shared, we need non-shared.");
            return 0;
        }
    } else if (FUNC_2(VAR_16, VAR_14)) {

        FUNC_0("....Unusable: already allocated");
        return 0;
    }
    return 1;
}
