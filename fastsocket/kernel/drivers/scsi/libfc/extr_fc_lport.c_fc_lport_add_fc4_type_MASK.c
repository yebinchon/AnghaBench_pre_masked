
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ff_type_map; } ;
struct fc_lport {TYPE_1__ fcts; } ;
typedef enum fc_fh_type { ____Placeholder_fc_fh_type } fc_fh_type ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fc_lport *VAR_1, enum fc_fh_type VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = &VAR_1->fcts.ff_type_map[VAR_2 / VAR_0];
 *VAR_3 = FUNC_0(FUNC_1(*VAR_3) | 1UL << (VAR_2 % VAR_0));
}
