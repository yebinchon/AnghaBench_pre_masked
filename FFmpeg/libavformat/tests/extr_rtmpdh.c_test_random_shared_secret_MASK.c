
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sharedkey2 ;
typedef int sharedkey1 ;
typedef int pubkey2 ;
typedef int pubkey1 ;
typedef int FF_DH ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(void)
{
    FF_DH *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    int VAR_4;
    uint8_t VAR_5[128], VAR_6[128];
    uint8_t VAR_7[128], VAR_8[128];

    VAR_2 = FUNC_4(1024);
    VAR_3 = FUNC_4(1024);
    if (!VAR_2 || !VAR_3) {
        VAR_4 = FUNC_0(VAR_1);
        goto fail;
    }
    if ((VAR_4 = FUNC_3(VAR_2)) < 0)
        goto fail;
    if ((VAR_4 = FUNC_3(VAR_3)) < 0)
        goto fail;
    if ((VAR_4 = FUNC_5(VAR_2, VAR_5, sizeof(VAR_5))) < 0)
        goto fail;
    if ((VAR_4 = FUNC_5(VAR_3, VAR_6, sizeof(VAR_6))) < 0)
        goto fail;
    if ((VAR_4 = FUNC_1(VAR_2, VAR_6, sizeof(VAR_6),
                                               VAR_7, sizeof(VAR_7))) < 0)
        goto fail;
    if ((VAR_4 = FUNC_1(VAR_3, VAR_5, sizeof(VAR_5),
                                               VAR_8, sizeof(VAR_8))) < 0)
        goto fail;
    if (FUNC_6(VAR_7, VAR_8, sizeof(VAR_7))) {
        FUNC_7("Mismatched generated shared key\n");
        VAR_4 = VAR_0;
    } else {
        FUNC_7("Generated shared key ok\n");
    }
fail:
    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    return VAR_4;
}
