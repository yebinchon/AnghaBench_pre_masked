
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int pb; } ;
typedef TYPE_1__ MP4DescrParseContext ;


 int FUNC_0 (TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (int *,int *,int*) ;

__attribute__((used)) static int FUNC_2(MP4DescrParseContext *VAR_0, int64_t VAR_1, int VAR_2)
{
    while (VAR_2 > 0) {
        int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 0);
        if (VAR_3 < 0)
            return VAR_3;
        FUNC_1(&VAR_0->pb, &VAR_1, &VAR_2);
    }
    return 0;
}
