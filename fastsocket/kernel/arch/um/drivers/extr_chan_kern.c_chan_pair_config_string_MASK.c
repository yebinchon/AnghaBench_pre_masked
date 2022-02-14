
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chan {int dummy; } ;


 int FUNC_0 (char*,int,int,char*,int) ;
 int FUNC_1 (struct chan*,char*,int,char**) ;

__attribute__((used)) static int FUNC_2(struct chan *VAR_0, struct chan *VAR_1,
       char *VAR_2, int VAR_3, char **VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
 VAR_2 += VAR_5;
 VAR_3 -= VAR_5;

 if (VAR_0 == VAR_1) {
  FUNC_0(VAR_2, VAR_3, VAR_5, "", 1);
  return VAR_5;
 }

 FUNC_0(VAR_2, VAR_3, VAR_5, ",", 1);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_2 += VAR_5;
 VAR_3 -= VAR_5;
 FUNC_0(VAR_2, VAR_3, VAR_5, "", 1);

 return VAR_5;
}
