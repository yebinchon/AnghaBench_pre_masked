
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int word ;
struct TYPE_10__ {int complete; int Rc; int Ind; int RNum; int RNR; TYPE_2__* R; } ;
struct TYPE_8__ {int user_context; int (* trace_proc ) (int ,int *,int ,int*,int) ;} ;
struct TYPE_11__ {int removal_state; int rc_ok; int general_b_ch_event; int general_fax_event; int general_mdm_event; scalar_t__ ChannelsTraceActive; scalar_t__ Channels; scalar_t__ ModemTraceActive; scalar_t__ FaxTraceActive; int audio_trace_init; int trace_on; TYPE_3__ e; int Adapter; int instance; TYPE_1__ user_proc_table; scalar_t__* buffer; scalar_t__ req_busy; scalar_t__ audio_tap_pending; scalar_t__ eye_pattern_pending; } ;
typedef TYPE_4__ diva_strace_context_t ;
typedef int diva_man_var_header_t ;
typedef int byte ;
struct TYPE_9__ {int* P; int PLength; } ;


 int VAR_0 ;




 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int ,int *,int ,int*,int) ;
 int FUNC_5 (int ,int *,int ,int*,int) ;

__attribute__((used)) static int FUNC_6 (void* VAR_1) {
 diva_strace_context_t* VAR_2 = (diva_strace_context_t*)VAR_1;
 int VAR_3 = 0;
  byte VAR_4, VAR_5;

  if (VAR_2->e.complete == 255) {



    VAR_2->req_busy = 0;
    VAR_4 = VAR_2->e.Rc;
    VAR_2->e.Rc = 0;

    if (VAR_2->removal_state == 2) {
      VAR_2->removal_state = 3;
      return (0);
    }

  if (VAR_4 != VAR_2->rc_ok) {
      int VAR_6 = 0;



      if (VAR_2->general_b_ch_event == 1) {
        VAR_2->general_b_ch_event = 2;
        VAR_6 = 1;
      } else if (VAR_2->general_fax_event == 1) {
        VAR_2->general_fax_event = 2;
        VAR_6 = 1;
      } else if (VAR_2->general_mdm_event == 1) {
        VAR_2->general_mdm_event = 2;
        VAR_6 = 1;
      } else if ((VAR_2->ChannelsTraceActive < VAR_2->Channels) && VAR_2->ChannelsTraceActive) {
        VAR_2->ChannelsTraceActive = VAR_2->Channels;
        VAR_6 = 1;
      } else if (VAR_2->ModemTraceActive < VAR_2->Channels) {
        VAR_2->ModemTraceActive = VAR_2->Channels;
        VAR_6 = 1;
      } else if (VAR_2->FaxTraceActive < VAR_2->Channels) {
        VAR_2->FaxTraceActive = VAR_2->Channels;
        VAR_6 = 1;
      } else if (VAR_2->audio_trace_init == 2) {
        VAR_6 = 1;
        VAR_2->audio_trace_init = 1;
      } else if (VAR_2->eye_pattern_pending) {
    VAR_2->eye_pattern_pending = 0;
    VAR_6 = 1;
   } else if (VAR_2->audio_tap_pending) {
    VAR_2->audio_tap_pending = 0;
    VAR_6 = 1;
      }

      if (!VAR_6) {
        return (-1);
      }
    } else {
      if (VAR_2->general_b_ch_event == 1) {
        VAR_2->ChannelsTraceActive = VAR_2->Channels;
        VAR_2->general_b_ch_event = 2;
      } else if (VAR_2->general_fax_event == 1) {
        VAR_2->general_fax_event = 2;
        VAR_2->FaxTraceActive = VAR_2->Channels;
      } else if (VAR_2->general_mdm_event == 1) {
        VAR_2->general_mdm_event = 2;
        VAR_2->ModemTraceActive = VAR_2->Channels;
      }
    }
    if (VAR_2->audio_trace_init == 2) {
      VAR_2->audio_trace_init = 1;
    }
    VAR_2->rc_ok = 0xff;
    if ((VAR_3 = FUNC_0(VAR_2))) {
      return (-1);
    }
  } else {




    VAR_5 = VAR_2->e.Ind;
    VAR_2->e.Ind = 0;
    if (VAR_2->removal_state) {
      VAR_2->e.RNum = 0;
      VAR_2->e.RNR = 2;
    } else if (VAR_2->req_busy) {
      VAR_2->e.RNum = 0;
      VAR_2->e.RNR = 1;
    } else {
      if (VAR_2->e.complete != 0x02) {



        VAR_2->e.RNum = 1;
        VAR_2->e.R->P = (byte*)&VAR_2->buffer[0];
        VAR_2->e.R->PLength = (word)(sizeof(VAR_2->buffer) - 1);

      } else {



        byte* VAR_7 = (byte*)&VAR_2->buffer[0];
        VAR_2->buffer[VAR_2->e.R->PLength] = 0;

        switch (VAR_5) {
          case 131: {
            int VAR_8 = VAR_2->e.R->PLength;
            word VAR_9;

            while (VAR_8 > 3 && *VAR_7) {
              VAR_5 = *VAR_7++;
              VAR_9 = (word)VAR_7[0] | ((word)VAR_7[1] << 8);
              VAR_7 += 2;

              switch (VAR_5) {
                case 129:
                  if (FUNC_3 (VAR_2, (diva_man_var_header_t*)VAR_7)) {
                    return (-1);
                  }
                  break;
           case 130:
                  if (FUNC_2 (VAR_2, (diva_man_var_header_t*)VAR_7)) {
                    return (-1);
                  }
                  break;
                case 128:
                  if (VAR_2->trace_on == 1) {




                    VAR_2->trace_on++;
                  } else {



                    if (VAR_2->user_proc_table.trace_proc) {
                      (*(VAR_2->user_proc_table.trace_proc))(VAR_2->user_proc_table.user_context,
                                                            &VAR_2->instance, VAR_2->Adapter,
                                                            VAR_7, VAR_9);
                    }
                  }
                  break;
                default:
                  FUNC_1 (0, VAR_0, "Unknon IDI Ind (DMA mode): %02x", VAR_5);
              }
              VAR_7 += (VAR_9+1);
              VAR_8 -= (4 + VAR_9);
            }
          } break;
          case 129:
            if (FUNC_3 (VAR_2, (diva_man_var_header_t*)VAR_7)) {
              return (-1);
            }
            break;
     case 130:
            if (FUNC_2 (VAR_2, (diva_man_var_header_t*)VAR_7)) {
              return (-1);
            }
            break;
          case 128:
            if (VAR_2->trace_on == 1) {




              VAR_2->trace_on++;
            } else {



              if (VAR_2->user_proc_table.trace_proc) {
                (*(VAR_2->user_proc_table.trace_proc))(VAR_2->user_proc_table.user_context,
                                                      &VAR_2->instance, VAR_2->Adapter,
                                                      VAR_7, VAR_2->e.R->PLength);
              }
            }
            break;
          default:
            FUNC_1 (0, VAR_0, "Unknon IDI Ind: %02x", VAR_5);
        }
      }
    }
  }

 if ((VAR_3 = FUNC_0(VAR_2))) {
  return (-1);
 }

 return (VAR_3);
}
