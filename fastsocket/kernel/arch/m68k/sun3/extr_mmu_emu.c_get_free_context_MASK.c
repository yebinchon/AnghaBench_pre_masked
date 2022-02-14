
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 struct mm_struct** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

unsigned long FUNC_2(struct mm_struct *VAR_3)
{
 unsigned long VAR_4 = 1;
 static unsigned char VAR_5 = 1;

 if(!VAR_2) {

  VAR_4 = VAR_5;
  FUNC_0(VAR_4);
  VAR_5 = (VAR_5 + 1) & 0x7;
  if(!VAR_5)
   VAR_5++;
 } else {
  while(VAR_4 < VAR_0) {
   if(VAR_1[VAR_4])
    VAR_4++;
   else
    break;
  }

  if(VAR_4 == VAR_0)
   FUNC_1("get_free_context: failed to find free context");
 }

 VAR_1[VAR_4] = VAR_3;
 VAR_2--;

 return VAR_4;
}
