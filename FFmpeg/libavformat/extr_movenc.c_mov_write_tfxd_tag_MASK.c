
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid ;
typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* cluster; scalar_t__ end_pts; scalar_t__ frag_start; scalar_t__ start_dts; } ;
struct TYPE_4__ {scalar_t__ cts; scalar_t__ dts; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int64_t VAR_2 = FUNC_0(VAR_0);
    static const uint8_t VAR_3[] = {
        0x6d, 0x1d, 0x9b, 0x05, 0x42, 0xd5, 0x44, 0xe6,
        0x80, 0xe2, 0x14, 0x1d, 0xaf, 0xf7, 0x57, 0xb2
    };

    FUNC_3(VAR_0, 0);
    FUNC_6(VAR_0, "uuid");
    FUNC_5(VAR_0, VAR_3, sizeof(VAR_3));
    FUNC_1(VAR_0, 1);
    FUNC_2(VAR_0, 0);
    FUNC_4(VAR_0, VAR_1->start_dts + VAR_1->frag_start +
                  VAR_1->cluster[0].cts);
    FUNC_4(VAR_0, VAR_1->end_pts -
                  (VAR_1->cluster[0].dts + VAR_1->cluster[0].cts));

    return FUNC_7(VAR_0, VAR_2);
}
