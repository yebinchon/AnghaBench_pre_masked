
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct symbol*,int ) ;

__attribute__((used)) static int FUNC_1(struct symbol *VAR_3, struct symbol *VAR_4)
{
 return VAR_4->type == VAR_1 || VAR_4->type == VAR_0 ||
        (VAR_4->type == VAR_2 && FUNC_0(VAR_3, VAR_4->name));
}
