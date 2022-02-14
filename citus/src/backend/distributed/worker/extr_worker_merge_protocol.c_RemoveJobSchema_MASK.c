
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ objectSubId; int objectId; int classId; int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(StringInfo VAR_13)
{
 Datum VAR_14 = FUNC_0(VAR_13->data);
 Oid VAR_15 = VAR_5;

 VAR_15 = FUNC_2(VAR_6, VAR_1,
          VAR_14);
 if (FUNC_4(VAR_15))
 {
  ObjectAddress VAR_16 = { 0, 0, 0 };

  bool VAR_17 = FUNC_9(VAR_15, FUNC_3());
  if (!VAR_17)
  {
   FUNC_5(VAR_0, VAR_8, VAR_13->data);
  }

  VAR_16.classId = VAR_7;
  VAR_16.objectId = VAR_15;
  VAR_16.objectSubId = 0;







  FUNC_8(&VAR_16, VAR_3,
      VAR_9 |
      VAR_10 |
      VAR_12 |
      VAR_11);

  FUNC_1();


  FUNC_8(&VAR_16, VAR_4, 0);
  FUNC_1();
 }
 else
 {
  FUNC_6(VAR_2, (FUNC_7("schema \"%s\" does not exist, skipping",
        VAR_13->data)));
 }
}
