
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;
typedef TYPE_1__ section_t ;
typedef int list_node_t ;
typedef int config_section_node_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;

const char *FUNC_2(const config_section_node_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    const list_node_t *VAR_1 = (const list_node_t *)VAR_0;
    const section_t *VAR_2 = (const section_t *)FUNC_1(VAR_1);
    return VAR_2->name;
}
