
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uid; int local_tag; } ;
typedef TYPE_1__ MXFLocalTagPair ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(AVIOContext *VAR_0, const MXFLocalTagPair *VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        FUNC_0(VAR_0, VAR_1[VAR_3].local_tag);
        FUNC_1(VAR_0, VAR_1[VAR_3].uid, 16);
    }
}
