
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_ESCO_DATA ;
typedef int tBTM_CMPL_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;


 int VAR_5 ;


 int VAR_6 ;







 int VAR_7 ;

 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int *,int,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int,int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int *,int,int,int *) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int,int *) ;
 int FUNC_20 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_21 (UINT16 VAR_8, UINT8 VAR_9, UINT8 *VAR_10,
        void *VAR_11)
{
    BD_ADDR VAR_12;
    UINT16 VAR_13;

    tBTM_ESCO_DATA VAR_14;


    switch (VAR_8) {
    case 138:
    case 139:

        if (VAR_9 != VAR_7) {

            if (VAR_10 != ((void*)0)) {
                VAR_10++;
                FUNC_1 (VAR_13, VAR_10);
                FUNC_11 (VAR_9, VAR_13);
            }
        }



    case 137:
    case 129:
    case 135:
        FUNC_6(VAR_9);
        break;

    default:

        if (VAR_9 != VAR_7) {
            switch (VAR_8) {
            case 136:

                FUNC_7(VAR_9, VAR_0);
                break;

            case 132:

                FUNC_8 (((void*)0), ((void*)0), 0, VAR_9);

                FUNC_16 (((void*)0), ((void*)0), VAR_9);

                break;

            case 134:

                FUNC_9(VAR_9, 0, ((void*)0));
                break;

            case 128:


                if (VAR_10 != ((void*)0)) {
                    VAR_10++;
                    FUNC_0 (VAR_12, VAR_10);
                    FUNC_2(VAR_9, VAR_12, VAR_2);
                } else {
                    FUNC_2(VAR_9, ((void*)0), VAR_2);
                }
                FUNC_20 (((void*)0), VAR_2, VAR_4);
                break;

            case 140:

                if (VAR_10 != ((void*)0)) {
                    VAR_10++;
                    FUNC_0 (VAR_12, VAR_10);

                    FUNC_14 (VAR_12, VAR_6, VAR_9, 0);

                    FUNC_19 (VAR_9, VAR_6, VAR_12);
                }
                break;

            case 133:
                if (VAR_10 != ((void*)0)) {
                    VAR_10++;
                    FUNC_1 (VAR_13, VAR_10);
                } else {
                    VAR_13 = VAR_6;
                }

                FUNC_10(VAR_9, VAR_13);
                break;

            case 143:


                FUNC_13 (VAR_1, VAR_9);

                break;

            case 130:


                FUNC_15 (VAR_1, VAR_9, VAR_3);

                break;


            case 142:
                FUNC_3(VAR_9);
                break;
            case 141:
                if (VAR_10 != ((void*)0)){
                    VAR_10++;
                    FUNC_1 (VAR_13, VAR_10);
                    FUNC_18(VAR_9, VAR_13);
                }
                break;



            case 131:

                if (VAR_10 != ((void*)0)) {
                    VAR_10++;
                    FUNC_1 (VAR_13, VAR_10);


                    if (FUNC_5(VAR_13)) {
                        FUNC_4 (VAR_9, VAR_13, 0, 0, 0, 0);
                    } else {
                        FUNC_12 (VAR_9, ((void*)0), VAR_13, &VAR_14);
                    }
                }
                break;
            default:
                if ((VAR_8 & VAR_5) == VAR_5) {
                    FUNC_17 (&VAR_9, VAR_8, 1, (tBTM_CMPL_CB *)VAR_11);
                }
                break;
            }

        } else {
            if ((VAR_8 & VAR_5) == VAR_5) {
                FUNC_17 (&VAR_9, VAR_8, 1, (tBTM_CMPL_CB *)VAR_11);
            }
        }
    }
}
