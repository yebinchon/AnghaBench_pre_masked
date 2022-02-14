
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {long long min; long long max; } ;
struct TYPE_10__ {scalar_t__ type; int offset; TYPE_1__ range; scalar_t__ str; } ;
struct TYPE_9__ {scalar_t__ codec_id; } ;
struct TYPE_8__ {TYPE_3__* codecpar; } ;
typedef int PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 int FUNC_1 (int *,int ,char*,char const*,...) ;
 int FUNC_2 (char const*,scalar_t__) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_3__*,char const*) ;
 int FUNC_5 (char const*,char*) ;
 long long FUNC_6 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_7,
                      AVStream *VAR_8, PayloadContext *VAR_9,
                      const char *VAR_10, const char *VAR_11)
{
    AVCodecParameters *VAR_12 = VAR_8->codecpar;
    int VAR_13, VAR_14;

    if (!FUNC_5(VAR_10, "config")) {
        VAR_13 = FUNC_4(VAR_12, VAR_11);

        if (VAR_13 < 0)
            return VAR_13;
    }

    if (VAR_12->codec_id == VAR_3) {

        for (VAR_14 = 0; VAR_6[VAR_14].str; ++VAR_14) {
            if (!FUNC_2(VAR_10, VAR_6[VAR_14].str)) {
                if (VAR_6[VAR_14].type == VAR_0) {
                    char *VAR_15 = ((void*)0);
                    long long int VAR_16 = FUNC_6(VAR_11, &VAR_15, 10);
                    if (VAR_15 == VAR_11 || VAR_15[0] != '\0') {
                        FUNC_1(VAR_7, VAR_4,
                               "The %s field value is not a valid number: %s\n",
                               VAR_10, VAR_11);
                        return VAR_2;
                    }
                    if (VAR_16 < VAR_6[VAR_14].range.min ||
                        VAR_16 > VAR_6[VAR_14].range.max) {
                        FUNC_1(VAR_7, VAR_4,
                            "fmtp field %s should be in range [%d,%d] (provided value: %lld)",
                            VAR_10, VAR_6[VAR_14].range.min, VAR_6[VAR_14].range.max, VAR_16);
                        return VAR_2;
                    }

                    *(int *)((char *)VAR_9+
                        VAR_6[VAR_14].offset) = (int) VAR_16;
                } else if (VAR_6[VAR_14].type == VAR_1) {
                    char *VAR_17 = FUNC_3(VAR_11);
                    if (!VAR_17)
                        return FUNC_0(VAR_5);
                    *(char **)((char *)VAR_9+
                        VAR_6[VAR_14].offset) = VAR_17;
                }
            }
        }
    }
    return 0;
}
