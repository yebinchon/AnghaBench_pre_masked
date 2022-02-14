
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; } ;
struct bfa_fcs_itnim_s {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct bfa_fcs_itnim_s *VAR_2 = (struct bfa_fcs_itnim_s *) VAR_1;

 VAR_2->stats.timeout++;
 FUNC_0(VAR_2, VAR_0);
}
