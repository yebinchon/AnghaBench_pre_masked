
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ dword ;
struct TYPE_20__ {int Channels; int trace_events_down; int l1_trace; int l2_trace; TYPE_2__* lines; int modem_init_event; int pending_modem_status; int fax_init_event; int pending_fax_status; int pending_line_status; int line_init_event; } ;
typedef TYPE_3__ diva_strace_context_t ;
struct TYPE_21__ {int path_length; } ;
typedef TYPE_4__ diva_man_var_header_t ;
struct TYPE_19__ {TYPE_1__* pInterface; } ;
struct TYPE_18__ {char* Layer2; int * Layer1; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_4__*,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*,int,char*,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,scalar_t__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_14 (diva_strace_context_t* VAR_1,
    diva_man_var_header_t* VAR_2) {
 const char* VAR_3 = (char*)&VAR_2->path_length+1;
 char VAR_4[64];
 int VAR_5;

 if (!FUNC_13("State\\B Event", VAR_3, VAR_2->path_length)) {
    dword VAR_6;
    if (!FUNC_9 (VAR_2, &VAR_6)) {
      if (!VAR_1->line_init_event && !VAR_1->pending_line_status) {
        for (VAR_5 = 1; VAR_5 <= VAR_1->Channels; VAR_5++) {
          FUNC_3(VAR_1, VAR_5);
        }
        return (0);
      } else if (VAR_6 && VAR_6 <= VAR_1->Channels) {
        return (FUNC_3(VAR_1, (int)VAR_6));
      }
      return (0);
    }
    return (-1);
  }

 if (!FUNC_13("State\\FAX Event", VAR_3, VAR_2->path_length)) {
    dword VAR_7;
    if (!FUNC_9 (VAR_2, &VAR_7)) {
      if (!VAR_1->pending_fax_status && !VAR_1->fax_init_event) {
        for (VAR_5 = 1; VAR_5 <= VAR_1->Channels; VAR_5++) {
          FUNC_2(VAR_1, VAR_5);
        }
        return (0);
      } else if (VAR_7 && VAR_7 <= VAR_1->Channels) {
        return (FUNC_2(VAR_1, (int)VAR_7));
      }
      return (0);
    }
    return (-1);
  }

 if (!FUNC_13("State\\Modem Event", VAR_3, VAR_2->path_length)) {
    dword VAR_8;
    if (!FUNC_9 (VAR_2, &VAR_8)) {
      if (!VAR_1->pending_modem_status && !VAR_1->modem_init_event) {
        for (VAR_5 = 1; VAR_5 <= VAR_1->Channels; VAR_5++) {
          FUNC_4(VAR_1, VAR_5);
        }
        return (0);
      } else if (VAR_8 && VAR_8 <= VAR_1->Channels) {
        return (FUNC_4(VAR_1, (int)VAR_8));
      }
      return (0);
    }
    return (-1);
  }




 for (VAR_5 = 1; VAR_5 <= VAR_1->Channels; VAR_5++) {
  FUNC_11 (VAR_4, "State\\B%d\\Line", VAR_5);
  if (FUNC_10 (VAR_2, VAR_4)) {
   return (FUNC_3(VAR_1, VAR_5));
  }
 }




 for (VAR_5 = 1; VAR_5 <= VAR_1->Channels; VAR_5++) {
  FUNC_11 (VAR_4, "State\\B%d\\Modem\\Event", VAR_5);
  if (FUNC_10 (VAR_2, VAR_4)) {
   return (FUNC_4 (VAR_1, VAR_5));
  }
 }




 for (VAR_5 = 1; VAR_5 <= VAR_1->Channels; VAR_5++) {
  FUNC_11 (VAR_4, "State\\B%d\\FAX\\Event", VAR_5);
  if (FUNC_10 (VAR_2, VAR_4)) {
   return (FUNC_2 (VAR_1, VAR_5));
  }
 }




 if (!FUNC_13("Events Down", VAR_3, VAR_2->path_length)) {
  if (VAR_1->trace_events_down == 1) {
   VAR_1->trace_events_down = 2;
  } else {
   FUNC_7 (VAR_1, 1, "Events Down", 0);
  }
  return (0);
 }

 if (!FUNC_13("State\\Layer1", VAR_3, VAR_2->path_length)) {
  FUNC_5 (VAR_2, &VAR_1->lines[0].pInterface->Layer1[0]);
  if (VAR_1->l1_trace == 1) {
   VAR_1->l1_trace = 2;
  } else {
   FUNC_8 (VAR_1, 0, VAR_0);
  }
  return (0);
 }
 if (!FUNC_13("State\\Layer2 No1", VAR_3, VAR_2->path_length)) {
  char* VAR_9 = &VAR_1->lines[0].pInterface->Layer2[0];
  dword VAR_10;
  if (FUNC_6(VAR_2, &VAR_10))
   return -1;

  switch (VAR_10) {
   case 0:
    FUNC_12 (VAR_9, "Idle");
    break;
   case 1:
    FUNC_12 (VAR_9, "Layer2 UP");
    break;
   case 2:
    FUNC_12 (VAR_9, "Layer2 Disconnecting");
    break;
   case 3:
    FUNC_12 (VAR_9, "Layer2 Connecting");
    break;
   case 4:
    FUNC_12 (VAR_9, "SPID Initializing");
    break;
   case 5:
    FUNC_12 (VAR_9, "SPID Initialised");
    break;
   case 6:
    FUNC_12 (VAR_9, "Layer2 Connecting");
    break;

   case 7:
    FUNC_12 (VAR_9, "Auto SPID Stopped");
    break;

   case 8:
    FUNC_12 (VAR_9, "Auto SPID Idle");
    break;

   case 9:
    FUNC_12 (VAR_9, "Auto SPID Requested");
    break;

   case 10:
    FUNC_12 (VAR_9, "Auto SPID Delivery");
    break;

   case 11:
    FUNC_12 (VAR_9, "Auto SPID Complete");
    break;

   default:
    FUNC_11 (VAR_9, "U:%d", (int)VAR_10);
  }
  if (VAR_1->l2_trace == 1) {
   VAR_1->l2_trace = 2;
  } else {
   FUNC_8 (VAR_1, 0, VAR_0);
  }
  return (0);
 }

 if (!FUNC_13("Statistics\\Incoming Calls\\Calls", VAR_3, VAR_2->path_length) ||
   !FUNC_13("Statistics\\Incoming Calls\\Connected", VAR_3, VAR_2->path_length)) {
  return (FUNC_0 (VAR_1));
 }

 if (!FUNC_13("Statistics\\Outgoing Calls\\Calls", VAR_3, VAR_2->path_length) ||
   !FUNC_13("Statistics\\Outgoing Calls\\Connected", VAR_3, VAR_2->path_length)) {
  return (FUNC_1 (VAR_1));
 }

 return (-1);
}
