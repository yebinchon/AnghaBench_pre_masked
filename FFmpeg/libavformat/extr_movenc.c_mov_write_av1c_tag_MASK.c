
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int vos_len; int vos_data; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int64_t VAR_2 = FUNC_0(VAR_0);

    FUNC_1(VAR_0, 0);
    FUNC_3(VAR_0, "av1C");
    FUNC_2(VAR_0, VAR_1->vos_data, VAR_1->vos_len);
    return FUNC_4(VAR_0, VAR_2);
}
