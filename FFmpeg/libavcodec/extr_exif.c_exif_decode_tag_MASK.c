
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum TiffTypes { ____Placeholder_TiffTypes } TiffTypes ;
typedef int GetByteContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,unsigned int,int,char*,int *,int *,int,int **) ;
 char* FUNC_6 (unsigned int) ;
 int FUNC_7 (void*,int *,int,int,int **) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int *,int,unsigned int*,int*,unsigned int*,int*) ;
 int FUNC_10 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_11(void *VAR_2, GetByteContext *VAR_3, int VAR_4,
                           int VAR_5, AVDictionary **VAR_6)
{
    int VAR_7, VAR_8;
    unsigned VAR_9, VAR_10;
    enum TiffTypes VAR_11;

    if (VAR_5 > 2) {
        return 0;
    }

    FUNC_9(VAR_3, VAR_4, &VAR_9, &VAR_11, &VAR_10, &VAR_8);

    if (!FUNC_4(VAR_3)) {
        FUNC_3(VAR_3, VAR_8, VAR_1);
        return 0;
    }



    VAR_7 = FUNC_8(VAR_9);
    if (VAR_7) {
        VAR_7 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5 + 1, VAR_6);
    } else {
        const char *VAR_12 = FUNC_6(VAR_9);
        char *VAR_13 = (char*) VAR_12;

        if (!VAR_13) {
            VAR_13 = FUNC_2(7);
            if (!VAR_13) {
                return FUNC_0(VAR_0);
            }
            FUNC_10(VAR_13, 7, "0x%04X", VAR_9);
        }

        VAR_7 = FUNC_5(VAR_2, VAR_10, VAR_11, VAR_13, ((void*)0),
                                VAR_3, VAR_4, VAR_6);

        if (!VAR_12) {
            FUNC_1(&VAR_13);
        }
    }

    FUNC_3(VAR_3, VAR_8, VAR_1);

    return VAR_7;
}
