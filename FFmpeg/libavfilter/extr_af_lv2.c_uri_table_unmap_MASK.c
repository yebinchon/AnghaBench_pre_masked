
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_uris; char const** uris; } ;
typedef TYPE_1__ URITable ;
typedef scalar_t__ LV2_URID_Map_Handle ;
typedef int LV2_URID ;



__attribute__((used)) static const char *FUNC_0(LV2_URID_Map_Handle VAR_0, LV2_URID VAR_1)
{
    URITable *VAR_2 = (URITable*)VAR_0;

    if (VAR_1 > 0 && VAR_1 <= VAR_2->n_uris) {
        return VAR_2->uris[VAR_1 - 1];
    }

    return ((void*)0);
}
