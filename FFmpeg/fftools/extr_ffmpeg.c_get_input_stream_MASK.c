
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t source_index; } ;
typedef TYPE_1__ OutputStream ;
typedef int InputStream ;


 int ** VAR_0 ;

__attribute__((used)) static InputStream *FUNC_0(OutputStream *VAR_1)
{
    if (VAR_1->source_index >= 0)
        return VAR_0[VAR_1->source_index];
    return ((void*)0);
}
