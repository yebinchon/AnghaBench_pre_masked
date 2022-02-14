
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version_id; } ;
typedef int CELTMode ;
typedef TYPE_1__ CELTHeader ;


 int FUNC_0 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static int FUNC_1(CELTMode *VAR_0)
{
    CELTHeader VAR_1 = { .version_id = 0 };
    FUNC_0(&VAR_1, VAR_0, 960, 2);
    return VAR_1.version_id;
}
