
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {unsigned int nstids; TYPE_1__* stid_tab; scalar_t__ stid_base; } ;
struct TYPE_2__ {void* data; } ;



__attribute__((used)) static inline void *FUNC_0(const struct tid_info *VAR_0, unsigned int VAR_1)
{
 VAR_1 -= VAR_0->stid_base;
 return VAR_1 < VAR_0->nstids ? VAR_0->stid_tab[VAR_1].data : ((void*)0);
}
