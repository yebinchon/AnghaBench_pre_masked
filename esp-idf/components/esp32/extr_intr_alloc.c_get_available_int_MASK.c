
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int intno; int flags; TYPE_2__* shared_vec_info; } ;
typedef TYPE_1__ vector_desc_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ shared_vector_desc_t ;
struct TYPE_10__ {scalar_t__* cpuflags; int level; scalar_t__ type; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 TYPE_5__* VAR_7 ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12;
    int VAR_13=-1;
    int VAR_14=9;
    int VAR_15=VAR_5;

    vector_desc_t VAR_16;
    FUNC_5(&VAR_16, 0, sizeof(vector_desc_t));



    if (!(VAR_8&VAR_0)) VAR_8|=VAR_1;

    FUNC_0("get_available_int: try to find existing. Cpu: %d, Source: %d", VAR_9, VAR_11);
    vector_desc_t *VAR_17 = FUNC_2(VAR_11, VAR_9);
    if ( VAR_17 ) {

        FUNC_0("get_avalible_int: existing vd found. intno: %d", VAR_17->intno);
        if ( VAR_10 != -1 && VAR_10 != VAR_17->intno ) {
            FUNC_0("get_avalible_int: intr forced but not matach existing. existing intno: %d, force: %d", VAR_17->intno, VAR_10);
        } else if ( !FUNC_4(VAR_17, VAR_8, VAR_9, VAR_10) ) {
            FUNC_0("get_avalible_int: existing vd invalid.");
        } else {
            VAR_13 = VAR_17->intno;
        }
        return VAR_13;
    }
    if (VAR_10!=-1) {
        FUNC_0("get_available_int: try to find force. Cpu: %d, Source: %d, Force: %d", VAR_9, VAR_11, VAR_10);

        VAR_17 = FUNC_1(VAR_10, VAR_9);
        if (VAR_17 == ((void*)0) ) {

            VAR_16.intno = VAR_10;
            VAR_17 = &VAR_16;
        }
        if ( FUNC_4(VAR_17, VAR_8, VAR_9, VAR_10) ) {
            VAR_13 = VAR_17->intno;
        } else {
            FUNC_0("get_avalible_int: forced vd invalid.");
        }
        return VAR_13;
    }

    FUNC_0("get_free_int: start looking. Current cpu: %d", VAR_9);

    for (VAR_12=0; VAR_12<32; VAR_12++) {

        VAR_17=FUNC_1(VAR_12, VAR_9);
        if (VAR_17==((void*)0)) {
            VAR_16.intno = VAR_12;
            VAR_17=&VAR_16;
        }

        FUNC_0("Int %d reserved %d level %d %s hasIsr %d",
            VAR_12, VAR_7[VAR_12].cpuflags[VAR_9]==VAR_3, VAR_7[VAR_12].level,
            VAR_7[VAR_12].type==VAR_4?"LEVEL":"EDGE", FUNC_3(VAR_12, VAR_9));

        if ( !FUNC_4(VAR_17, VAR_8, VAR_9, VAR_10) ) continue;

        if (VAR_8&VAR_2) {



            if (VAR_17->flags&VAR_6) {


                int VAR_18=0;
                shared_vector_desc_t *VAR_19=VAR_17->shared_vec_info;
                while (VAR_19!=((void*)0)) {
                    VAR_18++;
                    VAR_19=VAR_19->next;
                }
                if (VAR_18<VAR_15 || VAR_14>VAR_7[VAR_12].level) {

                    VAR_13=VAR_12;
                    VAR_15=VAR_18;
                    VAR_14=VAR_7[VAR_12].level;
                    FUNC_0("...int %d more usable as a shared int: has %d existing vectors", VAR_12, VAR_18);
                } else {
                    FUNC_0("...worse than int %d", VAR_13);
                }
            } else {
                if (VAR_13==-1) {



                    if (VAR_14>VAR_7[VAR_12].level) {
                        VAR_13=VAR_12;
                        VAR_14=VAR_7[VAR_12].level;
                        FUNC_0("...int %d usable as a new shared int", VAR_12);
                    }
                } else {
                    FUNC_0("...already have a shared int");
                }
            }
        } else {

            if (VAR_14>VAR_7[VAR_12].level) {
                VAR_13=VAR_12;
                VAR_14=VAR_7[VAR_12].level;
            } else {
                FUNC_0("...worse than int %d", VAR_13);
            }
        }
    }
    FUNC_0("get_available_int: using int %d", VAR_13);


    return VAR_13;
}
