
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_lcdfb_info {int default_dmacon; int guard_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atmel_lcdfb_info*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct atmel_lcdfb_info *VAR_4)
{
 FUNC_0(VAR_4, VAR_0, VAR_4->default_dmacon);
 FUNC_0(VAR_4, VAR_3,
  (VAR_4->guard_time << VAR_1)
  | VAR_2);
}
