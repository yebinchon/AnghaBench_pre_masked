
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(struct file *VAR_12, unsigned long VAR_13,
    unsigned long VAR_14, pgprot_t *VAR_15)
{
 unsigned long VAR_16 = VAR_9;

 if (!FUNC_4(VAR_13, VAR_14))
  return 0;

 if (VAR_12->f_flags & VAR_0) {
  VAR_16 = VAR_8;
 }
 *VAR_15 = FUNC_1((FUNC_3(*VAR_15) & ~VAR_6) |
        VAR_16);
 return 1;
}
