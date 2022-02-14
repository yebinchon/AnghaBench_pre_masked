
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_himem_rangehandle_t ;
typedef int esp_himem_handle_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int *,int,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int ,int,int ,void**) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int,int *,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static bool FUNC_11(int VAR_1, int VAR_2)
{
    esp_himem_handle_t VAR_3;
    esp_himem_rangehandle_t VAR_4;
    bool VAR_5 = 1;


    FUNC_0(FUNC_2(VAR_1, &VAR_3));

    FUNC_0(FUNC_3(VAR_0, &VAR_4));
    for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6 += VAR_0) {
        uint32_t *VAR_7 = ((void*)0);

        FUNC_0(FUNC_6(VAR_3, VAR_4, VAR_6, 0, VAR_0, 0, (void**)&VAR_7));
        FUNC_8(VAR_6 ^ VAR_2, VAR_7, VAR_0);
        FUNC_0(FUNC_7(VAR_4, VAR_7, VAR_0));
    }
    FUNC_10(5);
    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8 += VAR_0) {
        uint32_t *VAR_9;

        FUNC_0(FUNC_6(VAR_3, VAR_4, VAR_8, 0, VAR_0, 0, (void**)&VAR_9));
        if (!FUNC_1(VAR_8 ^ VAR_2, VAR_9, VAR_0, VAR_8)) {
            FUNC_9("Error in block %d\n", VAR_8 / VAR_0);
            VAR_5 = 0;
        }
        FUNC_0(FUNC_7(VAR_4, VAR_9, VAR_0));
        if (!VAR_5) break;
    }

    FUNC_0(FUNC_4(VAR_3));
    FUNC_0(FUNC_5(VAR_4));
    return VAR_5;
}
