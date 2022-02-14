
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps3_dma_region {unsigned long offset; unsigned long len; unsigned long bus_addr; } ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_4__ {unsigned long size; } ;
struct TYPE_6__ {TYPE_2__ r1; TYPE_1__ rm; } ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct ps3_dma_region *VAR_1,
 unsigned long VAR_2)
{
 if (VAR_2 >= VAR_0.rm.size)
  VAR_2 -= VAR_0.r1.offset;
 FUNC_0(VAR_2 < VAR_1->offset);
 FUNC_0(VAR_2 >= VAR_1->offset + VAR_1->len);
 return VAR_1->bus_addr + VAR_2 - VAR_1->offset;
}
