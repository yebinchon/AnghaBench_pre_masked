
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int pb; } ;
typedef TYPE_1__ MP4DescrParseContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,int *,int*) ;

__attribute__((used)) static int FUNC_3(MP4DescrParseContext *VAR_0, int64_t VAR_1, int VAR_2)
{
    int VAR_3;
    if (VAR_2 < 2)
        return 0;
    VAR_3 = FUNC_0(&VAR_0->pb);
    if (!(VAR_3 & 0x0020)) {
        FUNC_2(&VAR_0->pb, &VAR_1, &VAR_2);
        return FUNC_1(VAR_0, VAR_1, VAR_2);
    } else {
        return 0;
    }
}
