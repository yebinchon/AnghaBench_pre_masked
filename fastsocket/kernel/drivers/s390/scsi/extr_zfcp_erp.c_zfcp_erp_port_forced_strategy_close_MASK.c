
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int step; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct zfcp_erp_action*) ;

__attribute__((used)) static int FUNC_1(struct zfcp_erp_action *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == -VAR_0)
  return VAR_3;
 VAR_5->step = VAR_4;
 if (VAR_6)
  return VAR_2;

 return VAR_1;
}
