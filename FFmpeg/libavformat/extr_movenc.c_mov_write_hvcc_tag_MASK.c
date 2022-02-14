
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {scalar_t__ tag; int vos_len; int vos_data; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int64_t VAR_2 = FUNC_1(VAR_0);

    FUNC_2(VAR_0, 0);
    FUNC_4(VAR_0, "hvcC");
    if (VAR_1->tag == FUNC_0('h','v','c','1'))
        FUNC_3(VAR_0, VAR_1->vos_data, VAR_1->vos_len, 1);
    else
        FUNC_3(VAR_0, VAR_1->vos_data, VAR_1->vos_len, 0);
    return FUNC_5(VAR_0, VAR_2);
}
