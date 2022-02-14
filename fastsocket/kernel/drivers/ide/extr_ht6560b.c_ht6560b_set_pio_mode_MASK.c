
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (TYPE_1__*,int const) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (char*,int ,int const,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(ide_drive_t *VAR_1, const u8 VAR_2)
{
 unsigned long VAR_3, VAR_4;
 u8 VAR_5;

 switch (VAR_2) {
 case 8:
 case 9:
  FUNC_1(VAR_1, VAR_2 & 1);
  return;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2);

 FUNC_5(&VAR_0, VAR_3);
 VAR_4 = (unsigned long)FUNC_2(VAR_1);
 VAR_4 &= 0xff00;
 VAR_4 |= VAR_5;
 FUNC_3(VAR_1, (void *)VAR_4);
 FUNC_6(&VAR_0, VAR_3);




}
