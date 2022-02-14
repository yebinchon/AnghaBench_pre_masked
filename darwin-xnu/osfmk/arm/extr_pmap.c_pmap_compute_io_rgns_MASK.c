
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int uint64_t ;
struct TYPE_2__ {int addr; int len; } ;
typedef TYPE_1__ pmap_io_range_t ;
typedef int DTEntry ;


 int FUNC_0 (int ,char*,void**,unsigned int*) ;
 int FUNC_1 (int *,char*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int,int,int*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static vm_size_t
FUNC_5(void)
{
 DTEntry VAR_7;
 pmap_io_range_t *VAR_8;
 uint64_t VAR_9;
 void *VAR_10 = ((void*)0);
        int VAR_11;
 unsigned int VAR_12;

        VAR_11 = FUNC_1(((void*)0), "/defaults", &VAR_7);
        FUNC_2(VAR_11 == VAR_5);

 if (VAR_5 != FUNC_0(VAR_7, "pmap-io-ranges", &VAR_10, &VAR_12))
  return 0;

 VAR_8 = VAR_10;
 for (unsigned int VAR_13 = 0; VAR_13 < (VAR_12 / sizeof(*VAR_8)); ++VAR_13) {
  if (VAR_8[VAR_13].addr & VAR_0)
   FUNC_4("pmap I/O region %u addr 0x%llx is not page-aligned", VAR_13, VAR_8[VAR_13].addr);
  if (VAR_8[VAR_13].len & VAR_0)
   FUNC_4("pmap I/O region %u length 0x%x is not page-aligned", VAR_13, VAR_8[VAR_13].len);
  if (FUNC_3(VAR_8[VAR_13].addr, VAR_8[VAR_13].len, &VAR_9))
   FUNC_4("pmap I/O region %u addr 0x%llx length 0x%x wraps around", VAR_13, VAR_8[VAR_13].addr, VAR_8[VAR_13].len);
  if ((VAR_13 == 0) || (VAR_8[VAR_13].addr < VAR_4))
   VAR_4 = VAR_8[VAR_13].addr;
  if ((VAR_13 == 0) || (VAR_9 > VAR_3))
   VAR_3 = VAR_9;
  ++VAR_6;
 }

 if (VAR_4 & VAR_0)
  FUNC_4("pmap I/O region start is not page-aligned!\n");

 if (VAR_3 & VAR_0)
  FUNC_4("pmap I/O region end is not page-aligned!\n");

 if (((VAR_4 <= VAR_2) && (VAR_3 > VAR_2)) ||
     ((VAR_4 < VAR_1) && (VAR_3 >= VAR_1)) ||
     ((VAR_4 > VAR_2) && (VAR_3 < VAR_1)))
  FUNC_4("pmap I/O region overlaps physical memory!\n");

 return (VAR_6 * sizeof(*VAR_8));
}
