
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *,TYPE_1__*,int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(AVIOContext *VAR_1, MOVMuxContext *VAR_2,
                              AVFormatContext *VAR_3)
{
    int VAR_4 = 0;
    int64_t VAR_5 = FUNC_0(VAR_1);
    FUNC_1(VAR_1, 0);
    FUNC_2(VAR_1, "meta");
    FUNC_1(VAR_1, 0);
    if (VAR_2->flags & VAR_0) {
        FUNC_5(VAR_1, VAR_2, VAR_3);
        FUNC_7(VAR_1, VAR_2, VAR_3);
        FUNC_6(VAR_1, VAR_2, VAR_3);
    }
    else {

        FUNC_4(VAR_1, VAR_2, VAR_3);
        FUNC_3(VAR_1, VAR_2, VAR_3);
    }
    VAR_4 = FUNC_8(VAR_1, VAR_5);
    return VAR_4;
}
