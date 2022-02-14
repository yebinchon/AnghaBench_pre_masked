
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int fdwname; } ;
struct TYPE_8__ {int fdwid; } ;
struct TYPE_7__ {int serverid; } ;
typedef int Oid ;
typedef TYPE_1__ ForeignTable ;
typedef TYPE_2__ ForeignServer ;
typedef TYPE_3__ ForeignDataWrapper ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_1 ;
 char VAR_2 ;
 char FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

bool
FUNC_5(Oid VAR_3)
{
 bool VAR_4 = 0;

 char VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 == VAR_2)
 {
  ForeignTable *VAR_6 = FUNC_2(VAR_3);
  ForeignServer *VAR_7 = FUNC_1(VAR_6->serverid);
  ForeignDataWrapper *VAR_8 = FUNC_0(VAR_7->fdwid);

  if (FUNC_4(VAR_8->fdwname, VAR_0, VAR_1) == 0)
  {
   VAR_4 = 1;
  }
 }

 return VAR_4;
}
