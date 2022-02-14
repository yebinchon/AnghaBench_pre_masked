
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_1, MOVTrack *VAR_2)
{
    FUNC_2(VAR_1, 0x11);
    if (VAR_2->mode == VAR_0) FUNC_3(VAR_1, "samr");
    else FUNC_3(VAR_1, "damr");
    FUNC_3(VAR_1, "FFMP");
    FUNC_0(VAR_1, 0);

    FUNC_1(VAR_1, 0x81FF);
    FUNC_0(VAR_1, 0x00);
    FUNC_0(VAR_1, 0x01);
    return 0x11;
}
