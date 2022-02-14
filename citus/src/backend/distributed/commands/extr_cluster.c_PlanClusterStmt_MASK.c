
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * relation; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ ClusterStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

List *
FUNC_5(ClusterStmt *VAR_4, const char *VAR_5)
{
 bool VAR_6 = 0;


 if (VAR_4->relation == ((void*)0))
 {
  VAR_6 = 1;
 }
 else
 {
  Oid VAR_7 = VAR_1;
  bool VAR_8 = 0;

  VAR_7 = FUNC_2(VAR_4->relation, VAR_0,
           VAR_8);

  if (FUNC_1(VAR_7))
  {
   VAR_6 = FUNC_0(VAR_7);
  }
 }

 if (VAR_6)
 {
  FUNC_3(VAR_3, (FUNC_4("not propagating CLUSTER command to worker nodes")));
 }

 return VAR_2;
}
