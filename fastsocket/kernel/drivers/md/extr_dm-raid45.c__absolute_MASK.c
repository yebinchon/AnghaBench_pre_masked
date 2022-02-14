
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, int VAR_2, int VAR_3)
{
 size_t VAR_4 = FUNC_0(VAR_1);

 if (VAR_4 < 2)
  VAR_4 = 2;


 if (!FUNC_1("set", VAR_1, VAR_4))
  ;
 else if (!FUNC_1("grow", VAR_1, VAR_4))
  VAR_3 += VAR_2;
 else if (!FUNC_1("shrink", VAR_1, VAR_4))
  VAR_3 = VAR_2 - VAR_3;
 else
  VAR_3 = -VAR_0;

 return VAR_3;
}
