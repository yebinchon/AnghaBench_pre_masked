
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_sport {int mod_sqp_lock; scalar_t__* ibqp_sqp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ehca_sport *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->mod_sqp_lock, VAR_4);

 VAR_3 = !VAR_2->ibqp_sqp[VAR_0];

 if (VAR_2->ibqp_sqp[VAR_1])
  FUNC_0(VAR_2->ibqp_sqp[VAR_1]);
 if (!VAR_3)
  FUNC_0(VAR_2->ibqp_sqp[VAR_0]);

 FUNC_2(&VAR_2->mod_sqp_lock, VAR_4);

 return VAR_3;
}
