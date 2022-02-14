
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int buf ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {int host_no; } ;
typedef TYPE_2__ FAS216_Info ;


 int FUNC_0 (char*,int ,char,char*) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_2(FAS216_Info *VAR_0, char VAR_1, char *VAR_2, va_list VAR_3)
{
 static char VAR_4[1024];

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2, VAR_3);
 FUNC_0("scsi%d.%c: %s", VAR_0->host->host_no, VAR_1, VAR_4);
}
