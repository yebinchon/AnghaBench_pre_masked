
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {scalar_t__ command; int payload; } ;
struct TYPE_10__ {scalar_t__ code; int qhandle; scalar_t__ numOfRows; } ;
struct TYPE_11__ {int param; int (* fp ) (int ,TYPE_2__*,int ) ;TYPE_1__ res; TYPE_3__ cmd; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (char*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(SSqlObj *VAR_7) {
  SSqlCmd *VAR_8 = &VAR_7->cmd;

  if (VAR_8->command == VAR_1) {
    VAR_7->res.code = (uint8_t)FUNC_2(VAR_8->payload);
  } else if (VAR_8->command == VAR_2) {
    VAR_7->res.code = (uint8_t)FUNC_4(VAR_7);
  } else if (VAR_8->command == VAR_5) {
    VAR_7->res.code = (uint8_t)FUNC_5(VAR_7);
  } else if (VAR_8->command == VAR_4) {




    VAR_7->res.qhandle = 0x1;
    VAR_7->res.numOfRows = 0;
  } else if (VAR_8->command == VAR_3) {
    FUNC_1(VAR_6);
  } else {
    VAR_7->res.code = VAR_0;
    FUNC_3("%p not support command:%d", VAR_7, VAR_8->command);
  }


  int32_t VAR_9 = VAR_7->res.code;

  if (VAR_7->fp != ((void*)0)) {
    if (VAR_9 == 0) {
      (*VAR_7->fp)(VAR_7->param, VAR_7, 0);
    } else {
      FUNC_6(VAR_7);
    }
  }

  return VAR_9;
}
