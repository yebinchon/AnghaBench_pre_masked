
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_3__ {int tag; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(MOVTrack* VAR_0, AVIOContext *VAR_1, uint8_t* VAR_2)
{
    int64_t VAR_3 = FUNC_0(VAR_1);
    FUNC_1(VAR_1, 0);
    FUNC_3(VAR_1, "sinf");


    FUNC_1(VAR_1, 12);
    FUNC_3(VAR_1, "frma");
    FUNC_2(VAR_1, VAR_0->tag);


    FUNC_1(VAR_1, 20);
    FUNC_3(VAR_1, "schm");
    FUNC_1(VAR_1, 0);
    FUNC_3(VAR_1, "cenc");
    FUNC_1(VAR_1, 0x10000);


    FUNC_4(VAR_1, VAR_2);

    return FUNC_5(VAR_1, VAR_3);
}
