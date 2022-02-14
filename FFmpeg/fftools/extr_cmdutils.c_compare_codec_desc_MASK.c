
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int name; } ;
typedef TYPE_1__ AVCodecDescriptor ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
    const AVCodecDescriptor * const *VAR_2 = VAR_0;
    const AVCodecDescriptor * const *VAR_3 = VAR_1;

    return (*VAR_2)->type != (*VAR_3)->type ? FUNC_0((*VAR_2)->type, (*VAR_3)->type) :
           FUNC_1((*VAR_2)->name, (*VAR_3)->name);
}
