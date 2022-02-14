
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_ctl {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct crypt_ctl* VAR_1 ;

__attribute__((used)) static inline struct crypt_ctl *FUNC_0(dma_addr_t VAR_2)
{
 return VAR_1 + (VAR_2 - VAR_0) / sizeof(struct crypt_ctl);
}
