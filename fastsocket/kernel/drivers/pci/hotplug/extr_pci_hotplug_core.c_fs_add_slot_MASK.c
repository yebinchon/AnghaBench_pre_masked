
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pci_slot {int kobj; } ;
struct TYPE_14__ {int attr; } ;
struct TYPE_13__ {int attr; } ;
struct TYPE_12__ {int attr; } ;
struct TYPE_11__ {int attr; } ;
struct TYPE_10__ {int attr; } ;
struct TYPE_9__ {int attr; } ;
struct TYPE_8__ {int attr; } ;


 scalar_t__ FUNC_0 (struct pci_slot*) ;
 scalar_t__ FUNC_1 (struct pci_slot*) ;
 scalar_t__ FUNC_2 (struct pci_slot*) ;
 scalar_t__ FUNC_3 (struct pci_slot*) ;
 scalar_t__ FUNC_4 (struct pci_slot*) ;
 scalar_t__ FUNC_5 (struct pci_slot*) ;
 scalar_t__ FUNC_6 (struct pci_slot*) ;
 TYPE_7__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_7 (struct pci_slot*) ;
 int FUNC_8 (struct pci_slot*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct pci_slot *VAR_7)
{
 int VAR_8 = 0;


 FUNC_7(VAR_7);

 if (FUNC_5(VAR_7)) {
  VAR_8 = FUNC_9(&VAR_7->kobj,
        &VAR_4.attr);
  if (VAR_8)
   goto exit_power;
 }

 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_9(&VAR_7->kobj,
        &VAR_0.attr);
  if (VAR_8)
   goto exit_attention;
 }

 if (FUNC_3(VAR_7)) {
  VAR_8 = FUNC_9(&VAR_7->kobj,
        &VAR_2.attr);
  if (VAR_8)
   goto exit_latch;
 }

 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_9(&VAR_7->kobj,
        &VAR_5.attr);
  if (VAR_8)
   goto exit_adapter;
 }

 if (FUNC_4(VAR_7)) {
  VAR_8 = FUNC_9(&VAR_7->kobj,
     &VAR_3.attr);
  if (VAR_8)
   goto exit_max_speed;
 }

 if (FUNC_2(VAR_7)) {
  VAR_8 = FUNC_9(&VAR_7->kobj,
     &VAR_1.attr);
  if (VAR_8)
   goto exit_cur_speed;
 }

 if (FUNC_6(VAR_7)) {
  VAR_8 = FUNC_9(&VAR_7->kobj,
        &VAR_6.attr);
  if (VAR_8)
   goto exit_test;
 }

 goto exit;

exit_test:
 if (FUNC_2(VAR_7))
  FUNC_10(&VAR_7->kobj,
      &VAR_1.attr);
exit_cur_speed:
 if (FUNC_4(VAR_7))
  FUNC_10(&VAR_7->kobj,
      &VAR_3.attr);
exit_max_speed:
 if (FUNC_0(VAR_7))
  FUNC_10(&VAR_7->kobj,
      &VAR_5.attr);
exit_adapter:
 if (FUNC_3(VAR_7))
  FUNC_10(&VAR_7->kobj, &VAR_2.attr);
exit_latch:
 if (FUNC_1(VAR_7))
  FUNC_10(&VAR_7->kobj,
      &VAR_0.attr);
exit_attention:
 if (FUNC_5(VAR_7))
  FUNC_10(&VAR_7->kobj, &VAR_4.attr);
exit_power:
 FUNC_8(VAR_7);
exit:
 return VAR_8;
}
