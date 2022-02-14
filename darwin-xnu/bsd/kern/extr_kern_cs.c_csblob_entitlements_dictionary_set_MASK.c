
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_blob {int * csb_entitlements; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

void
FUNC_2(struct cs_blob *VAR_0, void * VAR_1)
{
    FUNC_0(VAR_0->csb_entitlements == ((void*)0));
    if (VAR_1) FUNC_1(VAR_1);
    VAR_0->csb_entitlements = VAR_1;
}
