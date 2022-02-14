
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int error_notify_proc; int trace_proc; int notify_proc; int user_context; } ;
typedef TYPE_5__ diva_trace_library_user_interface_t ;
typedef int diva_strace_path2action_t ;
typedef int diva_strace_library_interface_t ;
struct TYPE_13__ {int * R; } ;
struct TYPE_11__ {int error_notify_proc; int trace_proc; int notify_proc; int user_context; } ;
struct TYPE_10__ {int DivaSTraceClearCall; int DivaSTraceGetDLayer2Statistics; int DivaSTraceGetDLayer1Statistics; int DivaSTraceGetBLayer2Statistics; int DivaSTraceGetBLayer1Statistics; int DivaSTraceGetFaxStatistics; int DivaSTraceGetModemStatistics; int DivaSTraceGetIncomingCallStatistics; int DivaSTraceGetOutgoingCallStatistics; int DivaSTraceSetInfo; int DivaSTraceSetDChannel; int DivaSTraceSetBChannel; int DivaSTraceSetAudioTap; int DivaSTraceGetHandle; int DivaSTraceMessageInput; int DivaSTraceLibraryFinit; int DivaSTraceLibraryStop; int DivaSTraceLibraryStart; TYPE_6__* hLib; } ;
struct TYPE_15__ {int Adapter; int Channels; int parse_entries; int req_busy; int rc_ok; int RData; TYPE_4__ e; int InterfaceStat; TYPE_3__* lines; int Interface; int * parse_table; int hAdapter; TYPE_2__ user_proc_table; TYPE_1__ instance; } ;
typedef TYPE_6__ diva_strace_context_t ;
typedef int byte ;
struct TYPE_12__ {int * pInterfaceStat; int * pInterface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_6__*,int,int) ;

diva_strace_library_interface_t* FUNC_5 (int VAR_24,
           const diva_trace_library_user_interface_t* VAR_25,
                      byte* VAR_26) {
 diva_strace_context_t* VAR_27 = (diva_strace_context_t*)VAR_26;
 int VAR_28;

 if (!VAR_27) {
  return ((void*)0);
 }

 VAR_26 += sizeof(*VAR_27);
 FUNC_4(VAR_27, 0x00, sizeof(*VAR_27));

 VAR_27->Adapter = VAR_24;




 VAR_27->instance.hLib = VAR_27;
  VAR_27->instance.DivaSTraceLibraryStart = VAR_2;
  VAR_27->instance.DivaSTraceLibraryStop = VAR_3;
 VAR_27->instance.DivaSTraceLibraryFinit = VAR_18;
 VAR_27->instance.DivaSTraceMessageInput = VAR_19;
 VAR_27->instance.DivaSTraceGetHandle = VAR_14;
 VAR_27->instance.DivaSTraceSetAudioTap = VAR_20;
 VAR_27->instance.DivaSTraceSetBChannel = VAR_21;
 VAR_27->instance.DivaSTraceSetDChannel = VAR_22;
 VAR_27->instance.DivaSTraceSetInfo = VAR_23;
 VAR_27->instance.DivaSTraceGetOutgoingCallStatistics = VAR_17;

 VAR_27->instance.DivaSTraceGetIncomingCallStatistics = VAR_15;

 VAR_27->instance.DivaSTraceGetModemStatistics = VAR_16;

 VAR_27->instance.DivaSTraceGetFaxStatistics = VAR_13;

 VAR_27->instance.DivaSTraceGetBLayer1Statistics = VAR_9;

 VAR_27->instance.DivaSTraceGetBLayer2Statistics = VAR_10;

 VAR_27->instance.DivaSTraceGetDLayer1Statistics = VAR_11;

 VAR_27->instance.DivaSTraceGetDLayer2Statistics = VAR_12;

 VAR_27->instance.DivaSTraceClearCall = VAR_8;


 if (VAR_25) {
  VAR_27->user_proc_table.user_context = VAR_25->user_context;
  VAR_27->user_proc_table.notify_proc = VAR_25->notify_proc;
  VAR_27->user_proc_table.trace_proc = VAR_25->trace_proc;
  VAR_27->user_proc_table.error_notify_proc = VAR_25->error_notify_proc;
 }

 if (!(VAR_27->hAdapter = FUNC_1 (VAR_24))) {
    FUNC_3 (0, VAR_1, "Can not open XDI adapter");
  return ((void*)0);
 }
 VAR_27->Channels = FUNC_0 (VAR_27->hAdapter);





 VAR_27->parse_entries = (VAR_6 + VAR_4 + VAR_7 + VAR_5 + 1) * VAR_27->Channels;


 VAR_27->parse_table = (diva_strace_path2action_t*)VAR_26;

 for (VAR_28 = 0; VAR_28 < 30; VAR_28++) {
  VAR_27->lines[VAR_28].pInterface = &VAR_27->Interface;
  VAR_27->lines[VAR_28].pInterfaceStat = &VAR_27->InterfaceStat;
 }

  VAR_27->e.R = &VAR_27->RData;

 VAR_27->req_busy = 1;
 VAR_27->rc_ok = VAR_0;

 FUNC_2 (VAR_27);

 return ((diva_strace_library_interface_t*)VAR_27);
}
