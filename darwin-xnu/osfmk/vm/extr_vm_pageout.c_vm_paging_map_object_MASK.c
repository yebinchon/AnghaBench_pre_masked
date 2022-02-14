
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int pmap_paddr_t ;
typedef scalar_t__ kern_return_t ;
typedef int event_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int vmp_busy; scalar_t__ vmp_pmapped; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,TYPE_1__*,int ,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__*,int,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ) ;
 TYPE_1__* FUNC_20 (int ,scalar_t__) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 unsigned long VAR_32 ;

kern_return_t
FUNC_21(
 vm_page_t VAR_33,
 vm_object_t VAR_34,
 vm_object_offset_t VAR_35,
 vm_prot_t VAR_36,
 boolean_t VAR_37,
 vm_map_size_t *VAR_38,
 vm_map_offset_t *VAR_39,
 boolean_t *VAR_40)
{
 kern_return_t VAR_41;
 vm_map_offset_t VAR_42;
 vm_map_size_t VAR_43;
 vm_object_offset_t VAR_44;
 int VAR_45;

 if (VAR_33 != VAR_16 && *VAR_38 == VAR_5) {


  *VAR_39 = (vm_map_offset_t)
   FUNC_0((pmap_paddr_t)FUNC_3(VAR_33) <<
         VAR_4);
  *VAR_40 = VAR_0;
  return VAR_3;
  FUNC_4(VAR_33->vmp_busy);





  FUNC_9(&VAR_23);





  VAR_42 = 0;
  for (;;) {
   for (VAR_45 = 0; VAR_45 < VAR_17; VAR_45++) {
    if (VAR_28[VAR_45] == VAR_0) {
     VAR_42 =
      VAR_22 +
      (VAR_45 * VAR_5);
     break;
    }
   }
   if (VAR_42 != 0) {

    break;
   }

   if (VAR_37) {




    break;
   }




   VAR_30++;
   VAR_29++;
   VAR_41 = FUNC_5((event_t)&VAR_29, VAR_8);
   if (VAR_41 == VAR_9) {
    FUNC_10(&VAR_23);
    VAR_41 = FUNC_11(VAR_7);
    FUNC_9(&VAR_23);
   }
   VAR_29--;

  }

  if (VAR_42 != 0) {




   if (VAR_45 > VAR_24) {
    VAR_24 = VAR_45;
   }
   VAR_28[VAR_45] = VAR_10;
   FUNC_10(&VAR_23);

   VAR_33->vmp_pmapped = VAR_10;







   FUNC_1(VAR_21,
       VAR_42,
       VAR_33,
       VAR_36,
       VAR_19,
       0,
       VAR_10,
       VAR_41);
   FUNC_4(VAR_41 == VAR_3);
   VAR_26++;
   VAR_31++;
   *VAR_39 = VAR_42;
   *VAR_40 = VAR_10;






   return VAR_3;
  }






  VAR_25++;
  FUNC_10(&VAR_23);
 }

 if (! VAR_37) {
  *VAR_39 = 0;
  *VAR_38 = 0;
  *VAR_40 = VAR_0;
  return VAR_2;
 }

 VAR_44 = FUNC_18(VAR_35);
 VAR_43 = FUNC_14(*VAR_38,
         FUNC_2(VAR_20));






 FUNC_17(VAR_34);
 FUNC_19(VAR_34);

 VAR_41 = FUNC_12(VAR_20,
     VAR_39,
     VAR_43,
     0,
     VAR_11,
     VAR_14,
     VAR_13,
     VAR_34,
     VAR_44,
     VAR_0,
     VAR_36,
     VAR_18,
     VAR_12);
 if (VAR_41 != VAR_3) {
  *VAR_39 = 0;
  *VAR_38 = 0;
  *VAR_40 = VAR_0;
  FUNC_15(VAR_34);
  FUNC_16(VAR_34);
  return VAR_41;
 }

 *VAR_38 = VAR_43;




 FUNC_16(VAR_34);







 for (VAR_42 = 0;
      VAR_43 != 0;
      VAR_43 -= VAR_6, VAR_42 += VAR_6) {

  VAR_33 = FUNC_20(VAR_34, VAR_35 + VAR_42);
  if (VAR_33 == VAR_16) {
   FUNC_8("vm_paging_map_object: no page !?");
   FUNC_19(VAR_34);
   VAR_41 = FUNC_13(VAR_20, *VAR_39, *VAR_38,
        VAR_15);
   FUNC_4(VAR_41 == VAR_3);
   *VAR_39 = 0;
   *VAR_38 = 0;
   *VAR_40 = VAR_0;
   FUNC_16(VAR_34);
   return VAR_1;
  }
  VAR_33->vmp_pmapped = VAR_10;


  FUNC_1(VAR_21,
      *VAR_39 + VAR_42,
      VAR_33,
      VAR_36,
      VAR_19,
      0,
      VAR_10,
      VAR_41);
  FUNC_4(VAR_41 == VAR_3);



 }

 VAR_27++;
 VAR_32 += (unsigned long) (VAR_43 / VAR_6);

 *VAR_40 = VAR_10;

 return VAR_3;
}
