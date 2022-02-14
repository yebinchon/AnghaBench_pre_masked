
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preset; int filter_id; } ;
typedef TYPE_1__ filter_opts_t ;
typedef int GhbValue ;
typedef int GhbType ;


 int * FUNC_0 (char const*,int const*,int ,int ,int ) ;

__attribute__((used)) static GhbValue *
FUNC_1(const char *VAR_0, const void *VAR_1,
               const GhbValue *VAR_2, GhbType VAR_3)
{
    filter_opts_t *VAR_4 = (filter_opts_t*)VAR_1;
    return FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4->filter_id, VAR_4->preset);
}
