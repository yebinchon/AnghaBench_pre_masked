
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipid_device {scalar_t__ hw_guard_wait; scalar_t__ hw_guard_end; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mipid_device *VAR_1, int VAR_2)
{
 VAR_1->hw_guard_wait = FUNC_0(VAR_2);
 VAR_1->hw_guard_end = VAR_0 + VAR_1->hw_guard_wait;
}
