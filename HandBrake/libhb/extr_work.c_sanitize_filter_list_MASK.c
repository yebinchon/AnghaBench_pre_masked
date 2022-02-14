
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int selective ;
typedef int hb_list_t ;
struct TYPE_7__ {int width; int height; } ;
typedef TYPE_1__ hb_geometry_t ;
struct TYPE_8__ {int * settings; } ;
typedef TYPE_2__ hb_filter_object_t ;
typedef int hb_dict_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (TYPE_2__**) ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(hb_list_t *VAR_7, hb_geometry_t VAR_8)
{

    if (FUNC_3(VAR_7, VAR_0) != ((void*)0))
    {
        int VAR_9[] = {VAR_2, VAR_3};
        int VAR_10, VAR_11 = sizeof(VAR_9) / sizeof(int);

        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
        {
            hb_filter_object_t * VAR_12 = FUNC_3(VAR_7, VAR_9[VAR_10]);
            if (VAR_12 != ((void*)0))
            {
                int VAR_13 = FUNC_0(VAR_12->settings, "mode");
                VAR_13 |= VAR_6;
                FUNC_1(VAR_12->settings, "mode", FUNC_6(VAR_13));
                break;
            }
        }
    }

    int VAR_14 = 0;
    hb_filter_object_t * VAR_15 = FUNC_3(VAR_7, VAR_4);
    if (VAR_15 != ((void*)0))
    {
        VAR_14 = 1;
    }

    VAR_15 = FUNC_3(VAR_7, VAR_5);
    if (VAR_15 != ((void*)0))
    {
        int VAR_16 = FUNC_0(VAR_15->settings, "mode");

        if ( (VAR_16 == 0) && (VAR_14 == 0) )
        {
            FUNC_4(VAR_7, VAR_15);
            FUNC_2(&VAR_15);
            FUNC_5("Skipping vfr filter");
        }
    }

    VAR_15 = FUNC_3(VAR_7, VAR_1);
    if (VAR_15 != ((void*)0))
    {
        hb_dict_t* VAR_17 = VAR_15->settings;
        if (VAR_17 != ((void*)0))
        {
            int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
            VAR_18 = FUNC_0(VAR_17, "width");
            VAR_19 = FUNC_0(VAR_17, "height");
            VAR_20 = FUNC_0(VAR_17, "crop-top");
            VAR_21 = FUNC_0(VAR_17, "crop-bottom");
            VAR_22 = FUNC_0(VAR_17, "crop-left");
            VAR_23 = FUNC_0(VAR_17, "crop-right");

            if ( (VAR_8.width == VAR_18) && (VAR_8.height == VAR_19) &&
                (VAR_20 == 0) && (VAR_21 == 0 ) && (VAR_22 == 0) && (VAR_23 == 0) )
            {
                FUNC_4(VAR_7, VAR_15);
                FUNC_2(&VAR_15);
                FUNC_5("Skipping crop/scale filter");
            }
        }
    }
}
