
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Word; } ;
struct TYPE_6__ {TYPE_1__ FWVersion; } ;
struct TYPE_7__ {TYPE_2__ facts; } ;
typedef TYPE_3__ MPT_ADAPTER ;


 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, MPT_ADAPTER *VAR_1)
{
 VAR_0[0] ='\0';
 if ((VAR_1->facts.FWVersion.Word >> 24) == 0x0E) {
  FUNC_0(VAR_0, " (Exp %02d%02d)",
   (VAR_1->facts.FWVersion.Word >> 16) & 0x00FF,
   (VAR_1->facts.FWVersion.Word >> 8) & 0x1F);


  if ((VAR_1->facts.FWVersion.Word >> 8) & 0x80)
   FUNC_1(VAR_0, " [MDBG]");
 }
}
