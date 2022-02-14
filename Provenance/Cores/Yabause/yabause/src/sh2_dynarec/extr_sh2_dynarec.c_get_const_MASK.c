
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct regstat {char* regmap; int * cpmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char) ;

u64 FUNC_2(struct regstat *VAR_1,signed char VAR_2)
{
  int VAR_3;
  if(VAR_2<0) return 0;
  for (VAR_3=0;VAR_3<VAR_0;VAR_3++) {
    if(VAR_1->regmap[VAR_3]==VAR_2) {
      return VAR_1->cpmap[VAR_3];
    }
  }
  FUNC_1("Unknown constant in r%d\n",VAR_2);
  FUNC_0(1);
}
