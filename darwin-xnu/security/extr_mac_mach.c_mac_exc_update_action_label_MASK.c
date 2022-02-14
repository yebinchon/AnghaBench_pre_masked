
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;
struct exception_action {int label; } ;


 int FUNC_0 (int ,struct exception_action*,int ,struct label*) ;
 int VAR_0 ;

int
FUNC_1(struct exception_action *VAR_1,
       struct label *VAR_2) {
 int VAR_3;

 FUNC_0(VAR_0, VAR_1, VAR_1->label, VAR_2);

 return (VAR_3);
}
