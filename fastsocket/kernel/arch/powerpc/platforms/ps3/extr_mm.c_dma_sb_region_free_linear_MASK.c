
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps3_dma_region {unsigned long offset; unsigned long len; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {unsigned long size; unsigned long base; } ;
struct TYPE_4__ {unsigned long base; } ;
struct TYPE_6__ {TYPE_2__ rm; TYPE_1__ r1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ps3_dma_region*,unsigned long) ;
 int FUNC_2 (struct ps3_dma_region*) ;
 int FUNC_3 (struct ps3_dma_region*,int ,unsigned long) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct ps3_dma_region *VAR_1)
{
 int VAR_2;
 dma_addr_t VAR_3;
 unsigned long VAR_4, VAR_5;

 if (VAR_1->offset < VAR_0.rm.size) {

  VAR_5 = VAR_0.rm.base + VAR_1->offset;
  VAR_4 = VAR_0.rm.size - VAR_1->offset;
  if (VAR_4 > VAR_1->len)
   VAR_4 = VAR_1->len;
  VAR_3 = FUNC_1(VAR_1, VAR_5);
  VAR_2 = FUNC_3(VAR_1, VAR_3, VAR_4);
  FUNC_0(VAR_2);
 }

 if (VAR_1->offset + VAR_1->len > VAR_0.rm.size) {

  VAR_5 = VAR_0.r1.base;
  VAR_4 = VAR_1->len;
  if (VAR_1->offset >= VAR_0.rm.size)
   VAR_5 += VAR_1->offset - VAR_0.rm.size;
  else
   VAR_4 -= VAR_0.rm.size - VAR_1->offset;
  VAR_3 = FUNC_1(VAR_1, VAR_5);
  VAR_2 = FUNC_3(VAR_1, VAR_3, VAR_4);
  FUNC_0(VAR_2);
 }

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_2);

 return VAR_2;
}
