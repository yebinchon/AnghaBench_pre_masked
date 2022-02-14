
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdrbg_nisthmac_state {int dummy; } ;
struct ccdrbg_nisthmac_custom {int dummy; } ;
struct ccdrbg_info {int size; struct ccdrbg_nisthmac_custom const* custom; int done; int reseed; int generate; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct ccdrbg_info *VAR_4, const struct ccdrbg_nisthmac_custom *VAR_5)
{
    VAR_4->size = sizeof(struct ccdrbg_nisthmac_state) + sizeof(struct ccdrbg_nisthmac_custom);
    VAR_4->init = VAR_2;
    VAR_4->generate = VAR_1;
    VAR_4->reseed = VAR_3;
    VAR_4->done = VAR_0;
    VAR_4->custom = VAR_5;
}
