
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_comp_pool {int last_cpu; int last_cpu_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_8(struct ehca_comp_pool *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(!FUNC_5());
 if (VAR_1 >= 3)
  FUNC_4(VAR_0, FUNC_3(), "");

 FUNC_6(&VAR_3->last_cpu_lock, VAR_5);
 VAR_4 = FUNC_2(VAR_3->last_cpu, VAR_0);
 if (VAR_4 >= VAR_2)
  VAR_4 = FUNC_1(VAR_0);
 VAR_3->last_cpu = VAR_4;
 FUNC_7(&VAR_3->last_cpu_lock, VAR_5);

 return VAR_4;
}
