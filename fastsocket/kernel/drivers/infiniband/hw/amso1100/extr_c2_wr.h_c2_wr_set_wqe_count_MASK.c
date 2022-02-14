
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c2wr_hdr {int wqe_count; } ;



__attribute__((used)) static __inline__ void FUNC_0(void *VAR_0, u32 VAR_1)
{
 ((struct c2wr_hdr *) VAR_0)->wqe_count = VAR_1;
}
