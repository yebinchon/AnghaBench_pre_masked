
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t lf; unsigned int dg_size; unsigned int dgl; void* ether_type; } ;
struct TYPE_4__ {size_t lf; void* ether_type; } ;
union eth1394_hdr {TYPE_1__ ff; TYPE_2__ uf; } ;
typedef unsigned int u16 ;
typedef void* __be16 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_3,
            __be16 VAR_4,
            union eth1394_hdr *VAR_5,
            u16 VAR_6, u16 VAR_7)
{
 unsigned int VAR_8 =
    VAR_3 - VAR_2[VAR_1];


 if (VAR_6 <= VAR_8) {
  VAR_5->uf.lf = VAR_1;
  VAR_5->uf.ether_type = VAR_4;
 } else {
  VAR_5->ff.lf = VAR_0;
  VAR_5->ff.ether_type = VAR_4;
  VAR_5->ff.dg_size = VAR_6 - 1;
  VAR_5->ff.dgl = VAR_7;
  VAR_8 = VAR_3 - VAR_2[VAR_0];
 }
 return FUNC_0(VAR_6, VAR_8);
}
