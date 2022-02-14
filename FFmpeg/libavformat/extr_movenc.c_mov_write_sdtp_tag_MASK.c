
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_5__ {int entry; TYPE_1__* cluster; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_5, MOVTrack *VAR_6)
{
    int VAR_7;
    uint8_t VAR_8, VAR_9, VAR_10, VAR_11;
    int64_t VAR_12 = FUNC_0(VAR_5);
    FUNC_2(VAR_5, 0);
    FUNC_3(VAR_5, "sdtp");
    FUNC_2(VAR_5, 0);
    for (VAR_7 = 0; VAR_7 < VAR_6->entry; VAR_7++) {
        VAR_9 = VAR_3;
        VAR_8 = VAR_10 = VAR_11 = VAR_2;
        if (VAR_6->cluster[VAR_7].flags & VAR_0) {
            VAR_10 = VAR_1;
        }
        if (VAR_6->cluster[VAR_7].flags & VAR_4) {
            VAR_9 = VAR_1;
        }
        FUNC_1(VAR_5, (VAR_8 << 6) | (VAR_9 << 4) |
                    (VAR_10 << 2) | VAR_11);
    }
    return FUNC_4(VAR_5, VAR_12);
}
