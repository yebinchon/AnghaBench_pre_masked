
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int features ;
struct TYPE_14__ {int (* request ) (TYPE_4__*) ;scalar_t__ Id; } ;
struct TYPE_13__ {scalar_t__* user; } ;
struct TYPE_10__ {int buffer_length_in_bytes; char* features; } ;
struct TYPE_11__ {TYPE_1__ info; int Rc; scalar_t__ Req; } ;
struct TYPE_12__ {TYPE_2__ xdi_extended_features; } ;
typedef TYPE_3__ IDI_SYNC_REQ ;
typedef TYPE_4__ ENTITY ;
typedef TYPE_5__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4 (DIVA_CAPI_ADAPTER * VAR_11) {
  IDI_SYNC_REQ * VAR_12;
    char VAR_13[ ((sizeof(VAR_12->xdi_extended_features)+4) > sizeof(ENTITY)) ? (sizeof(VAR_12->xdi_extended_features)+4) : sizeof(ENTITY)];

    char VAR_14[4];
  VAR_12 = (IDI_SYNC_REQ *)&VAR_13[0];

  if (!VAR_10) {
    ENTITY * VAR_15 = (ENTITY *)VAR_12;
    VAR_10 |= 0x80000000;

    VAR_15->user[0] = VAR_11->Id - 1;
    VAR_12->xdi_extended_features.Req = 0;
    VAR_12->xdi_extended_features.Rc = VAR_9;
    VAR_12->xdi_extended_features.info.buffer_length_in_bytes = sizeof(VAR_14);
    VAR_12->xdi_extended_features.info.features = &VAR_14[0];

    (*(VAR_11->request))(VAR_15);

    if (VAR_14[0] & VAR_4) {



      if (VAR_14[0] & VAR_5) {
        VAR_10 |= VAR_0;
      }
      if (VAR_14[0] & VAR_7) {
        VAR_10 |= VAR_2;
        FUNC_0(1,FUNC_2("XDI provides RxDMA"));
      }
      if (VAR_14[0] & VAR_8) {
        VAR_10 |= VAR_3;
      }
      if (VAR_14[0] & VAR_6) {
        VAR_10 |= VAR_1;
        FUNC_0(3,FUNC_2("XDI provides NO_CANCEL_RC feature"));
      }

    }
  }

  FUNC_1 (VAR_11, VAR_12);
}
