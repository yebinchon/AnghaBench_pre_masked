
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_t ;
typedef int const hb_dict_t ;
struct TYPE_3__ {int short_name; } ;
typedef TYPE_1__ hb_container_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int const*,char*) ;
 int const* FUNC_5 () ;
 int FUNC_6 (int const*,char*,int const*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int const* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int const* FUNC_13 (void*,int ) ;

int FUNC_14(const hb_dict_t *VAR_3, hb_dict_t *VAR_4)
{
    hb_value_t *VAR_5 = FUNC_4(VAR_3, "FileFormat");
    int VAR_6;
    if (FUNC_12(VAR_5) == VAR_2)
    {
        VAR_6 = FUNC_3(FUNC_9(VAR_5));
        if (VAR_6 == 0)
            VAR_6 = FUNC_1(
                                            FUNC_9(VAR_5));
    }
    else
    {
        VAR_6 = FUNC_8(VAR_5);
    }
    hb_container_t *VAR_7 = FUNC_2(VAR_6);
    if (VAR_7 == ((void*)0))
    {
        char *VAR_8 = FUNC_10(VAR_5);
        FUNC_7("Invalid container (%s)", VAR_8);
        FUNC_0(VAR_8);
        return -1;
    }

    hb_dict_t *VAR_9 = FUNC_4(VAR_4, "Destination");
    FUNC_6(VAR_9, "Mux", FUNC_11(VAR_7->short_name));

    FUNC_6(VAR_9, "AlignAVStart",
                FUNC_13(FUNC_4(VAR_3, "AlignAVStart"),
                               VAR_1));
    FUNC_6(VAR_9, "InlineParameterSets",
                FUNC_13(FUNC_4(VAR_3, "InlineParameterSets"),
                               VAR_1));
    if (VAR_6 & VAR_0)
    {
        hb_dict_t *VAR_10 = FUNC_5();
        FUNC_6(VAR_10, "Mp4Optimize",
                    FUNC_13(FUNC_4(VAR_3, "Mp4HttpOptimize"),
                                   VAR_1));
        FUNC_6(VAR_10, "IpodAtom",
                    FUNC_13(FUNC_4(VAR_3, "Mp4iPodCompatible"),
                                   VAR_1));
        FUNC_6(VAR_9, "Mp4Options", VAR_10);
    }

    return 0;
}
