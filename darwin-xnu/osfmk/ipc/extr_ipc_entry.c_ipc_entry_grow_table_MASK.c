
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct ipc_entry {scalar_t__ ie_object; size_t ie_next; int ie_request; int ie_bits; } ;
typedef size_t mach_port_index_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_table_size_t ;
typedef scalar_t__ ipc_table_index_t ;
typedef scalar_t__ ipc_table_elems_t ;
typedef TYPE_2__* ipc_space_t ;
typedef struct ipc_entry* ipc_entry_t ;
typedef scalar_t__ ipc_entry_num_t ;
typedef int event_t ;
struct TYPE_15__ {scalar_t__ is_low_mod; scalar_t__ is_high_mod; scalar_t__ is_table_size; int is_table_free; TYPE_1__* is_table_next; struct ipc_entry* is_table; } ;
struct TYPE_14__ {scalar_t__ its_size; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct ipc_entry* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (struct ipc_entry*,scalar_t__,scalar_t__,size_t,struct ipc_entry*) ;
 int FUNC_3 (struct ipc_entry*,scalar_t__,scalar_t__,size_t,struct ipc_entry*) ;
 int FUNC_4 (TYPE_2__*,struct ipc_entry*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 struct ipc_entry* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,struct ipc_entry*) ;
 int FUNC_14 (void*,int ,scalar_t__) ;
 int FUNC_15 (int ) ;

kern_return_t
FUNC_16(
 ipc_space_t VAR_15,
 ipc_table_elems_t VAR_16)
{
 ipc_entry_num_t VAR_17, VAR_18, VAR_19, VAR_20;

 ipc_entry_t VAR_21, VAR_22;
 ipc_table_size_t VAR_23, VAR_24, VAR_25;
 mach_port_index_t VAR_26, VAR_27;
 mach_port_index_t VAR_28, VAR_29;
 ipc_table_index_t VAR_30;



 FUNC_1(FUNC_5(VAR_15));

 if (FUNC_7(VAR_15)) {





  FUNC_10(VAR_15);
  return VAR_6;
 }

 VAR_21 = VAR_15->is_table;

 VAR_24 = VAR_15->is_table_next;
 VAR_18 = VAR_24->its_size;





 VAR_23 = VAR_24 - 1;
 VAR_17 = VAR_23->its_size;






 if (VAR_16 != VAR_3) {
  if (VAR_16 <= VAR_17) {

   return VAR_6;
  }

  VAR_20 = VAR_17;
  while ((VAR_20 != VAR_18) && (VAR_16 > VAR_18)) {
   VAR_20 = VAR_18;
   VAR_24++;
   VAR_18 = VAR_24->its_size;
  }
  if (VAR_20 == VAR_18) {
   FUNC_11(VAR_15);
   return VAR_4;
  }
 }

 if (VAR_17 == VAR_18) {
  FUNC_11(VAR_15);
  return VAR_4;
 }

 VAR_25 = VAR_24 + 1;
 VAR_19 = VAR_25->its_size;
 FUNC_1((VAR_17 < VAR_18) && (VAR_18 <= VAR_19));
 FUNC_8(VAR_15);
 VAR_15->is_low_mod = VAR_17;
 VAR_15->is_high_mod = 0;



 FUNC_11(VAR_15);

 VAR_22 = FUNC_12(VAR_24);
 if (VAR_22 == VAR_0) {
  FUNC_9(VAR_15);
  FUNC_6(VAR_15);
  FUNC_11(VAR_15);
  FUNC_15((event_t) VAR_15);
  return VAR_5;
 }

 FUNC_4(VAR_15, VAR_22, VAR_17, VAR_18);


 FUNC_14((void *)VAR_22, 0, VAR_17 * sizeof(*VAR_22));

 VAR_28 = 0;
 VAR_29 = VAR_17 - 1;
 rescan:
 for (VAR_26 = VAR_28; VAR_26 <= VAR_29; VAR_26++) {
  ipc_entry_t VAR_31 = &VAR_22[VAR_26];
  struct ipc_entry VAR_32 = VAR_21[VAR_26];

  if (VAR_31->ie_object != VAR_32.ie_object ||
      FUNC_0(VAR_31->ie_bits) != FUNC_0(VAR_32.ie_bits)) {

   if (VAR_31->ie_object != VAR_1 &&
       FUNC_0(VAR_31->ie_bits) == VAR_7)
    FUNC_2(VAR_22, VAR_18, VAR_31->ie_object, VAR_26, VAR_31);

   VAR_31->ie_object = VAR_32.ie_object;
   VAR_31->ie_bits = VAR_32.ie_bits;
   VAR_31->ie_request = VAR_32.ie_request;

   if (VAR_31->ie_object != VAR_1 &&
       FUNC_0(VAR_31->ie_bits) == VAR_7)
    FUNC_3(VAR_22, VAR_18, VAR_31->ie_object, VAR_26, VAR_31);
  } else {
   FUNC_1(VAR_31->ie_object == VAR_32.ie_object);
   VAR_31->ie_bits = VAR_32.ie_bits;
   VAR_31->ie_request = VAR_32.ie_request;
  }

 }
 VAR_22[0].ie_next = VAR_21[0].ie_next;






 VAR_27 = 0;
 for (VAR_30 = 0; VAR_30 < VAR_17; VAR_30++) {
  if (VAR_22[VAR_27].ie_object != VAR_2)
   break;
  VAR_26 = VAR_22[VAR_27].ie_next;
  if (VAR_26 == 0 || VAR_26 >= VAR_17)
   break;
  VAR_27 = VAR_26;
 }






 FUNC_9(VAR_15);
 if (!FUNC_5(VAR_15)) {




  FUNC_6(VAR_15);
  FUNC_11(VAR_15);
  FUNC_15((event_t) VAR_15);
  FUNC_13(VAR_24, VAR_22);
  FUNC_9(VAR_15);
  return VAR_6;
 }


 if (VAR_15->is_low_mod < VAR_17) {
  FUNC_1(VAR_15->is_high_mod > 0);
  VAR_28 = VAR_15->is_low_mod;
  VAR_15->is_low_mod = VAR_17;
  VAR_29 = VAR_15->is_high_mod;
  VAR_15->is_high_mod = 0;
  FUNC_11(VAR_15);
  goto rescan;
 }


 FUNC_1(VAR_22[VAR_27].ie_next == 0 &&
        VAR_22[VAR_27].ie_object == VAR_1);
 VAR_22[VAR_27].ie_next = VAR_17;

 FUNC_1(VAR_15->is_table == VAR_21);
 FUNC_1((VAR_15->is_table_next == VAR_24) ||
     (VAR_16 != VAR_3));
 FUNC_1(VAR_15->is_table_size == VAR_17);

 VAR_15->is_table = VAR_22;
 VAR_15->is_table_size = VAR_18;
 VAR_15->is_table_next = VAR_25;
 VAR_15->is_table_free += VAR_18 - VAR_17;

 FUNC_6(VAR_15);
 FUNC_11(VAR_15);

 FUNC_15((event_t) VAR_15);




 FUNC_13(VAR_23, VAR_21);
 FUNC_9(VAR_15);

 return VAR_6;
}
