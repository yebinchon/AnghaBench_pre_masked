
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_memory_reservation {unsigned long nr_extents; int extent_start; int domid; int extent_order; int address_bits; } ;
struct page {int dummy; } ;
struct TYPE_2__ {long current_pages; } ;


 unsigned long FUNC_0 (void**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 int VAR_0 ;
 long FUNC_3 (int ,struct xen_memory_reservation*) ;
 int FUNC_4 (unsigned long,int ,int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_5 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 struct page* FUNC_8 () ;
 struct page* FUNC_9 (struct page*) ;
 struct page* FUNC_10 () ;
 TYPE_1__ VAR_5 ;
 void** VAR_6 ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (void*,int ) ;
 void* FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (unsigned long) ;
 int FUNC_15 (unsigned long,void*) ;
 int FUNC_16 (int ,void**) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(unsigned long VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct page *VAR_10;
 long VAR_11;
 struct xen_memory_reservation VAR_12 = {
  .address_bits = 0,
  .extent_order = 0,
  .domid = VAR_0
 };

 if (VAR_7 > FUNC_0(VAR_6))
  VAR_7 = FUNC_0(VAR_6);

 VAR_10 = FUNC_8();
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  FUNC_1(VAR_10 == ((void*)0));
  VAR_6[VAR_9] = FUNC_13(VAR_10);
  VAR_10 = FUNC_9(VAR_10);
 }

 FUNC_16(VAR_12.extent_start, VAR_6);
 VAR_12.nr_extents = VAR_7;
 VAR_11 = FUNC_3(VAR_4, &VAR_12);
 if (VAR_11 < 0)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_10 = FUNC_10();
  FUNC_1(VAR_10 == ((void*)0));

  VAR_8 = FUNC_13(VAR_10);
  FUNC_1(!FUNC_17(VAR_3) &&
         FUNC_14(VAR_8));

  FUNC_15(VAR_8, VAR_6[VAR_9]);


  if (!FUNC_5(VAR_10)) {
   int VAR_13;
   VAR_13 = FUNC_4(
    (unsigned long)FUNC_7(VAR_8 << VAR_2),
    FUNC_12(VAR_6[VAR_9], VAR_1),
    0);
   FUNC_1(VAR_13);
  }


  FUNC_2(VAR_10);
  FUNC_11(VAR_10);
  FUNC_6(VAR_10);
 }

 VAR_5.current_pages += VAR_11;

 out:
 return VAR_11 < 0 ? VAR_11 : VAR_11 != VAR_7;
}
