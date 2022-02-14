
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_qset {int dummy; } ;
struct whc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct whc*,struct whc_qset*) ;
 int FUNC_1 (struct whc*,struct whc_qset*) ;
 struct whc_qset* FUNC_2 (struct whc*,int ) ;

int FUNC_3(struct whc *VAR_2)
{
 struct whc_qset *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_3);

 return 0;
}
