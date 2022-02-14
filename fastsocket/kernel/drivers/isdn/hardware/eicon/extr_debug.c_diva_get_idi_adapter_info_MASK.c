
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ dword ;
struct TYPE_6__ {scalar_t__ serial; int Rc; scalar_t__ Req; } ;
struct TYPE_5__ {scalar_t__ logical_adapter_number; } ;
struct TYPE_7__ {TYPE_1__ info; int Rc; scalar_t__ Req; } ;
struct TYPE_8__ {TYPE_2__ GetSerial; TYPE_3__ xdi_logical_adapter_number; } ;
typedef TYPE_4__ IDI_SYNC_REQ ;
typedef int (* IDI_CALL ) (int *) ;
typedef int ENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (IDI_CALL VAR_2, dword* VAR_3, dword* VAR_4) {
  IDI_SYNC_REQ VAR_5;

  VAR_5.xdi_logical_adapter_number.Req = 0;
  VAR_5.xdi_logical_adapter_number.Rc = VAR_1;
  (*VAR_2)((ENTITY *)&VAR_5);
  *VAR_4 = VAR_5.xdi_logical_adapter_number.info.logical_adapter_number;

  VAR_5.GetSerial.Req = 0;
  VAR_5.GetSerial.Rc = VAR_0;
  VAR_5.GetSerial.serial = 0;
  (*VAR_2)((ENTITY *)&VAR_5);
 *VAR_3 = VAR_5.GetSerial.serial;

  return (0);
}
