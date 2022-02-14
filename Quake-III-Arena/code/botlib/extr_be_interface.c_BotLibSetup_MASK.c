
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int (* Print ) (int ,char*,char*) ;} ;
struct TYPE_3__ {int botlibsetup; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;

qboolean FUNC_1(char *VAR_5)
{
 if (!VAR_2.botlibsetup)
 {
  VAR_1.Print(VAR_0, "%s: bot library used before being setup\n", VAR_5);
  return VAR_3;
 }
 return VAR_4;
}
