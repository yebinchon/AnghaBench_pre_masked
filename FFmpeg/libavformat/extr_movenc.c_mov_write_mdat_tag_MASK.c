
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int mdat_pos; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, MOVMuxContext *VAR_2)
{
    FUNC_1(VAR_1, 8);
    FUNC_2(VAR_1, VAR_2->mode == VAR_0 ? "wide" : "free");

    VAR_2->mdat_pos = FUNC_0(VAR_1);
    FUNC_1(VAR_1, 0);
    FUNC_2(VAR_1, "mdat");
    return 0;
}
