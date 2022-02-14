
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VCSM_CACHE_TYPE_T ;
struct TYPE_9__ {int vcsm_handle; } ;
struct TYPE_8__ {int * attribute_locations; int program; } ;
struct TYPE_7__ {int * attribute_locations; int program; } ;
struct TYPE_6__ {int height; int width; int y; int x; int y_texture; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*,int ,...) ;
 TYPE_5__ VAR_17 ;
 scalar_t__ FUNC_16 (int ,int ,int *) ;
 int FUNC_17 (unsigned char*) ;
 TYPE_4__ VAR_18 ;
 TYPE_2__ VAR_19 ;
 int FUNC_18 (unsigned char*) ;

__attribute__((used)) static int FUNC_19(RASPITEX_STATE *VAR_20)
{
    unsigned char *VAR_21 = ((void*)0);
    VCSM_CACHE_TYPE_T VAR_22;

    FUNC_15("%s", VAR_10);

    FUNC_6(255, 0, 0, 255);

    FUNC_0(FUNC_3(VAR_5, VAR_13));
    FUNC_0(FUNC_13(0, 0, VAR_15, VAR_12));
    FUNC_5(VAR_1 | VAR_2);


    FUNC_0(FUNC_11(VAR_18.program));
    FUNC_0(FUNC_1(VAR_6));
    FUNC_0(FUNC_4(VAR_8, VAR_20->y_texture));
    FUNC_0(FUNC_2(VAR_0, VAR_16));
    FUNC_0(FUNC_9(VAR_18.attribute_locations[0]));
    FUNC_0(FUNC_12(VAR_18.attribute_locations[0], 2, VAR_4, VAR_3, 0, 0));
    FUNC_0(FUNC_8(VAR_9, 0, 6));

    FUNC_0(FUNC_10());


    VAR_21 = (unsigned char *) FUNC_16(VAR_17.vcsm_handle, VAR_11, &VAR_22);
    if (! VAR_21) {
        FUNC_14("Failed to lock VCSM buffer for handle %d\n", VAR_17.vcsm_handle);
        return -1;
    }
    FUNC_15("Locked vcsm handle %d at %p\n", VAR_17.vcsm_handle, VAR_21);

    FUNC_17(VAR_21);



    FUNC_18(VAR_21);


    FUNC_0(FUNC_3(VAR_5, 0));


    FUNC_0(FUNC_13(VAR_20->x, VAR_20->y, VAR_20->width, VAR_20->height));
    FUNC_0(FUNC_11(VAR_19.program));
    FUNC_0(FUNC_1(VAR_6));
    FUNC_0(FUNC_4(VAR_7, VAR_14));
    FUNC_0(FUNC_9(VAR_19.attribute_locations[0]));
    FUNC_0(FUNC_12(VAR_19.attribute_locations[0], 2, VAR_4, VAR_3, 0, 0));
    FUNC_0(FUNC_8(VAR_9, 0, 6));

    FUNC_0(FUNC_7(VAR_19.attribute_locations[0]));
    FUNC_0(FUNC_11(0));

    return 0;
}
