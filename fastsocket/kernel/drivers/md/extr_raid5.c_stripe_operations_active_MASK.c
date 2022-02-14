
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int state; scalar_t__ reconstruct_state; scalar_t__ check_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct stripe_head *VAR_2)
{
 return VAR_2->check_state || VAR_2->reconstruct_state ||
        FUNC_0(VAR_0, &VAR_2->state) ||
        FUNC_0(VAR_1, &VAR_2->state);
}
