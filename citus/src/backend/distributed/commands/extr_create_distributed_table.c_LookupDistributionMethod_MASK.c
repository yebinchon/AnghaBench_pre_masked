
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enumlabel; } ;
typedef char const* Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_enum ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int ) ;

__attribute__((used)) static char
FUNC_9(Oid VAR_6)
{
 HeapTuple VAR_7 = ((void*)0);
 Form_pg_enum VAR_8 = ((void*)0);
 char VAR_9 = 0;
 const char *VAR_10 = ((void*)0);

 VAR_7 = FUNC_5(VAR_3, FUNC_3(VAR_6));
 if (!FUNC_1(VAR_7))
 {
  FUNC_6(VAR_4, (FUNC_7("invalid internal value for enum: %u",
          VAR_6)));
 }

 VAR_8 = (Form_pg_enum) FUNC_0(VAR_7);
 VAR_10 = FUNC_2(VAR_8->enumlabel);

 if (FUNC_8(VAR_10, "append", VAR_5) == 0)
 {
  VAR_9 = VAR_0;
 }
 else if (FUNC_8(VAR_10, "hash", VAR_5) == 0)
 {
  VAR_9 = VAR_1;
 }
 else if (FUNC_8(VAR_10, "range", VAR_5) == 0)
 {
  VAR_9 = VAR_2;
 }
 else
 {
  FUNC_6(VAR_4, (FUNC_7("invalid label for enum: %s", VAR_10)));
 }

 FUNC_4(VAR_7);

 return VAR_9;
}
