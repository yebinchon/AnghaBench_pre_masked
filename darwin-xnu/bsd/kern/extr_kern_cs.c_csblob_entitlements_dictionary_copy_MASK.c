
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_blob {void* csb_entitlements; } ;


 int FUNC_0 (void*) ;

void *
FUNC_1(struct cs_blob *VAR_0)
{
    if (!VAR_0->csb_entitlements) return ((void*)0);
    FUNC_0(VAR_0->csb_entitlements);
    return VAR_0->csb_entitlements;
}
