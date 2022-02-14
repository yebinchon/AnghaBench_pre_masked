
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int fdwname; } ;
struct TYPE_12__ {int fdwid; } ;
struct TYPE_11__ {int serverid; } ;
struct TYPE_10__ {char* data; int member_3; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef TYPE_2__ ForeignTable ;
typedef TYPE_3__ ForeignServer ;
typedef TYPE_4__ ForeignDataWrapper ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;

char *
FUNC_13(Oid VAR_2)
{
 ForeignTable *VAR_3 = FUNC_2(VAR_2);
 ForeignServer *VAR_4 = FUNC_1(VAR_3->serverid);
 ForeignDataWrapper *VAR_5 = FUNC_0(VAR_4->fdwid);
 StringInfoData VAR_6 = { ((void*)0), 0, 0, 0 };

 Oid VAR_7 = VAR_0;
 Oid VAR_8 = VAR_4->fdwid;

 Oid VAR_9 = FUNC_7(VAR_7, VAR_8);
 if (FUNC_3(VAR_9))
 {
  char *VAR_10 = FUNC_8(VAR_9);
  Oid VAR_11 = FUNC_9(VAR_9);
  char *VAR_12 = FUNC_10(VAR_11);

  FUNC_11(&VAR_6);
  FUNC_4(&VAR_6, "CREATE EXTENSION IF NOT EXISTS %s WITH SCHEMA %s",
       FUNC_12(VAR_10),
       FUNC_12(VAR_12));
 }
 else
 {
  FUNC_5(VAR_1, (FUNC_6("foreign-data wrapper \"%s\" does not have an "
        "extension defined", VAR_5->fdwname)));
 }

 return (VAR_6.data);
}
