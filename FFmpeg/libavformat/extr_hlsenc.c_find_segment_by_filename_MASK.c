
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int filename; } ;
typedef TYPE_1__ HLSSegment ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static HLSSegment *FUNC_1(HLSSegment *VAR_0, const char *VAR_1)
{
    while (VAR_0) {
        if (!FUNC_0(VAR_0->filename,VAR_1))
            return VAR_0;
        VAR_0 = VAR_0->next;
    }
    return (HLSSegment *) ((void*)0);
}
