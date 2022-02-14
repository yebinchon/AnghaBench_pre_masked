
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int pb; } ;
typedef int ID3v2ExtraMeta ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 int FUNC_3 (TYPE_1__*,int **) ;
 int FUNC_4 (TYPE_1__*,int ,int **,int ) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_2, uint64_t VAR_3)
{
    ID3v2ExtraMeta *VAR_4 = ((void*)0);
    if (FUNC_0(VAR_2->pb, VAR_3, VAR_1) < 0)
        return;

    FUNC_4(VAR_2, VAR_0, &VAR_4, 0);
    if (VAR_4) {
        FUNC_2(VAR_2, &VAR_4);
        FUNC_3(VAR_2, &VAR_4);
    }
    FUNC_1(&VAR_4);
}
