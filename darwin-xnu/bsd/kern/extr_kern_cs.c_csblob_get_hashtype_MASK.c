
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cs_blob {int * csb_hashtype; } ;


 int FUNC_0 (int *) ;

uint8_t
FUNC_1(struct cs_blob const * const VAR_0)
{
    return VAR_0->csb_hashtype != ((void*)0) ? FUNC_0(VAR_0->csb_hashtype) : 0;
}
