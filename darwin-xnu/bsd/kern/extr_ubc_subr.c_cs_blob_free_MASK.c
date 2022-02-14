
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_blob {int * csb_entitlements; scalar_t__ csb_mem_kaddr; int csb_mem_size; } ;


 int FUNC_0 (struct cs_blob* const,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(
    struct cs_blob * const VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        if (VAR_0->csb_mem_kaddr) {
            FUNC_2(VAR_0->csb_mem_kaddr, VAR_0->csb_mem_size);
            VAR_0->csb_mem_kaddr = 0;
        }
        if (VAR_0->csb_entitlements != ((void*)0)) {
            FUNC_1(VAR_0->csb_entitlements);
            VAR_0->csb_entitlements = ((void*)0);
        }
        FUNC_0(VAR_0, sizeof (*VAR_0));
    }
}
