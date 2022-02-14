
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cm_supported; int handle; } ;


 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(int VAR_2, const char *VAR_3)
{
 int VAR_4;



 if (!(VAR_1->cm_supported & (1 << VAR_2))
     && !FUNC_1(VAR_1->handle, VAR_0[VAR_2], &VAR_4)) {
  FUNC_0("%s (%x) not reported by BIOS,"
   " enabling anyway\n", VAR_3, 1 << VAR_2);
  VAR_1->cm_supported |= 1 << VAR_2;
 }
}
