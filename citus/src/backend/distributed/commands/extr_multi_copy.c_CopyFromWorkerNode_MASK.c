
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
struct TYPE_12__ {char* schemaname; } ;
struct TYPE_11__ {TYPE_4__* relation; } ;
struct TYPE_10__ {char* nodeName; int nodePort; } ;
typedef int Oid ;
typedef TYPE_1__ NodeAddress ;
typedef TYPE_2__ CopyStmt ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 char FUNC_5 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_12(CopyStmt *VAR_6, char *VAR_7)
{
 NodeAddress *VAR_8 = FUNC_4(VAR_6);
 char *VAR_9 = VAR_8->nodeName;
 int32 VAR_10 = VAR_8->nodePort;
 Oid VAR_11 = VAR_3;
 char VAR_12 = 0;
 char *VAR_13 = ((void*)0);
 uint32 VAR_14 = VAR_2;

 VAR_5 = FUNC_2(VAR_14, VAR_9, VAR_10);
 FUNC_3(VAR_5);
 FUNC_0(VAR_5);

 FUNC_7(VAR_5);


 VAR_13 = VAR_6->relation->schemaname;
 VAR_6->relation->schemaname = ((void*)0);

 VAR_11 = FUNC_6(VAR_6->relation, VAR_4, 0);


 VAR_6->relation->schemaname = VAR_13;
 VAR_12 = FUNC_5(VAR_6->relation);
 if (VAR_12 != VAR_0)
 {
  FUNC_10(VAR_1, (FUNC_11("copy from worker nodes is only supported "
          "for append-partitioned tables")));
 }





 FUNC_8(VAR_6);

 FUNC_1(VAR_6, VAR_7, VAR_11);

 FUNC_9(VAR_5);
 VAR_5 = ((void*)0);
}
