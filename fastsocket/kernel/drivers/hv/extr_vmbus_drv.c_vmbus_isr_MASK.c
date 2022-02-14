
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union hv_synic_event_flags {int * flags32; } ;
struct TYPE_3__ {scalar_t__ message_type; } ;
struct hv_message {TYPE_1__ header; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {void** synic_message_page; int ** event_dpc; void** synic_event_page; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{
 int VAR_11 = FUNC_0();
 void *VAR_12;
 struct hv_message *VAR_13;
 union hv_synic_event_flags *VAR_14;
 bool VAR_15 = 0;

 VAR_12 = VAR_6.synic_event_page[VAR_11];
 if (VAR_12 == ((void*)0))
  return VAR_2;

 VAR_14 = (union hv_synic_event_flags *)VAR_12 +
      VAR_5;






 if ((VAR_8 == VAR_4) ||
  (VAR_8 == VAR_3)) {


  if (FUNC_1(0,
   (unsigned long *) &VAR_14->flags32[0])) {
   VAR_15 = 1;
  }
 } else {






  VAR_15 = 1;
 }

 if (VAR_15)
  FUNC_2(VAR_6.event_dpc[VAR_11]);


 VAR_12 = VAR_6.synic_message_page[VAR_11];
 VAR_13 = (struct hv_message *)VAR_12 + VAR_5;


 if (VAR_13->header.message_type != VAR_0) {
  VAR_15 = 1;
  FUNC_2(&VAR_7);
 }

 if (VAR_15)
  return VAR_1;
 else
  return VAR_2;
}
