
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct efivars {int lock; TYPE_1__* ops; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;
struct TYPE_2__ {scalar_t__ (* get_next_variable ) (unsigned long*,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct efivars VAR_3 ;
 int FUNC_0 (struct efivars*,unsigned long,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long*,int *,int *) ;
 unsigned long FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9(struct work_struct *VAR_4)
{
 struct efivars *VAR_5 = &VAR_3;
 efi_guid_t VAR_6;
 efi_char16_t *VAR_7;
 unsigned long VAR_8 = 1024;
 efi_status_t VAR_9 = VAR_0;
 bool VAR_10;


 while (1) {
  VAR_7 = FUNC_2(VAR_8, VAR_2);
  if (!VAR_7) {
   FUNC_3("efivars: Memory allocation failed.\n");
   return;
  }

  FUNC_4(&VAR_5->lock);
  VAR_10 = 0;
  while (1) {
   VAR_8 = 1024;
   VAR_9 = VAR_5->ops->get_next_variable(
       &VAR_8,
       VAR_7,
       &VAR_6);
   if (VAR_9 != VAR_1) {
    break;
   } else {
    if (!FUNC_8(VAR_7,
        &VAR_6)) {
     VAR_10 = 1;
     break;
    }
   }
  }
  FUNC_5(&VAR_5->lock);

  if (!VAR_10) {
   FUNC_1(VAR_7);
   break;
  } else {
   VAR_8 = FUNC_7(VAR_7,
              VAR_8);
   FUNC_0(VAR_5,
        VAR_8,
        VAR_7, &VAR_6);
  }
 }
}
