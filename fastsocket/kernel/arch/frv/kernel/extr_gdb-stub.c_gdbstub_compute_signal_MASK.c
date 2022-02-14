
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brr_to_sig_map {int brr_mask; unsigned long tbr_tt; int signo; } ;


 unsigned long VAR_0 ;
 struct brr_to_sig_map* VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned long VAR_2)
{
 const struct brr_to_sig_map *VAR_3;
 unsigned long VAR_4 = (VAR_2 & VAR_0) >> 12;

 for (VAR_3 = VAR_1; VAR_3->brr_mask; VAR_3++)
  if (VAR_3->brr_mask & VAR_2)
   if (!VAR_3->tbr_tt || VAR_3->tbr_tt == VAR_4)
    break;

 return VAR_3->signo;
}
