
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kern_memdesc {int attribute; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_1 ;
 struct kern_memdesc* FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct kern_memdesc*) ;

u64
FUNC_3 (unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_2 + VAR_3;
 struct kern_memdesc *VAR_5;
 u64 VAR_6;





 if (!VAR_1) {
  VAR_6 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6 & VAR_0)
   return VAR_0;
  return 0;
 }

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return 0;

 VAR_6 = VAR_5->attribute;
 do {
  unsigned long VAR_7 = FUNC_2(VAR_5);

  if (VAR_4 <= VAR_7)
   return VAR_6;

  VAR_5 = FUNC_1(VAR_7);
  if (!VAR_5 || VAR_5->attribute != VAR_6)
   return 0;
 } while (VAR_5);
 return 0;
}
