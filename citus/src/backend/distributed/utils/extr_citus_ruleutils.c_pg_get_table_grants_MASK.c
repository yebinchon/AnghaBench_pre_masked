
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ ai_grantee; } ;
struct TYPE_11__ {int rolname; } ;
struct TYPE_10__ {int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_authid ;
typedef int Datum ;
typedef int AclMode ;
typedef TYPE_3__ AclItem ;
typedef int Acl ;


 int FUNC_0 (TYPE_3__) ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *,int ,int*) ;
 int FUNC_12 (TYPE_1__*,char*,char*,...) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,scalar_t__) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,scalar_t__) ;
 char* FUNC_18 (scalar_t__,int *) ;
 int FUNC_19 (TYPE_1__*) ;
 int * FUNC_20 (int *,int ) ;
 int FUNC_21 (int ) ;
 char* FUNC_22 (int ) ;
 int FUNC_23 (int *,int ) ;
 int * FUNC_24 (scalar_t__,int ) ;
 int FUNC_25 (TYPE_1__*) ;

List *
FUNC_26(Oid VAR_9)
{

 StringInfoData VAR_10;
 Relation VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 List *VAR_13 = VAR_5;
 HeapTuple VAR_14 = ((void*)0);
 Datum VAR_15 = 0;
 bool VAR_16 = 0;

 VAR_11 = FUNC_24(VAR_9, VAR_1);
 VAR_12 = FUNC_18(VAR_9, VAR_5);

 FUNC_19(&VAR_10);


 VAR_14 = FUNC_10(VAR_8, FUNC_8(VAR_9));
 if (!FUNC_6(VAR_14))
 {
  FUNC_15(VAR_4,
    (FUNC_16(VAR_3),
     FUNC_17("relation with OID %u does not exist",
      VAR_9)));
 }

 VAR_15 = FUNC_11(VAR_8, VAR_14, VAR_2,
          &VAR_16);

 FUNC_9(VAR_14);

 if (!VAR_16)
 {
  int VAR_17 = 0;
  AclItem *VAR_18 = ((void*)0);
  Acl *VAR_19 = ((void*)0);
  int VAR_20 = 0;
  FUNC_12(&VAR_10, "REVOKE ALL ON %s FROM PUBLIC",
       VAR_12);
  VAR_13 = FUNC_20(VAR_13, FUNC_21(VAR_10.data));
  FUNC_25(&VAR_10);



  VAR_19 = FUNC_4(VAR_15);
  VAR_18 = FUNC_2(VAR_19);

  VAR_20 = -1;
  VAR_17 = 0;
  while (VAR_17 < FUNC_3(VAR_19))
  {
   AclItem *VAR_21 = ((void*)0);
   AclMode VAR_22 = 0;

   VAR_20++;

   if (VAR_20 == VAR_6)
   {
    VAR_20 = 0;
    VAR_17++;
    if (VAR_17 >= FUNC_3(VAR_19))
    {
     break;
    }
   }

   VAR_21 = &VAR_18[VAR_17];
   VAR_22 = 1 << VAR_20;

   if (FUNC_1(*VAR_21) & VAR_22)
   {
    const char *VAR_23 = ((void*)0);
    const char *VAR_24 = "";

    if (VAR_21->ai_grantee != 0)
    {
     HeapTuple VAR_25;

     VAR_25 = FUNC_10(VAR_0, FUNC_8(VAR_21->ai_grantee));
     if (FUNC_6(VAR_25))
     {
      Form_pg_authid VAR_26 = ((Form_pg_authid) FUNC_5(VAR_25));

      VAR_23 = FUNC_22(FUNC_7(VAR_26->rolname));

      FUNC_9(VAR_25);
     }
     else
     {
      FUNC_14(VAR_4, "cache lookup failed for role %u", VAR_21->ai_grantee);
     }
    }
    else
    {
     VAR_23 = "PUBLIC";
    }

    if ((FUNC_0(*VAR_21) & VAR_22) != 0)
    {
     VAR_24 = " WITH GRANT OPTION";
    }

    FUNC_12(&VAR_10, "GRANT %s ON %s TO %s%s",
         FUNC_13(VAR_22),
         VAR_12,
         VAR_23,
         VAR_24);

    VAR_13 = FUNC_20(VAR_13, FUNC_21(VAR_10.data));

    FUNC_25(&VAR_10);
   }
  }
 }

 FUNC_25(&VAR_10);

 FUNC_23(VAR_11, VAR_7);
 return VAR_13;

}
