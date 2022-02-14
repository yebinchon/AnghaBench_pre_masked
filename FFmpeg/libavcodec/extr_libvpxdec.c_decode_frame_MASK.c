
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpx_codec_ctx_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,int ) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, vpx_codec_ctx_t *VAR_4,
                        uint8_t *VAR_5, uint32_t VAR_6)
{
    if (FUNC_1(VAR_4, VAR_5, VAR_6, ((void*)0), 0) != VAR_2) {
        const char *VAR_7 = FUNC_2(VAR_4);
        const char *VAR_8 = FUNC_3(VAR_4);

        FUNC_0(VAR_3, VAR_1, "Failed to decode frame: %s\n", VAR_7);
        if (VAR_8) {
            FUNC_0(VAR_3, VAR_1, "  Additional information: %s\n",
                   VAR_8);
        }
        return VAR_0;
    }
    return 0;
}
