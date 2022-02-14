
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef int mach_voucher_attr_recipe_command_t ;
typedef int mach_voucher_attr_key_t ;
typedef scalar_t__ mach_voucher_attr_content_t ;
typedef int mach_voucher_attr_content_size_t ;
typedef int kern_return_t ;
typedef int iv_index_t ;
typedef TYPE_1__* ipc_voucher_t ;
typedef int boolean_t ;
struct TYPE_10__ {int iv_table_size; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static kern_return_t
FUNC_8(
 ipc_voucher_t VAR_8,
 mach_voucher_attr_key_t VAR_9,
 mach_voucher_attr_recipe_command_t VAR_10,
 ipc_voucher_t VAR_11,
 mach_voucher_attr_content_t VAR_12,
 mach_voucher_attr_content_size_t VAR_13,
 boolean_t VAR_14)
{
 iv_index_t VAR_15;
 iv_index_t VAR_16;
 kern_return_t VAR_17;

 switch (VAR_10) {
 case 131:


  if (0 < VAR_13)
   return VAR_2;


  if (VAR_0 == VAR_11)
   return VAR_4;

  if (VAR_5 == VAR_9) {
   iv_index_t VAR_18, VAR_19;


   VAR_18 = (VAR_11->iv_table_size < VAR_8->iv_table_size) ?
           VAR_11->iv_table_size :
    VAR_8->iv_table_size;


   for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {

    VAR_16 = FUNC_4(VAR_8, VAR_19);
    FUNC_7(VAR_19, VAR_16);


    VAR_15 = FUNC_4(VAR_11, VAR_19);
    FUNC_6(VAR_19, VAR_15);
    FUNC_5(VAR_8, VAR_19, VAR_15);
   }
  } else {
   iv_index_t VAR_20;


   VAR_20 = FUNC_3(VAR_9);
   if (VAR_7 < VAR_20)
    return VAR_2;


   VAR_16 = FUNC_4(VAR_8, VAR_20);
   FUNC_7(VAR_20, VAR_16);


   VAR_15 = FUNC_4(VAR_11, VAR_20);
   FUNC_6(VAR_20, VAR_15);
   FUNC_5(VAR_8, VAR_20, VAR_15);
  }
  break;
 case 129:

  if (0 < VAR_13)
   return VAR_2;

  if (VAR_5 == VAR_9) {
   iv_index_t VAR_21, VAR_22;


   VAR_21 = (VAR_0 == VAR_11) ? VAR_8->iv_table_size :
    ((VAR_11->iv_table_size < VAR_8->iv_table_size) ?
     VAR_11->iv_table_size : VAR_8->iv_table_size);


   for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
    VAR_16 = FUNC_4(VAR_8, VAR_22);


    if (VAR_0 != VAR_11) {
     VAR_15 = FUNC_4(VAR_11, VAR_22);
     if (VAR_16 != VAR_15)
      continue;
    }

    FUNC_7(VAR_22, VAR_16);
    FUNC_5(VAR_8, VAR_22, VAR_1);
   }
  } else {
   iv_index_t VAR_23;


   VAR_23 = FUNC_3(VAR_9);
   if (VAR_7 < VAR_23)
    return VAR_2;

   VAR_16 = FUNC_4(VAR_8, VAR_23);


   if (VAR_0 != VAR_11) {
    VAR_15 = FUNC_4(VAR_11, VAR_23);
    if (VAR_16 != VAR_15)
     break;
   }


   FUNC_7(VAR_23, VAR_16);
   FUNC_5(VAR_8, VAR_23, VAR_1);
  }
  break;







 case 128:
  if (VAR_14) {
   mach_voucher_attr_value_handle_t VAR_24;

   if (sizeof(mach_voucher_attr_value_handle_t) != VAR_13)
    return VAR_2;

   VAR_24 = *(mach_voucher_attr_value_handle_t *)(void *)VAR_12;
   VAR_17 = FUNC_0(VAR_8,
        VAR_9,
        VAR_24);
   if (VAR_4 != VAR_17)
    return VAR_17;
  } else
   return VAR_3;
  break;







 case 130:

  if (VAR_5 == VAR_9) {
   iv_index_t VAR_25, VAR_26;


   if (VAR_0 != VAR_11)
    VAR_25 = (VAR_11->iv_table_size < VAR_8->iv_table_size) ?
     VAR_11->iv_table_size :
     VAR_8->iv_table_size;
   else
    VAR_25 = VAR_8->iv_table_size;


   for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
    mach_voucher_attr_key_t VAR_27;

    VAR_27 = FUNC_2(VAR_26);


    if (VAR_6 == VAR_27)
     continue;


    VAR_17 = FUNC_1(VAR_8,
              VAR_27,
              VAR_10,
              VAR_11,
              VAR_12,
              VAR_13);
    if (VAR_4 != VAR_17)
     return VAR_17;
   }
   break;
  }
 default:
  VAR_17 = FUNC_1(VAR_8,
            VAR_9,
            VAR_10,
            VAR_11,
            VAR_12,
            VAR_13);
  if (VAR_4 != VAR_17)
   return VAR_17;

  break;
 }
 return VAR_4;
}
