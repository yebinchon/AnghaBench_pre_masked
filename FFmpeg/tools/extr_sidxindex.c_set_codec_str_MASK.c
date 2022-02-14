
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int codec_id; int extradata_size; int* extradata; } ;
typedef TYPE_1__ AVCodecParameters ;




 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (char*,int,char*) ;

__attribute__((used)) static void FUNC_3(AVCodecParameters *VAR_0, char *VAR_1, int VAR_2)
{
    switch (VAR_0->codec_id) {
    case 128:
        FUNC_2(VAR_1, VAR_2, "avc1");
        if (VAR_0->extradata_size >= 4 && VAR_0->extradata[0] == 1) {
            FUNC_1(VAR_1, VAR_2, ".%02x%02x%02x",
                        VAR_0->extradata[1], VAR_0->extradata[2],
                        VAR_0->extradata[3]);
        }
        break;
    case 129:
        FUNC_2(VAR_1, VAR_2, "mp4a.40");
        if (VAR_0->extradata_size >= 2) {
            int VAR_3 = VAR_0->extradata[0] >> 3;
            if (VAR_3 == 31)
                VAR_3 = ((FUNC_0(VAR_0->extradata) >> 5) & 0x3f) + 32;
            FUNC_1(VAR_1, VAR_2, ".%d", VAR_3);
        }
        break;
    }
}
