
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_5__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {int ns; int ofs; int str; void* minor; void* major; } ;
typedef TYPE_2__ cistpl_vers_1_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void**,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(tuple_t *VAR_2, cistpl_vers_1_t *VAR_3)
{
    u_char *VAR_4, *VAR_5;

    VAR_4 = (u_char *)VAR_2->TupleData;
    VAR_5 = VAR_4 + VAR_2->TupleDataLen;

    VAR_3->major = *VAR_4; VAR_4++;
    VAR_3->minor = *VAR_4; VAR_4++;
    if (VAR_4 >= VAR_5)
     return -VAR_1;

    return FUNC_0(VAR_4, VAR_5, VAR_0,
    VAR_3->str, VAR_3->ofs, &VAR_3->ns);
}
