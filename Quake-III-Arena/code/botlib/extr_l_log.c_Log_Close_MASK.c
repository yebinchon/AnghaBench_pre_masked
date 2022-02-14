
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Print ) (int ,char*,int ) ;} ;
struct TYPE_3__ {int filename; int * fp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(void)
{
 if (!VAR_3.fp) return;
 if (FUNC_0(VAR_3.fp))
 {
  VAR_2.Print(VAR_0, "can't close log file %s\n", VAR_3.filename);
  return;
 }
 VAR_3.fp = ((void*)0);
 VAR_2.Print(VAR_1, "Closed log %s\n", VAR_3.filename);
}
