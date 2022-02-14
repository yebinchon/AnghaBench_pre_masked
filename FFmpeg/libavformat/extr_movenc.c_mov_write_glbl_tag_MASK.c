
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vos_len; int vos_data; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    FUNC_0(VAR_0, VAR_1->vos_len + 8);
    FUNC_2(VAR_0, "glbl");
    FUNC_1(VAR_0, VAR_1->vos_data, VAR_1->vos_len);
    return 8 + VAR_1->vos_len;
}
