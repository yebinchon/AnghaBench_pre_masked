
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef int AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *,char*,char*) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_2, MOVMuxContext *VAR_3,
                                    AVStream *VAR_4)
{
    AVIOContext *VAR_5;
    int VAR_6, VAR_7;
    uint8_t *VAR_8;

    if (!VAR_4)
        return 0;

    VAR_6 = FUNC_2(&VAR_5);
    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_3->mode & (VAR_1|VAR_0))
        FUNC_6(VAR_5, VAR_4, "name", "title");

    if ((VAR_7 = FUNC_1(VAR_5, &VAR_8)) > 0) {
        FUNC_3(VAR_2, VAR_7 + 8);
        FUNC_5(VAR_2, "udta");
        FUNC_4(VAR_2, VAR_8, VAR_7);
    }
    FUNC_0(VAR_8);

    return 0;
}
