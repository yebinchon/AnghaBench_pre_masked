
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int screen_w; } ;
struct TYPE_4__ {int viWidth; int viXOrigin; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
  VAR_2->viWidth = VAR_1.screen_w;
  VAR_2->viXOrigin = (VAR_0 -VAR_1.screen_w)/2;
  FUNC_0(VAR_2);
  FUNC_1();
}
