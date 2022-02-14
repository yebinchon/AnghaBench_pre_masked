
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_5__ {int entry; TYPE_1__* cluster; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_2, MOVTrack *VAR_3, uint32_t VAR_4)
{
    int64_t VAR_5, VAR_6;
    int VAR_7, VAR_8 = 0;
    int64_t VAR_9 = FUNC_1(VAR_2);
    FUNC_2(VAR_2, 0);
    FUNC_3(VAR_2, VAR_4 == VAR_0 ? "stss" : "stps");
    FUNC_2(VAR_2, 0);
    VAR_6 = FUNC_1(VAR_2);
    FUNC_2(VAR_2, VAR_3->entry);
    for (VAR_7 = 0; VAR_7 < VAR_3->entry; VAR_7++) {
        if (VAR_3->cluster[VAR_7].flags & VAR_4) {
            FUNC_2(VAR_2, VAR_7 + 1);
            VAR_8++;
        }
    }
    VAR_5 = FUNC_1(VAR_2);
    FUNC_0(VAR_2, VAR_6, VAR_1);
    FUNC_2(VAR_2, VAR_8);
    FUNC_0(VAR_2, VAR_5, VAR_1);
    return FUNC_4(VAR_2, VAR_9);
}
