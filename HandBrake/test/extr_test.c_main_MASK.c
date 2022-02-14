
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_handle_t ;
typedef int hb_dict_t ;


 scalar_t__ FUNC_0 (int,char**) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_2 (int,char**) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;
 char* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 char* VAR_29 ;
 char* VAR_30 ;
 char* VAR_31 ;
 char* VAR_32 ;
 char* VAR_33 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int*,char***) ;
 int VAR_34 ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int * FUNC_14 (int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 char* FUNC_18 (int *) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char*,scalar_t__,int ,int ,long long) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int **) ;
 int FUNC_25 (char*) ;
 char* VAR_35 ;
 char* VAR_36 ;
 char* VAR_37 ;
 char* VAR_38 ;
 scalar_t__ VAR_39 ;
 long long VAR_40 ;
 int VAR_41 ;
 char* VAR_42 ;
 char* VAR_43 ;
 char* VAR_44 ;
 char* VAR_45 ;
 char* VAR_46 ;
 char* VAR_47 ;
 char* VAR_48 ;
 char* VAR_49 ;
 int VAR_50 ;
 int * VAR_51 ;
 char* VAR_52 ;
 int FUNC_26 (int ,int ) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_27 () ;
 scalar_t__ VAR_58 ;
 int VAR_59 ;
 char* VAR_60 ;
 char* VAR_61 ;

int FUNC_28( int VAR_62, char ** VAR_63 )
{
    hb_handle_t * VAR_64;

    FUNC_13();
    FUNC_16();
    FUNC_17();


    VAR_64 = FUNC_14(4);

    FUNC_27();


    FUNC_7(&VAR_62, &VAR_63);


    if( FUNC_2( VAR_62, VAR_63 ) ||
        FUNC_0( VAR_62, VAR_63 ) )
    {
        FUNC_15(VAR_64, VAR_22);
        goto cleanup;
    }

    FUNC_15(VAR_64, VAR_22);


    FUNC_20(&VAR_34);

    FUNC_10( VAR_27 );


    FUNC_5( VAR_53, "%s - %s - %s\n",
             VAR_2, VAR_1, VAR_3 );


    FUNC_5( VAR_53, "%d CPU%s detected\n", FUNC_11(),
             FUNC_11() > 1 ? "s" : "" );


    FUNC_26( VAR_4, VAR_5 );

    if (VAR_51 != ((void*)0))
    {
        FUNC_23(VAR_64);
        FUNC_4(VAR_64, VAR_51);
    }
    else
    {



        hb_dict_t *VAR_65 = FUNC_3(VAR_49);
        if (VAR_65 == ((void*)0))
        {


            VAR_26 = VAR_0;
            goto cleanup;
        }

        if (VAR_48 != ((void*)0))
        {
            FUNC_9(VAR_65, "PresetName",
                        FUNC_25(VAR_48));
            if (VAR_46 != ((void*)0))
            {
                FUNC_9(VAR_65, "PresetDescription",
                            FUNC_25(VAR_46));
            }
            if (VAR_47 != ((void*)0))
            {
                FUNC_19(VAR_65, VAR_47);
            }
            else
            {
                char *VAR_66;
                VAR_66 = FUNC_18(VAR_65);
                FUNC_5(VAR_54, "%s\n", VAR_66);
            }


            if (VAR_36 == ((void*)0) ||
                (!VAR_59 && VAR_58 != 0 && VAR_45 == ((void*)0)))
            {
                FUNC_24(&VAR_65);
                goto cleanup;
            }
        }


        FUNC_5( VAR_53, "Opening %s...\n", VAR_36 );

        if (VAR_39) {




            VAR_58 = 0;
        }

        FUNC_23(VAR_64);

        FUNC_21(VAR_64, VAR_36, VAR_58, VAR_50, VAR_55,
                VAR_40 * 90000LL);

        FUNC_1(VAR_64, VAR_65);
        FUNC_24(&VAR_65);
    }

cleanup:

    FUNC_8(&VAR_64);
    FUNC_12();
    FUNC_22(VAR_14);
    FUNC_22(VAR_6);
    FUNC_22(VAR_9);
    FUNC_22(VAR_11);
    FUNC_22(VAR_15);
    FUNC_22(VAR_8);
    FUNC_22(VAR_12);
    FUNC_22(VAR_13);
    FUNC_22(VAR_17);
    FUNC_22(VAR_16);
    FUNC_22(VAR_28);
    FUNC_22(VAR_41);
    FUNC_22(VAR_56);
    FUNC_22(VAR_57);
    FUNC_6(VAR_7);
    FUNC_6(VAR_42);
    FUNC_6(VAR_33);
    FUNC_6(VAR_36);
    FUNC_6(VAR_45);
    FUNC_6(VAR_49);
    FUNC_6(VAR_30);
    FUNC_6(VAR_32);
    FUNC_6(VAR_10);
    FUNC_6(VAR_31);
    FUNC_6(VAR_29);
    FUNC_6(VAR_52);
    FUNC_6(VAR_20);
    FUNC_6(VAR_21);
    FUNC_6(VAR_25);
    FUNC_6(VAR_24);
    FUNC_6(VAR_23);
    FUNC_6(VAR_35);
    FUNC_6(VAR_43);
    FUNC_6(VAR_44);
    FUNC_6(VAR_18);
    FUNC_6(VAR_19);
    FUNC_6(VAR_60);
    FUNC_6(VAR_61);
    FUNC_6(VAR_37);
    FUNC_6(VAR_38);
    FUNC_6(VAR_48);
    FUNC_6(VAR_46);
    FUNC_6(VAR_47);



    FUNC_5(VAR_54, "\n");
    FUNC_5(VAR_53, "HandBrake has exited.\n");

    return VAR_26;
}
