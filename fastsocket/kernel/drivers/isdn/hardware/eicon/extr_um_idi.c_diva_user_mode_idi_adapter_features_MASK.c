
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* request ) (int *) ;int channels; int features; int type; } ;
struct TYPE_12__ {TYPE_2__ d; } ;
typedef TYPE_4__ diva_um_idi_adapter_t ;
struct TYPE_13__ {scalar_t__ serial_number; int name; int channels; int features; int type; } ;
typedef TYPE_5__ diva_um_idi_adapter_features_t ;
struct TYPE_11__ {scalar_t__ serial; int Rc; scalar_t__ Req; } ;
struct TYPE_9__ {int name; int Rc; scalar_t__ Req; } ;
struct TYPE_14__ {TYPE_3__ GetSerial; TYPE_1__ GetName; } ;
typedef TYPE_6__ IDI_SYNC_REQ ;
typedef int ENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(diva_um_idi_adapter_t * VAR_2,
        diva_um_idi_adapter_features_t *
        VAR_3)
{
 IDI_SYNC_REQ VAR_4;

 if ((VAR_2) && (VAR_2->d.request)) {
  VAR_3->type = VAR_2->d.type;
  VAR_3->features = VAR_2->d.features;
  VAR_3->channels = VAR_2->d.channels;
  FUNC_0(VAR_3->name, 0, sizeof(VAR_3->name));

  VAR_4.GetName.Req = 0;
  VAR_4.GetName.Rc = VAR_0;
  (*(VAR_2->d.request)) ((ENTITY *) & VAR_4);
  FUNC_1(VAR_3->name, VAR_4.GetName.name,
   sizeof(VAR_3->name));

  VAR_4.GetSerial.Req = 0;
  VAR_4.GetSerial.Rc = VAR_1;
  VAR_4.GetSerial.serial = 0;
  (*(VAR_2->d.request)) ((ENTITY *) & VAR_4);
  VAR_3->serial_number = VAR_4.GetSerial.serial;
 }

 return ((VAR_2) ? 0 : -1);
}
