
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* st; } ;
struct TYPE_4__ {int codecpar; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVIOContext *VAR_2, MOVTrack *VAR_3)
{
    int VAR_4;
    int64_t VAR_5 = FUNC_0(VAR_2);
    FUNC_1(VAR_2, 0);
    FUNC_3(VAR_2, "wfex");
    if ((VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3->st->codecpar, VAR_0)) < 0)
        return VAR_4;
    return FUNC_4(VAR_2, VAR_5);
}
