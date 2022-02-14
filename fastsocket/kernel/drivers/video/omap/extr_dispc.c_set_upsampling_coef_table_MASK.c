
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; } ;
typedef TYPE_1__ u32 ;


 int FUNC_0 (int,int,TYPE_1__ const) ;
 int FUNC_1 (int,int,TYPE_1__ const) ;

__attribute__((used)) static void FUNC_2(int VAR_0)
{
 const u32 VAR_1[][2] = {
  { 0x00800000, 0x00800000 },
  { 0x0D7CF800, 0x037B02FF },
  { 0x1E70F5FF, 0x0C6F05FE },
  { 0x335FF5FE, 0x205907FB },
  { 0xF74949F7, 0x00404000 },
  { 0xF55F33FB, 0x075920FE },
  { 0xF5701EFE, 0x056F0CFF },
  { 0xF87C0DFF, 0x027B0300 },
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  FUNC_0(VAR_0, VAR_2, VAR_1[VAR_2][0]);
  FUNC_1(VAR_0, VAR_2, VAR_1[VAR_2][1]);
 }
}
