
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buf ;
struct TYPE_4__ {int vos_len; int * vos_data; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    uint8_t VAR_2[7] = { 0 };
    int VAR_3;

    if ((VAR_3 = FUNC_3(VAR_1, VAR_2)) < 0)
        return VAR_3;

    FUNC_0(VAR_0, VAR_1->vos_len + 8 + sizeof(VAR_2));
    FUNC_2(VAR_0, "dvc1");
    FUNC_1(VAR_0, VAR_2, sizeof(VAR_2));
    FUNC_1(VAR_0, VAR_1->vos_data, VAR_1->vos_len);

    return 0;
}
