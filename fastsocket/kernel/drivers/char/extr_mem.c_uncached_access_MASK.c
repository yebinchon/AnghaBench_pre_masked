
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_2(struct file *VAR_3, unsigned long VAR_4)
{
 if (VAR_3->f_flags & VAR_1)
  return 1;
 return VAR_4 >= FUNC_0(VAR_2);

}
