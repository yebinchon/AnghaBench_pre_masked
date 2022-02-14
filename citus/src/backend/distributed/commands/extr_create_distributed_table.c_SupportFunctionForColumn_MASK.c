
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_3__ {scalar_t__ vartype; } ;
typedef TYPE_1__ Var ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static Oid
FUNC_10(Var *VAR_3, Oid VAR_4,
       int16 VAR_5)
{
 Oid VAR_6 = VAR_2;
 Oid VAR_7 = VAR_2;
 Oid VAR_8 = VAR_2;
 Oid VAR_9 = VAR_3->vartype;
 Oid VAR_10 = FUNC_0(VAR_9, VAR_4);


 if (VAR_10 == VAR_2)
 {
  FUNC_1(VAR_1, (FUNC_2(VAR_0),
      FUNC_5("data type %s has no default operator class for specified"
          " partition method", FUNC_6(VAR_9)),
      FUNC_3(VAR_9),
      FUNC_4("Partition column types must have a default operator"
          " class defined.")));
 }

 VAR_6 = FUNC_7(VAR_10);
 VAR_8 = FUNC_8(VAR_10);
 VAR_7 = FUNC_9(VAR_6, VAR_8,
             VAR_8,
             VAR_5);

 return VAR_7;
}
