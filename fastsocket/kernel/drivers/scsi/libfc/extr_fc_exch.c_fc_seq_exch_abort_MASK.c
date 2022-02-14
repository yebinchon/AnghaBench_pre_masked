
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {int ex_lock; } ;


 int FUNC_0 (struct fc_exch*,unsigned int) ;
 struct fc_exch* FUNC_1 (struct fc_seq const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const struct fc_seq *VAR_0,
        unsigned int VAR_1)
{
 struct fc_exch *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 FUNC_2(&VAR_2->ex_lock);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->ex_lock);
 return VAR_3;
}
