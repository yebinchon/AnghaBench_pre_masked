
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
typedef int buf ;
struct TYPE_6__ {int (* io_open ) (TYPE_1__*,int **,char const*,int ,int *) ;} ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (TYPE_1__*,int **,char const*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int **,char const*,int ,int *) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_3, const char* VAR_4, const char *VAR_5, int64_t VAR_6)
{
    AVIOContext *VAR_7, *VAR_8;
    int VAR_9 = 0;
    if ((VAR_9 = VAR_3->io_open(VAR_3, &VAR_7, VAR_4, VAR_0, ((void*)0))) < 0)
        return VAR_9;
    if ((VAR_9 = VAR_3->io_open(VAR_3, &VAR_8, VAR_5, VAR_1, ((void*)0))) < 0) {
        FUNC_5(VAR_3, &VAR_7);
        return VAR_9;
    }
    while (VAR_6 > 0) {
        uint8_t VAR_10[8192];
        int VAR_11 = FUNC_1(VAR_6, sizeof(VAR_10));
        VAR_11 = FUNC_3(VAR_7, VAR_10, VAR_11);
        if (VAR_11 <= 0) {
            VAR_9 = FUNC_0(VAR_2);
            break;
        }
        FUNC_4(VAR_8, VAR_10, VAR_11);
        VAR_6 -= VAR_11;
    }
    FUNC_2(VAR_8);
    FUNC_5(VAR_3, &VAR_8);
    FUNC_5(VAR_3, &VAR_7);
    return VAR_9;
}
