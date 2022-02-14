
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int place ;
typedef int key2 ;
typedef float int32_t ;
typedef int buf ;
struct TYPE_5__ {int metadata; int event_flags; } ;
struct TYPE_4__ {TYPE_3__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,char*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (char*,int,char*,...) ;
 scalar_t__ FUNC_3 (int *,unsigned int,char*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int,char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(MOVContext *VAR_3, AVIOContext *VAR_4, unsigned VAR_5)
{
    char VAR_6[4] = { 0 };
    char VAR_7[200], VAR_8[100];
    uint16_t VAR_9 = 0;
    double VAR_10, VAR_11, VAR_12;
    const char *VAR_13 = "location";

    if (VAR_5 < 4 + 2 + 1 + 1 + 4 + 4 + 4) {
        FUNC_1(VAR_3->fc, VAR_2, "loci too short\n");
        return VAR_0;
    }

    FUNC_6(VAR_4, 4);
    VAR_9 = FUNC_4(VAR_4);
    FUNC_7(VAR_9, VAR_6);
    VAR_5 -= 6;

    VAR_5 -= FUNC_3(VAR_4, VAR_5, VAR_8, sizeof(VAR_8));
    if (VAR_5 < 1) {
        FUNC_1(VAR_3->fc, VAR_2, "place name too long\n");
        return VAR_0;
    }
    FUNC_6(VAR_4, 1);
    VAR_5 -= 1;

    if (VAR_5 < 12) {
        FUNC_1(VAR_3->fc, VAR_2,
               "loci too short (%u bytes left, need at least %d)\n", VAR_5, 12);
        return VAR_0;
    }
    VAR_10 = ((int32_t) FUNC_5(VAR_4)) / (float) (1 << 16);
    VAR_11 = ((int32_t) FUNC_5(VAR_4)) / (float) (1 << 16);
    VAR_12 = ((int32_t) FUNC_5(VAR_4)) / (float) (1 << 16);


    FUNC_8(VAR_7, sizeof(VAR_7), "%+08.4f%+09.4f", VAR_11, VAR_10);
    if (VAR_12)
        FUNC_2(VAR_7, sizeof(VAR_7), "%+f", VAR_12);
    FUNC_2(VAR_7, sizeof(VAR_7), "/%s", VAR_8);

    if (*VAR_6 && FUNC_9(VAR_6, "und")) {
        char VAR_14[16];
        FUNC_8(VAR_14, sizeof(VAR_14), "%s-%s", VAR_13, VAR_6);
        FUNC_0(&VAR_3->fc->metadata, VAR_14, VAR_7, 0);
    }
    VAR_3->fc->event_flags |= VAR_1;
    return FUNC_0(&VAR_3->fc->metadata, VAR_13, VAR_7, 0);
}
