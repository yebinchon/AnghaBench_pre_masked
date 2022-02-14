
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iotlb_entry {int mixed; int endian; int elsz; int pgsz; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct iotlb_entry *VAR_1)
{
 u32 VAR_2;

 VAR_2 = VAR_1->mixed << 5;
 VAR_2 |= VAR_1->endian;
 VAR_2 |= VAR_1->elsz >> 3;
 VAR_2 <<= ((VAR_1->pgsz & VAR_0) ? 0 : 6);

 return VAR_2;
}
