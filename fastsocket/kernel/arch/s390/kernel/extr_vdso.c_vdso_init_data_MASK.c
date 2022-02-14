
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdso_data {int ectg_available; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct vdso_data *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0();
 VAR_2->ectg_available =
  VAR_1 != VAR_0 && (VAR_3 & 1);
}
