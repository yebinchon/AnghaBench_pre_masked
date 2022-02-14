
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aouthdr {void* gp_value; void** cprmask; void* gprmask; void* bss_start; void* data_start; void* text_start; void* entry; void* bsize; void* dsize; void* tsize; void* vstamp; void* magic; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct aouthdr *VAR_0)
{
 VAR_0->magic = FUNC_0(VAR_0->magic);
 VAR_0->vstamp = FUNC_0(VAR_0->vstamp);
 VAR_0->tsize = FUNC_1(VAR_0->tsize);
 VAR_0->dsize = FUNC_1(VAR_0->dsize);
 VAR_0->bsize = FUNC_1(VAR_0->bsize);
 VAR_0->entry = FUNC_1(VAR_0->entry);
 VAR_0->text_start = FUNC_1(VAR_0->text_start);
 VAR_0->data_start = FUNC_1(VAR_0->data_start);
 VAR_0->bss_start = FUNC_1(VAR_0->bss_start);
 VAR_0->gprmask = FUNC_1(VAR_0->gprmask);
 VAR_0->cprmask[0] = FUNC_1(VAR_0->cprmask[0]);
 VAR_0->cprmask[1] = FUNC_1(VAR_0->cprmask[1]);
 VAR_0->cprmask[2] = FUNC_1(VAR_0->cprmask[2]);
 VAR_0->cprmask[3] = FUNC_1(VAR_0->cprmask[3]);
 VAR_0->gp_value = FUNC_1(VAR_0->gp_value);
}
