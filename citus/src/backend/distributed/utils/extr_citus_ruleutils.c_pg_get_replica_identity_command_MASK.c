
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* rd_rel; } ;
struct TYPE_10__ {scalar_t__ len; char* data; } ;
struct TYPE_9__ {char relreplident; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,char*,char*,...) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (int ) ;

char *
FUNC_9(Oid VAR_4)
{
 Relation VAR_5 = ((void*)0);
 StringInfo VAR_6 = FUNC_7();
 char *VAR_7 = ((void*)0);
 char VAR_8 = 0;

 VAR_5 = FUNC_6(VAR_4, VAR_0);

 VAR_8 = VAR_5->rd_rel->relreplident;

 VAR_7 = FUNC_3(VAR_4);

 if (VAR_8 == VAR_2)
 {
  Oid VAR_9 = FUNC_1(VAR_5);

  if (FUNC_0(VAR_9))
  {
   FUNC_2(VAR_6, "ALTER TABLE %s REPLICA IDENTITY USING INDEX %s ",
        VAR_7,
        FUNC_8(FUNC_4(VAR_9)));
  }
 }
 else if (VAR_8 == VAR_3)
 {
  FUNC_2(VAR_6, "ALTER TABLE %s REPLICA IDENTITY NOTHING",
       VAR_7);
 }
 else if (VAR_8 == VAR_1)
 {
  FUNC_2(VAR_6, "ALTER TABLE %s REPLICA IDENTITY FULL",
       VAR_7);
 }

 FUNC_5(VAR_5, VAR_0);

 return (VAR_6->len > 0) ? VAR_6->data : ((void*)0);
}
