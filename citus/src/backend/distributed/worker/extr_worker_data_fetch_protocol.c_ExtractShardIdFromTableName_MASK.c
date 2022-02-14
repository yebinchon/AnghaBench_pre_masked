
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,char**,int ) ;
 char* FUNC_3 (char const*,int ) ;

uint64
FUNC_4(const char *VAR_4, bool VAR_5)
{
 uint64 VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);


 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (VAR_7 == ((void*)0) && !VAR_5)
 {
  FUNC_0(VAR_0, (FUNC_1("could not extract shardId from table name \"%s\"",
          VAR_4)));
 }
 else if (VAR_7 == ((void*)0) && VAR_5)
 {
  return VAR_1;
 }

 VAR_7++;

 VAR_3 = 0;
 VAR_6 = FUNC_2(VAR_7, &VAR_8, 0);

 if (VAR_3 != 0 || (*VAR_8 != '\0'))
 {
  if (!VAR_5)
  {
   FUNC_0(VAR_0, (FUNC_1("could not extract shardId from table name \"%s\"",
           VAR_4)));
  }
  else
  {
   return VAR_1;
  }
 }

 return VAR_6;
}
