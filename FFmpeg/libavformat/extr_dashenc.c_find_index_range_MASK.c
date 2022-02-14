
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_5__ {int (* io_open ) (TYPE_1__*,int **,char const*,int ,int *) ;} ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (TYPE_1__*,int **,char const*,int ,int *) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_2, const char *VAR_3,
                             int64_t VAR_4, int *VAR_5)
{
    uint8_t VAR_6[8];
    AVIOContext *VAR_7;
    int VAR_8;

    VAR_8 = VAR_2->io_open(VAR_2, &VAR_7, VAR_3, VAR_0, ((void*)0));
    if (VAR_8 < 0)
        return;
    if (FUNC_4(VAR_7, VAR_4, VAR_1) != VAR_4) {
        FUNC_5(VAR_2, &VAR_7);
        return;
    }
    VAR_8 = FUNC_3(VAR_7, VAR_6, 8);
    FUNC_5(VAR_2, &VAR_7);
    if (VAR_8 < 8)
        return;
    if (FUNC_1(&VAR_6[4]) != FUNC_2('s', 'i', 'd', 'x'))
        return;
    *VAR_5 = FUNC_0(&VAR_6[0]);
}
