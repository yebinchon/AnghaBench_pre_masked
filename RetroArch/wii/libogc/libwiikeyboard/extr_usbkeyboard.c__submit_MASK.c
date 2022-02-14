
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int USBKeyboard_eventType ;
struct TYPE_4__ {int keyCode; int type; } ;
typedef TYPE_1__ USBKeyboard_event ;
struct TYPE_5__ {int (* cb ) (TYPE_1__) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_1__) ;

__attribute__((used)) static void FUNC_1(USBKeyboard_eventType VAR_1, u8 VAR_2)
{
 if (!VAR_0->cb)
  return;

 USBKeyboard_event VAR_3;
 VAR_3.type = VAR_1;
 VAR_3.keyCode = VAR_2;

 VAR_0->cb(VAR_3);
}
