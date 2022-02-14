
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int reg; } ;
typedef TYPE_1__ sh_operand_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,TYPE_1__*,char*) ;
 int FUNC_1 (char const*,int*,int *) ;

int FUNC_2(const char *VAR_2,sh_operand_info *VAR_3, char *VAR_4)



{
    int VAR_5,VAR_6;

    if(VAR_2[0] == 0)
    {
      VAR_3->type = 0;
      VAR_3->reg = 0;
      return 1;
    }

    if(*VAR_2 == '@')
    {
       VAR_2++;
       return FUNC_0(VAR_2,VAR_3, VAR_4);
    }

    if(*VAR_2 == '#')
    {
       VAR_3->type = VAR_1;
       return 1;
    }

    VAR_5 = FUNC_1(VAR_2,&VAR_6,&(VAR_3->reg));
    if(VAR_5)
    {
       VAR_3->type = VAR_6;
       return 1;
    }
    else
    {
       VAR_3->type = VAR_0;
       return 1;
    }


    return 0;
}
