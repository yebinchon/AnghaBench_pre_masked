
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_4,
        unsigned long VAR_5, void *VAR_6)
{
 static unsigned long VAR_7;
 unsigned long VAR_8;

 switch (VAR_5) {
 case 133:
 case 132:
 case 128:
 case 129:
  return VAR_1;
 case 130:
 case 131:

  FUNC_3(&VAR_3, VAR_8);
  if (FUNC_1(&VAR_2)) {
   FUNC_4(&VAR_3, VAR_8);
   return VAR_1;
  } else {
   FUNC_4(&VAR_3, VAR_8);
   if (FUNC_2(&VAR_7,
         30 * 1000))
    FUNC_0("DMEM operations are not allowed"
          "in conjunction with eHCA");
   return VAR_0;
  }
 }
 return VAR_1;
}
