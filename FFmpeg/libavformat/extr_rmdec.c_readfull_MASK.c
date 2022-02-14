
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVIOContext *VAR_2, uint8_t *VAR_3, int VAR_4) {
    int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
    if (VAR_5 != VAR_4) {
        if (VAR_5 >= 0) FUNC_2(VAR_3 + VAR_5, 0, VAR_4 - VAR_5);
        else FUNC_2(VAR_3 , 0, VAR_4);
        FUNC_0(VAR_1, VAR_0, "Failed to fully read block\n");
    }
    return VAR_5;
}
