
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ipw2100_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ipw2100_priv*,int ,char*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct ipw2100_priv *VAR_3, char *VAR_4,
     size_t VAR_5)
{
 char VAR_6[VAR_2];
 u32 VAR_7 = VAR_2;
 u32 VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_3, VAR_1, VAR_6, &VAR_7))
  return -VAR_0;
 VAR_8 = VAR_5;
 if (VAR_7 >= VAR_5)
  VAR_7 = VAR_5 - 1;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_4[VAR_9] = VAR_6[VAR_9];
 VAR_4[VAR_9] = '\0';
 return VAR_8;
}
