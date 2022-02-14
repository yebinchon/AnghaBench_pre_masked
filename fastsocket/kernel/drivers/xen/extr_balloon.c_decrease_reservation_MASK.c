
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_memory_reservation {unsigned long nr_extents; int extent_start; int domid; int extent_order; int address_bits; } ;
struct page {int dummy; } ;
struct TYPE_2__ {unsigned long current_pages; } ;


 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct xen_memory_reservation*) ;
 int FUNC_3 (unsigned long,int ,int ) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_4 (struct page*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long,int ) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 struct page* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_10 () ;
 int * VAR_6 ;
 int FUNC_11 () ;
 unsigned long FUNC_12 (int ) ;
 unsigned long FUNC_13 (struct page*) ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (unsigned long) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(unsigned long VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct page *VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 struct xen_memory_reservation VAR_13 = {
  .address_bits = 0,
  .extent_order = 0,
  .domid = VAR_0
 };

 if (VAR_7 > FUNC_0(VAR_6))
  VAR_7 = FUNC_0(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if ((VAR_10 = FUNC_8(VAR_1)) == ((void*)0)) {
   VAR_7 = VAR_9;
   VAR_11 = 1;
   break;
  }

  VAR_8 = FUNC_13(VAR_10);
  VAR_6[VAR_9] = FUNC_14(VAR_8);

  FUNC_16(VAR_10);

  if (!FUNC_4(VAR_10)) {
   VAR_12 = FUNC_3(
    (unsigned long)FUNC_7(VAR_8 << VAR_3),
    FUNC_5(0), 0);
   FUNC_1(VAR_12);
                }

 }


 FUNC_11();
 FUNC_10();


 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_12(VAR_6[VAR_9]);
  FUNC_6(VAR_8, VAR_2);
  FUNC_9(FUNC_15(VAR_8));
 }

 FUNC_17(VAR_13.extent_start, VAR_6);
 VAR_13.nr_extents = VAR_7;
 VAR_12 = FUNC_2(VAR_4, &VAR_13);
 FUNC_1(VAR_12 != VAR_7);

 VAR_5.current_pages -= VAR_7;

 return VAR_11;
}
