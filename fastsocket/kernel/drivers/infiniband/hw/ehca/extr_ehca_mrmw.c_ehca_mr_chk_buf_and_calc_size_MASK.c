
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ib_phys_buf {int addr; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(struct ib_phys_buf *VAR_3,
      int VAR_4,
      u64 *VAR_5,
      u64 *VAR_6)
{
 struct ib_phys_buf *VAR_7 = VAR_3;
 u64 VAR_8 = 0;
 u32 VAR_9;

 if (VAR_4 == 0) {
  FUNC_0("bad phys buf array len, num_phys_buf=0");
  return -VAR_0;
 }

 if (((u64)VAR_5 & ~VAR_1) != (VAR_7->addr & ~VAR_1)) {
  FUNC_0("iova_start/addr mismatch, iova_start=%p "
        "pbuf->addr=%llx pbuf->size=%llx",
        VAR_5, VAR_7->addr, VAR_7->size);
  return -VAR_0;
 }
 if (((VAR_7->addr + VAR_7->size) % VAR_2) &&
     (VAR_4 > 1)) {
  FUNC_0("addr/size mismatch in 1st buf, pbuf->addr=%llx "
        "pbuf->size=%llx", VAR_7->addr, VAR_7->size);
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if ((VAR_9 > 0) && (VAR_7->addr % VAR_2)) {
   FUNC_0("bad address, i=%x pbuf->addr=%llx "
         "pbuf->size=%llx",
         VAR_9, VAR_7->addr, VAR_7->size);
   return -VAR_0;
  }
  if (((VAR_9 > 0) &&
       (VAR_9 < (VAR_4 - 1)) &&
       (VAR_7->size % VAR_2)) || (VAR_7->size == 0)) {
   FUNC_0("bad size, i=%x pbuf->size=%llx",
         VAR_9, VAR_7->size);
   return -VAR_0;
  }
  VAR_8 += VAR_7->size;
  VAR_7++;
 }

 *VAR_6 = VAR_8;
 return 0;
}
