
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int gb; } ;
struct TYPE_6__ {int id; int len; int data; } ;
typedef TYPE_1__ LBRChunk ;
typedef TYPE_2__ DCALbrDecoder ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(DCALbrDecoder *VAR_0, LBRChunk *VAR_1)
{
    if (!VAR_1->len)
        return 0;

    if (FUNC_0(&VAR_0->gb, VAR_1->data, VAR_1->len) < 0)
        return -1;

    return FUNC_1(VAR_0, VAR_1->id);
}
