
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {int ns; int ofs; int str; } ;
typedef TYPE_2__ cistpl_altstr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(tuple_t *VAR_1, cistpl_altstr_t *VAR_2)
{
    u_char *VAR_3, *VAR_4;

    VAR_3 = (u_char *)VAR_1->TupleData;
    VAR_4 = VAR_3 + VAR_1->TupleDataLen;

    return FUNC_0(VAR_3, VAR_4, VAR_0,
    VAR_2->str, VAR_2->ofs, &VAR_2->ns);
}
