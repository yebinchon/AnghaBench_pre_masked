
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int
FUNC_5(TupleDesc VAR_3, const char *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 == VAR_2)
 {
  FUNC_2(VAR_1, (FUNC_3(VAR_0),
      FUNC_4("could not find column name \"%s\"", VAR_4)));
 }

 FUNC_0(VAR_5 >= 1);
 return VAR_5;
}
