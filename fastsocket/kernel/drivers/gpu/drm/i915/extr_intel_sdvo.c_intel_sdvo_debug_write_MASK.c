
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct intel_sdvo {int dummy; } ;
struct TYPE_3__ {scalar_t__ cmd; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct intel_sdvo*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct intel_sdvo *VAR_1, u8 VAR_2,
       const void *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_1("%s: W: %02X ",
    FUNC_3(VAR_1), VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_2("%02X ", ((u8 *)VAR_3)[VAR_5]);
 for (; VAR_5 < 8; VAR_5++)
  FUNC_2("   ");
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  if (VAR_2 == VAR_0[VAR_5].cmd) {
   FUNC_2("(%s)", VAR_0[VAR_5].name);
   break;
  }
 }
 if (VAR_5 == FUNC_0(VAR_0))
  FUNC_2("(%02X)", VAR_2);
 FUNC_2("\n");
}
