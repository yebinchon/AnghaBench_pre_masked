
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_3__ {char const* name; } ;



__attribute__((used)) static const char *FUNC_0(void *VAR_0)
{
    URLContext *VAR_1 = (URLContext *)VAR_0;
    if (VAR_1->prot)
        return VAR_1->prot->name;
    else
        return "NULL";
}
