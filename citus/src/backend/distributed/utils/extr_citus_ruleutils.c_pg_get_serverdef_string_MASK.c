
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int fdwname; } ;
struct TYPE_13__ {int options; int * serverversion; int * servertype; int servername; int fdwid; } ;
struct TYPE_12__ {int serverid; } ;
struct TYPE_11__ {char* data; int member_3; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef TYPE_2__ ForeignTable ;
typedef TYPE_3__ ForeignServer ;
typedef TYPE_4__ ForeignDataWrapper ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

char *
FUNC_8(Oid VAR_0)
{
 ForeignTable *VAR_1 = FUNC_3(VAR_0);
 ForeignServer *VAR_2 = FUNC_2(VAR_1->serverid);
 ForeignDataWrapper *VAR_3 = FUNC_1(VAR_2->fdwid);

 StringInfoData VAR_4 = { ((void*)0), 0, 0, 0 };
 FUNC_5(&VAR_4);

 FUNC_4(&VAR_4, "CREATE SERVER %s", FUNC_6(VAR_2->servername));
 if (VAR_2->servertype != ((void*)0))
 {
  FUNC_4(&VAR_4, " TYPE %s",
       FUNC_7(VAR_2->servertype));
 }
 if (VAR_2->serverversion != ((void*)0))
 {
  FUNC_4(&VAR_4, " VERSION %s",
       FUNC_7(VAR_2->serverversion));
 }

 FUNC_4(&VAR_4, " FOREIGN DATA WRAPPER %s",
      FUNC_6(VAR_3->fdwname));


 FUNC_0(&VAR_4, VAR_2->options);

 return (VAR_4.data);
}
