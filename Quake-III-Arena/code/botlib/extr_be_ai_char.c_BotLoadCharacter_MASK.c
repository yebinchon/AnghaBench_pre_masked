
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Print ) (int ,char*,float,char*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,float) ;
 int FUNC_2 (int,int,float) ;
 int FUNC_3 (char*,int) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int ,char*,float,char*) ;

int FUNC_5(char *VAR_3, float VAR_4)
{
 int VAR_5, VAR_6, VAR_7;


 if (VAR_4 < 1.0) VAR_4 = 1.0;
 else if (VAR_4 > 5.0) VAR_4 = 5.0;

 if (VAR_4 == 1.0 || VAR_4 == 4.0 || VAR_4 == 5.0)
 {
  return FUNC_3(VAR_3, VAR_4);
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (VAR_7)
 {
  VAR_2.Print(VAR_0, "loaded cached skill %f from %s\n", VAR_4, VAR_3);
  return VAR_7;
 }
 if (VAR_4 < 4.0)
 {

  VAR_5 = FUNC_3(VAR_3, 1);
  if (!VAR_5) return 0;
  VAR_6 = FUNC_3(VAR_3, 4);
  if (!VAR_6) return VAR_5;
 }
 else
 {

  VAR_5 = FUNC_3(VAR_3, 4);
  if (!VAR_5) return 0;
  VAR_6 = FUNC_3(VAR_3, 5);
  if (!VAR_6) return VAR_5;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_4);
 if (!VAR_7) return 0;

 FUNC_0(VAR_1[VAR_7]);

 return VAR_7;
}
