
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int lnk_no; } ;
struct lpfc_acqe_sli {int event_data1; int event_data2; } ;
struct TYPE_4__ {TYPE_1__ lnk_info; struct lpfc_acqe_sli sli_intf; } ;
struct lpfc_hba {char* Port; TYPE_2__ sli4_hba; } ;
struct lpfc_acqe_misconfigured_event {struct lpfc_acqe_sli theEvent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_acqe_sli*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,char,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_11, struct lpfc_acqe_sli *VAR_12)
{
 char VAR_13;
 char VAR_14[128];
 uint8_t VAR_15;
 struct lpfc_acqe_misconfigured_event *VAR_16;


 if ((FUNC_0(VAR_5, &VAR_11->sli4_hba.sli_intf) !=
   VAR_4) ||
  (FUNC_0(VAR_10, VAR_12) !=
   VAR_3)) {
  FUNC_1(VAR_11, VAR_1, VAR_2,
    "2901 Async SLI event - Event Data1:x%08x Event Data2:"
    "x%08x SLI Event Type:%d\n",
    VAR_12->event_data1, VAR_12->event_data2,
    FUNC_0(VAR_10, VAR_12));
  return;
 }

 VAR_13 = VAR_11->Port[0];
 if (VAR_13 == 0x00)
  VAR_13 = '?';

 VAR_16 = (struct lpfc_acqe_misconfigured_event *)
     &VAR_12->event_data1;


 switch (VAR_11->sli4_hba.lnk_info.lnk_no) {
 case 135:
  VAR_15 = FUNC_0(VAR_6,
     &VAR_16->theEvent);
  break;
 case 134:
  VAR_15 = FUNC_0(VAR_7,
     &VAR_16->theEvent);
  break;
 case 133:
  VAR_15 = FUNC_0(VAR_8,
     &VAR_16->theEvent);
  break;
 case 132:
  VAR_15 = FUNC_0(VAR_9,
     &VAR_16->theEvent);
  break;
 default:
  VAR_15 = ~129;
  break;
 }

 switch (VAR_15) {
 case 129:
  return;
 case 131:
  FUNC_2(VAR_14, "Optics faulted/incorrectly installed/not " "installed - Reseat optics, if issue not "

    "resolved, replace.");
  break;
 case 128:
  FUNC_2(VAR_14,
   "Optics of two types installed - Remove one optic or " "install matching pair of optics.");

  break;
 case 130:
  FUNC_2(VAR_14, "Incompatible optics - Replace with " "compatible optics for card to function.");

  break;
 default:

  FUNC_2(VAR_14, "Unknown event status x%02x", VAR_15);
  break;
 }

 FUNC_1(VAR_11, VAR_0, VAR_2,
   "3176 Misconfigured Physical Port - "
   "Port Name %c %s\n", VAR_13, VAR_14);
}
