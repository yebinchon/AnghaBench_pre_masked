
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int string_validation_utf8_flags; } ;
typedef TYPE_1__ WriterContext ;
typedef int Writer ;
struct TYPE_15__ {int entries_to_show; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ,int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int *,int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*) ;
 char* FUNC_12 (scalar_t__,char*,char**) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_21 (int,char**,int ) ;
 int FUNC_22 (int *,int,char**,int ,int ) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 scalar_t__ VAR_58 ;
 int FUNC_23 (TYPE_1__*,scalar_t__) ;
 char* VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_24 (int *,int *) ;
 scalar_t__ VAR_63 ;
 int VAR_64 ;
 int FUNC_25 (int ) ;
 TYPE_5__* VAR_65 ;
 int FUNC_26 (int,char**,int ) ;
 char* VAR_66 ;
 int FUNC_27 (TYPE_1__*,int) ;
 int FUNC_28 () ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_29 () ;
 int FUNC_30 (TYPE_1__**) ;
 int * FUNC_31 (char*) ;
 int FUNC_32 (TYPE_1__**,int const*,char*,TYPE_5__*,int) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (TYPE_1__*,int ) ;
 int FUNC_35 () ;
 int const VAR_70 ;

int FUNC_36(int VAR_71, char **VAR_72)
{
    const Writer *VAR_73;
    WriterContext *VAR_74;
    char *VAR_75;
    char *VAR_76 = ((void*)0), *VAR_77 = ((void*)0);
    int VAR_78, VAR_79;

    FUNC_19();







    FUNC_10(VAR_1);
    FUNC_25(VAR_41);

    VAR_52 = VAR_64;
    FUNC_21(VAR_71, VAR_72, VAR_52);
    FUNC_15();
    FUNC_20();




    FUNC_26(VAR_71, VAR_72, VAR_52);
    FUNC_22(((void*)0), VAR_71, VAR_72, VAR_52, VAR_51);

    if (VAR_34)
        FUNC_9(VAR_49);


    FUNC_2(VAR_3, VAR_28);
    FUNC_2(VAR_7, VAR_40);
    FUNC_2(VAR_8, VAR_42);
    FUNC_2(VAR_10, VAR_45);
    FUNC_2(VAR_12, VAR_48);
    FUNC_2(VAR_13, VAR_54);
    FUNC_2(VAR_15, VAR_57);
    FUNC_2(VAR_17, VAR_56);
    FUNC_2(VAR_16, VAR_55);
    FUNC_2(VAR_22, VAR_61);
    FUNC_2(VAR_18, VAR_62);
    FUNC_2(VAR_24, VAR_69);
    FUNC_2(VAR_25, VAR_67);
    FUNC_2(VAR_19, VAR_67);

    FUNC_2(VAR_4, VAR_27);
    FUNC_2(VAR_9, VAR_43);
    FUNC_2(VAR_11, VAR_44);
    FUNC_2(VAR_21, VAR_60);
    FUNC_2(VAR_26, VAR_68);
    FUNC_2(VAR_20, VAR_68);
    FUNC_2(VAR_14, VAR_53);

    if (VAR_29 && (VAR_37 || VAR_33)) {
        FUNC_8(((void*)0), VAR_0,
               "-bitexact and -show_program_version or -show_library_versions "
               "options are incompatible\n");
        VAR_78 = FUNC_0(VAR_5);
        goto end;
    }

    FUNC_35();

    if (!VAR_58)
        VAR_58 = FUNC_11("default");
    if (!VAR_58) {
        VAR_78 = FUNC_0(VAR_6);
        goto end;
    }
    VAR_76 = FUNC_12(VAR_58, "=", &VAR_75);
    if (!VAR_76) {
        FUNC_8(((void*)0), VAR_0,
               "No name specified for the output format\n");
        VAR_78 = FUNC_0(VAR_5);
        goto end;
    }
    VAR_77 = VAR_75;

    if (VAR_66) {
        if ((VAR_78 = FUNC_5(&VAR_46, VAR_66)) < 0) {
            if (VAR_78 == FUNC_0(VAR_5)) {
                const char *VAR_80;
                FUNC_8(((void*)0), VAR_0,
                       "Unknown hash algorithm '%s'\nKnown algorithms:",
                       VAR_66);
                for (VAR_79 = 0; (VAR_80 = FUNC_7(VAR_79)); VAR_79++)
                    FUNC_8(((void*)0), VAR_0, " %s", VAR_80);
                FUNC_8(((void*)0), VAR_0, "\n");
            }
            goto end;
        }
    }

    VAR_73 = FUNC_31(VAR_76);
    if (!VAR_73) {
        FUNC_8(((void*)0), VAR_0, "Unknown output format with name '%s'\n", VAR_76);
        VAR_78 = FUNC_0(VAR_5);
        goto end;
    }

    if ((VAR_78 = FUNC_32(&VAR_74, VAR_73, VAR_77,
                           VAR_65, FUNC_1(VAR_65))) >= 0) {
        if (VAR_73 == &VAR_70)
            VAR_74->string_validation_utf8_flags |= VAR_2;

        FUNC_34(VAR_74, VAR_23);

        if (VAR_37)
            FUNC_18(VAR_74);
        if (VAR_33)
            FUNC_16(VAR_74);
        if (VAR_36)
            FUNC_17(VAR_74);

        if (!VAR_47 &&
            ((VAR_32 || VAR_38 || VAR_39 || VAR_30 || VAR_35 || VAR_31) ||
             (!VAR_37 && !VAR_33 && !VAR_36))) {
            FUNC_28();
            FUNC_8(((void*)0), VAR_0, "You have to specify one input file.\n");
            FUNC_8(((void*)0), VAR_0, "Use -h to get full help or, even better, run 'man %s'.\n", VAR_59);
            VAR_78 = FUNC_0(VAR_5);
        } else if (VAR_47) {
            VAR_78 = FUNC_23(VAR_74, VAR_47);
            if (VAR_78 < 0 && VAR_31)
                FUNC_27(VAR_74, VAR_78);
        }

        FUNC_33(VAR_74);
        FUNC_30(&VAR_74);
    }

end:
    FUNC_4(&VAR_58);
    FUNC_4(&VAR_63);
    FUNC_6(&VAR_46);

    FUNC_29();
    for (VAR_79 = 0; VAR_79 < FUNC_1(VAR_65); VAR_79++)
        FUNC_3(&(VAR_65[VAR_79].entries_to_show));

    FUNC_14();

    return VAR_78 < 0;
}
