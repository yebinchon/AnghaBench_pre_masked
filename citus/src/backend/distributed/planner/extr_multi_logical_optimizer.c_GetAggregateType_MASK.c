
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32 ;
typedef char* Oid ;
typedef size_t AggregateType ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 char** VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;
 size_t FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (char const*,char*,int ) ;

__attribute__((used)) static AggregateType
FUNC_7(Oid VAR_5)
{
 char *VAR_6 = ((void*)0);
 uint32 VAR_7 = 0;
 uint32 VAR_8 = 0;
 bool VAR_9 = 0;


 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == ((void*)0))
 {
  FUNC_2(VAR_3, (FUNC_3("citus cache lookup failed for function %u",
          VAR_5)));
 }

 VAR_7 = FUNC_5(VAR_2);

 FUNC_1(VAR_1 == 0);

 for (VAR_8 = 1; VAR_8 < VAR_7; VAR_8++)
 {
  const char *VAR_10 = VAR_2[VAR_8];
  if (FUNC_6(VAR_10, VAR_6, VAR_4) == 0)
  {
   VAR_9 = 1;
   break;
  }
 }

 if (!VAR_9)
 {
  if (FUNC_0(VAR_5))
  {
   return VAR_0;
  }

  FUNC_2(VAR_3, (FUNC_3("unsupported aggregate function %s", VAR_6)));
 }

 return VAR_8;
}
