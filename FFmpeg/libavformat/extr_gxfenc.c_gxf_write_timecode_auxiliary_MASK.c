
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ff; int ss; int mm; int hh; int drop; int color; } ;
struct TYPE_5__ {TYPE_1__ tc; } ;
typedef TYPE_2__ GXFContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, GXFContext *VAR_2)
{
    uint32_t VAR_3 = FUNC_0(VAR_2->tc.color, VAR_2->tc.drop,
                                     VAR_2->tc.hh, VAR_2->tc.mm,
                                     VAR_2->tc.ss, VAR_2->tc.ff);

    FUNC_1(VAR_1, VAR_0);
    FUNC_1(VAR_1, 8);
    FUNC_2(VAR_1, VAR_3);

    FUNC_2(VAR_1, 0);
    return 8;
}
