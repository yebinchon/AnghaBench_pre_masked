
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char const*,int ,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static uint32_t FUNC_2(AVCodecContext *VAR_1, GetBitContext *VAR_2, uint32_t VAR_3, const char *VAR_4){
    uint32_t VAR_5= FUNC_1(VAR_2, 32);
    if(VAR_5 >= VAR_3){
        FUNC_0(VAR_1, VAR_0, VAR_4, VAR_5, VAR_3);
        return 0;
    }
    return VAR_5;
}
