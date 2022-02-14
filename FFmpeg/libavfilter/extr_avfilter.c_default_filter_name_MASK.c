
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* name; TYPE_1__* filter; } ;
struct TYPE_3__ {char const* name; } ;
typedef TYPE_2__ AVFilterContext ;



__attribute__((used)) static const char *FUNC_0(void *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0;
    return VAR_1->name ? VAR_1->name : VAR_1->filter->name;
}
