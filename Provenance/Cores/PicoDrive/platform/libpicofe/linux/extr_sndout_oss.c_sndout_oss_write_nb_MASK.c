
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (void const*,int) ;

int FUNC_3(const void *VAR_1, int VAR_2)
{
 static int VAR_3, VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_3 > 2) {

  VAR_3 = 0;
  VAR_4 = VAR_0;
 }

 if (VAR_4 > 0) {
  VAR_4--;
  return VAR_2;
 }

 VAR_5 = FUNC_0();
 VAR_6 = FUNC_2(VAR_1, VAR_2);
 VAR_5 = FUNC_0() - VAR_5;
 if (VAR_5 > 1) {

  VAR_3++;
  if (VAR_3 > 2)
   FUNC_1("audio lag %u\n", VAR_5);
 }
 else
  VAR_3 = 0;

 return VAR_6;
}
