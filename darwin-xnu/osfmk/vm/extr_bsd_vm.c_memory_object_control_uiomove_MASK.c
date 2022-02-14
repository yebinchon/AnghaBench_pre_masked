
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int memory_object_offset_t ;
typedef int memory_object_control_t ;
typedef int addr64_t ;
struct TYPE_19__ {scalar_t__ pager; struct TYPE_19__* copy; int internal; } ;
struct TYPE_18__ {scalar_t__ vmp_dirty; scalar_t__ vmp_clustered; scalar_t__ vmp_busy; scalar_t__ vmp_cs_validated; int vmp_cs_tainted; scalar_t__ vmp_laundry; scalar_t__ vmp_cleaning; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int,int ,int ) ;
 int FUNC_11 (int,int,void*) ;
 int VAR_10 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 () ;
 TYPE_1__* FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_1__*,scalar_t__) ;
 int FUNC_19 (scalar_t__) ;

int
FUNC_20(
 memory_object_control_t VAR_11,
 memory_object_offset_t VAR_12,
 void * VAR_13,
 int VAR_14,
 int VAR_15,
 int VAR_16,
 int VAR_17)
{
 vm_object_t VAR_18;
 vm_page_t VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 vm_page_t VAR_26[VAR_1];
 int VAR_27;

 VAR_18 = FUNC_8(VAR_11);
 if (VAR_18 == VAR_8) {
  return (0);
 }
 FUNC_6(!VAR_18->internal);

 FUNC_12(VAR_18);

 if (VAR_16 && VAR_18->copy != VAR_8) {






  FUNC_13(VAR_18);
  return 0;
 }
 VAR_25 = VAR_14;

 VAR_27 = 0;
 while (VAR_15 && VAR_21 == 0) {

  VAR_23 = (VAR_14 + VAR_15 + (VAR_3 - 1)) / VAR_3;

  if (VAR_23 > VAR_1)
          VAR_23 = VAR_1;

  for (VAR_22 = 0; VAR_22 < VAR_23; ) {

          if ((VAR_19 = FUNC_15(VAR_18, VAR_12)) == VAR_9)
           break;


   if (VAR_19->vmp_busy || VAR_19->vmp_cleaning) {







    if (VAR_22)
     break;
    FUNC_0(VAR_18, VAR_19, VAR_6);
    continue;
   }
   if (VAR_19->vmp_laundry)
    FUNC_18(VAR_19, VAR_0);

          if (VAR_16) {
    if (VAR_19->vmp_dirty == VAR_0)
     VAR_27++;
    FUNC_2(VAR_19, VAR_0);
    if (VAR_19->vmp_cs_validated &&
        !VAR_19->vmp_cs_tainted) {





     VAR_19->vmp_cs_validated = VAR_0;

     FUNC_3(VAR_10, 1);

     FUNC_9(FUNC_5(VAR_19));
    }
   }
   VAR_19->vmp_busy = VAR_7;

   VAR_26[VAR_22++] = VAR_19;

   VAR_12 += VAR_4;
  }
  if (VAR_22 == 0)






          break;
  FUNC_13(VAR_18);

  for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++) {

          VAR_19 = VAR_26[VAR_24];

   if ((VAR_20 = VAR_3 - VAR_14) > VAR_15)
           VAR_20 = VAR_15;

   if ( (VAR_21 = FUNC_11((addr64_t)(((addr64_t)(FUNC_5(VAR_19)) << VAR_2) + VAR_14), VAR_20, VAR_13)) )
           break;

   VAR_15 -= VAR_20;
   VAR_14 = 0;
  }
  FUNC_12(VAR_18);
  if (VAR_17 && (VAR_22 > 1 || VAR_25 == 0)) {

   FUNC_14();

   for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++)
    FUNC_16(VAR_26[VAR_24]);

   FUNC_17();
  }
  for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++) {
          VAR_19 = VAR_26[VAR_24];






   if (VAR_19->vmp_clustered)
    FUNC_4(VAR_19);

   FUNC_1(VAR_19);
  }
  VAR_25 = 0;
 }
 if (VAR_18->pager)
  FUNC_10(FUNC_7(), (VAR_27 * VAR_3), VAR_5, FUNC_19(VAR_18->pager));
 FUNC_13(VAR_18);
 return (VAR_21);
}
