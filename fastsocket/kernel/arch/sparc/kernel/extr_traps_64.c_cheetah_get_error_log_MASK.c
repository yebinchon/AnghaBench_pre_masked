
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cheetah_err_info {int dummy; } ;


 unsigned long VAR_0 ;
 struct cheetah_err_info* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static inline struct cheetah_err_info *FUNC_1(unsigned long VAR_2)
{
 struct cheetah_err_info *VAR_3;
 int VAR_4 = FUNC_0();

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = VAR_1 + (VAR_4 * 2);
 if ((VAR_2 & VAR_0) != 0UL)
  VAR_3++;

 return VAR_3;
}
