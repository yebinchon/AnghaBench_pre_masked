
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape390_kekl {scalar_t__ type; scalar_t__ type_on_tape; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct tape390_kekl *VAR_4)
{
 if (VAR_4->type == VAR_3)
  goto invalid;
 if (VAR_4->type > VAR_1)
  goto invalid;
 if (VAR_4->type_on_tape == VAR_3)
  goto invalid;
 if (VAR_4->type_on_tape > VAR_1)
  goto invalid;
 if ((VAR_4->type == VAR_1) &&
     (VAR_4->type_on_tape == VAR_2))
  goto invalid;

 return 0;
invalid:
 return -VAR_0;
}
