
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int options; int missing_ok; int sequence; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ AlterSeqStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__*,int *) ;

void
FUNC_8(AlterSeqStmt *VAR_6)
{
 Oid VAR_7 = FUNC_2(VAR_6->sequence, VAR_0,
           VAR_6->missing_ok);
 bool VAR_8 = 0;
 Oid VAR_9 = VAR_5;
 Oid VAR_10 = VAR_5;
 int32 VAR_11 = 0;
 bool VAR_12 = 0;


 if (VAR_7 == VAR_5)
 {
  return;
 }

 VAR_8 = FUNC_7(VAR_7, VAR_1, &VAR_9,
         &VAR_11);
 if (!VAR_8)
 {
  VAR_8 = FUNC_7(VAR_7, VAR_2, &VAR_9,
          &VAR_11);
 }


 if (VAR_8)
 {
  VAR_12 = FUNC_0(VAR_9);
 }

 if (FUNC_1(VAR_6->options, &VAR_10))
 {

  if (VAR_12 && VAR_9 != VAR_10)
  {
   FUNC_3(VAR_4, (FUNC_4(VAR_3),
       FUNC_6("cannot alter OWNED BY option of a sequence "
           "already owned by a distributed table")));
  }
  else if (!VAR_12 && FUNC_0(VAR_10))
  {

   FUNC_3(VAR_4, (FUNC_4(VAR_3),
       FUNC_6("cannot associate an existing sequence with a "
           "distributed table"),
       FUNC_5("Use a sequence in a distributed table by specifying "
         "a serial column type before creating any shards.")));
  }
 }
}
