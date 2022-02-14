
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; } ;
typedef int Oid ;
typedef TYPE_1__ CreateSeqStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

void
FUNC_6(CreateSeqStmt *VAR_3)
{
 Oid VAR_4 = VAR_2;


 if (FUNC_1(VAR_3->options, &VAR_4))
 {
  if (FUNC_0(VAR_4))
  {
   FUNC_2(VAR_1, (FUNC_3(VAR_0),
       FUNC_5("cannot create sequences that specify a distributed "
           "table in their OWNED BY option"),
       FUNC_4("Use a sequence in a distributed table by specifying "
         "a serial column type before creating any shards.")));
  }
 }
}
