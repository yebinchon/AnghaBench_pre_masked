
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {scalar_t__ tag; TYPE_1__* par; } ;
struct TYPE_5__ {scalar_t__ codec_tag; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int64_t VAR_2 = FUNC_1(VAR_0);
    FUNC_3(VAR_0, 0);
    FUNC_4(VAR_0, "gmhd");
    FUNC_3(VAR_0, 0x18);
    FUNC_4(VAR_0, "gmin");
    FUNC_3(VAR_0, 0);
    FUNC_2(VAR_0, 0x40);
    FUNC_2(VAR_0, 0x8000);
    FUNC_2(VAR_0, 0x8000);
    FUNC_2(VAR_0, 0x8000);
    FUNC_2(VAR_0, 0);
    FUNC_2(VAR_0, 0);







    if (VAR_1->tag != FUNC_0('c','6','0','8')) {
    FUNC_3(VAR_0, 0x2C);
    FUNC_4(VAR_0, "text");
    FUNC_2(VAR_0, 0x01);
    FUNC_3(VAR_0, 0x00);
    FUNC_3(VAR_0, 0x00);
    FUNC_3(VAR_0, 0x00);
    FUNC_3(VAR_0, 0x01);
    FUNC_3(VAR_0, 0x00);
    FUNC_3(VAR_0, 0x00);
    FUNC_3(VAR_0, 0x00);
    FUNC_3(VAR_0, 0x00004000);
    FUNC_2(VAR_0, 0x0000);
    }

    if (VAR_1->par->codec_tag == FUNC_0('t','m','c','d')) {
        int64_t VAR_3 = FUNC_1(VAR_0);
        FUNC_3(VAR_0, 0);
        FUNC_4(VAR_0, "tmcd");
        FUNC_5(VAR_0, VAR_1);
        FUNC_6(VAR_0, VAR_3);
    } else if (VAR_1->par->codec_tag == FUNC_0('g','p','m','d')) {
        int64_t VAR_4 = FUNC_1(VAR_0);
        FUNC_3(VAR_0, 0);
        FUNC_4(VAR_0, "gpmd");
        FUNC_3(VAR_0, 0);
        FUNC_6(VAR_0, VAR_4);
    }
    return FUNC_6(VAR_0, VAR_2);
}
