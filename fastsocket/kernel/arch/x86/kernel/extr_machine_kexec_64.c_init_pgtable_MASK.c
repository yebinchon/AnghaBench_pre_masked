
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int start; } ;
typedef int pgd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kimage*,int *,int ,int) ;
 int FUNC_2 (struct kimage*,int *,int ) ;
 int FUNC_3 (struct kimage*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct kimage *VAR_2, unsigned long VAR_3)
{
 pgd_t *VAR_4;
 int VAR_5;
 VAR_4 = (pgd_t *)FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_2, VAR_4, 0, VAR_1 << VAR_0);
 if (VAR_5)
  return VAR_5;




 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_2->start);
 if (VAR_5)
  return VAR_5;
 return FUNC_3(VAR_2, VAR_4);
}
