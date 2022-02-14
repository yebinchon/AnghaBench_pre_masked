
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pal_freq_ratio {int num; unsigned long den; } ;
struct ia64_pal_retval {int v2; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*,unsigned long*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ia64_pal_retval *VAR_2)
{
 struct pal_freq_ratio *VAR_3;
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_2->status = FUNC_0(VAR_0,
         &VAR_4, &VAR_5);
 VAR_3 = (struct pal_freq_ratio *)&VAR_2->v2;
 VAR_6 = ((VAR_4 * 3) + (VAR_1 / 2)) /
  VAR_1;

 VAR_3->num = 3;
 VAR_3->den = VAR_6;
}
