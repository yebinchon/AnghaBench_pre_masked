
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {int dummy; } ;
typedef enum expression_operator { ____Placeholder_expression_operator } expression_operator ;


 struct expression* FUNC_0 (int,int,struct expression**) ;

__attribute__((used)) static struct expression *
FUNC_1 (enum expression_operator VAR_0, struct expression *VAR_1,
    struct expression *VAR_2)
{
  struct expression *VAR_3[2];

  VAR_3[0] = VAR_1;
  VAR_3[1] = VAR_2;
  return FUNC_0 (2, VAR_0, VAR_3);
}
