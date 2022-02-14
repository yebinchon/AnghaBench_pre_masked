
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* activeApp; scalar_t__ isMinimized; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_3(BOOL VAR_3, BOOL VAR_4)
{
 VAR_0.isMinimized = VAR_4;

 FUNC_0("VID_AppActivate: %i\n", VAR_3 );

 FUNC_2();


 if (VAR_3 && !VAR_0.isMinimized )
 {
  VAR_0.activeApp = VAR_2;
 }
 else
 {
  VAR_0.activeApp = VAR_1;
 }


 if (!VAR_0.activeApp )
 {
  FUNC_1 (VAR_1);
 }
 else
 {
  FUNC_1 (VAR_2);
 }
}
