
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int height; int width; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3,
                       const uint8_t *VAR_4, int VAR_5,
                       GetByteContext *VAR_6,
                       int *VAR_7, int *VAR_8)
{
    FUNC_4(VAR_6, VAR_4, VAR_5);
    *VAR_7 = FUNC_3(VAR_6);
    *VAR_8 = FUNC_0(*VAR_7 * 4 + 2, 16);
    if (VAR_5 < *VAR_8) {
        FUNC_1(VAR_3, VAR_2, "no slice data\n");
        return VAR_0;
    }

    if (!*VAR_7) {
        FUNC_2(VAR_3, "%d slices for %dx%d", *VAR_7,
                              VAR_3->width, VAR_3->height);
        return VAR_1;
    }

    return 0;
}
