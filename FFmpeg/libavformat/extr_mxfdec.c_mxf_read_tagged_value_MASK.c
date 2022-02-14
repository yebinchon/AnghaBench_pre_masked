
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ MXFTaggedValue ;
typedef int AVIOContext ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int *,int,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFTaggedValue *VAR_6 = VAR_0;
    switch (VAR_2){
    case 0x5001:
        return FUNC_1(VAR_1, VAR_3, &VAR_6->name);
    case 0x5003:
        return FUNC_0(VAR_6, VAR_1, VAR_3);
    }
    return 0;
}
