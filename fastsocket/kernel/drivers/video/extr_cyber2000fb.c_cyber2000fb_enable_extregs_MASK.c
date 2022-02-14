
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfb_info {int func_use_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cfb_info*) ;
 int FUNC_1 (int ,int,struct cfb_info*) ;

void FUNC_2(struct cfb_info *VAR_2)
{
 VAR_2->func_use_count += 1;

 if (VAR_2->func_use_count == 1) {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_0, VAR_2);
  VAR_3 |= VAR_1;
  FUNC_1(VAR_0, VAR_3, VAR_2);
 }
}
