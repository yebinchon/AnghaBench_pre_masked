
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct file {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

pgprot_t
FUNC_4(struct file *VAR_3, unsigned long VAR_4, unsigned long VAR_5,
       pgprot_t VAR_6)
{
 unsigned long VAR_7 = VAR_4 << VAR_2;
 u64 VAR_8;






 VAR_8 = FUNC_1(VAR_7, VAR_5);
 if (VAR_8 & VAR_1)
  return FUNC_2(VAR_6);
 else if (VAR_8 & VAR_0)
  return FUNC_3(VAR_6);





 if (FUNC_0(VAR_7, VAR_5) & VAR_1)
  return FUNC_2(VAR_6);

 return FUNC_3(VAR_6);
}
