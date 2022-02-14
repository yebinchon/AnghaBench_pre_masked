
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ word ;
typedef void* dword ;
typedef int diva_strace_library_interface_t ;
struct TYPE_12__ {TYPE_2__* hDbg; int logical; } ;
typedef TYPE_3__ diva_maint_client_t ;
struct TYPE_13__ {int data_length; scalar_t__ di_cpu; int drv_id; int dli; int facility; void* time_usec; void* time_sec; scalar_t__ sequence; } ;
typedef TYPE_4__ diva_dbg_entry_head_t ;
typedef scalar_t__ byte ;
struct TYPE_10__ {scalar_t__ id; } ;
struct TYPE_15__ {int logical; int * pIdiLib; TYPE_1__ Dbg; } ;
struct TYPE_14__ {int code; } ;
struct TYPE_11__ {int id; } ;
typedef TYPE_5__ MI_XLOG_HDR ;


 int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (void**,void**) ;
 int FUNC_3 (TYPE_4__*,void*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_9 (void* VAR_7,
                                     diva_strace_library_interface_t* VAR_8,
                                     int VAR_9,
                                     void* VAR_10,
                                     int VAR_11) {
  diva_maint_client_t* VAR_12 = (diva_maint_client_t*)VAR_7;
  diva_dbg_entry_head_t* VAR_13;
  word VAR_14;
  dword VAR_15, VAR_16;
  int VAR_17 = VAR_2;
  int VAR_18 = VAR_3;




  if ((VAR_18 >= 0) && (VAR_17 >= 0) && (VAR_18 < FUNC_0(VAR_4)) &&
      (VAR_4[VAR_18].Dbg.id == (byte)VAR_18) && (VAR_4[VAR_18].pIdiLib == VAR_8)) {
    const char* VAR_19 = ((void*)0);
    int VAR_20 = -1;
    MI_XLOG_HDR *VAR_21 = (MI_XLOG_HDR *)VAR_10;

    if (VAR_9 != VAR_4[VAR_18].logical) {
      return;
    }

    if (VAR_21->code == 24) {
      VAR_19 = (char*)&VAR_21->code;
      VAR_19 += 2;
    }





    if (VAR_19 && VAR_19[0] == '[') {
      if (VAR_19[2] == ',') {
        VAR_19 += 3;
        VAR_20 = *VAR_19 - '0';
      } else if (VAR_19[3] == ',') {
        VAR_19 += 4;
        VAR_20 = *VAR_19 - '0';
      }
      if (VAR_20 >= 0) {
        if (VAR_19[2] == ']') {
          VAR_20 = VAR_20 * 10 + VAR_19[1] - '0';
        }
        if (VAR_20 != VAR_17) {
          return;
        }
      }
    }

 } else if (VAR_1[0] != 0) {
    return;
  }

  FUNC_2 (&VAR_15, &VAR_16);

  while (!(VAR_13 = (diva_dbg_entry_head_t*)FUNC_4 (VAR_5,
                              (word)VAR_11+sizeof(*VAR_13)))) {
    if ((VAR_13 = (diva_dbg_entry_head_t*)FUNC_8 (VAR_5, &VAR_14))) {
      FUNC_7 (VAR_5);
    } else {
      break;
    }
  }
  if (VAR_13) {
    FUNC_3 (&VAR_13[1], VAR_10, VAR_11);
    VAR_13->sequence = VAR_6++;
    VAR_13->time_sec = VAR_15;
    VAR_13->time_usec = VAR_16;
    VAR_13->facility = VAR_0;
    VAR_13->dli = VAR_12->logical;
    VAR_13->drv_id = VAR_12->hDbg->id;
    VAR_13->di_cpu = 0;
    VAR_13->data_length = VAR_11;
    FUNC_5 (VAR_13);
    if (FUNC_6(VAR_5)) {
      FUNC_1();
    }
  }
}
