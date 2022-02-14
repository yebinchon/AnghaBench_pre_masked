
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t phase; } ;
struct TYPE_5__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ FAS216_Info ;


 size_t FUNC_0 (char const**) ;
__attribute__((used)) static const char *FUNC_1(FAS216_Info *VAR_0)
{
 static const char *VAR_1[] = {
  [134] = "idle",
  [129] = "selection",
  [138] = "command",
  [136] = "data out",
  [137] = "data in",
  [133] = "message in",
  [132]= "disconnect",
  [130] = "expect message out",
  [131] = "message out",
  [128] = "status",
  [135] = "done",
 };

 if (VAR_0->scsi.phase < FUNC_0(VAR_1) &&
     VAR_1[VAR_0->scsi.phase])
  return VAR_1[VAR_0->scsi.phase];
 return "???";
}
