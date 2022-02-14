
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int description; int name; } ;
typedef TYPE_1__ pa_source_info ;
typedef int pa_context ;


 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_1(pa_context *VAR_0, const pa_source_info *VAR_1,
                                         int VAR_2, void *VAR_3)
{
    if (!VAR_2)
        FUNC_0(VAR_3, VAR_1->name, VAR_1->description);
}
