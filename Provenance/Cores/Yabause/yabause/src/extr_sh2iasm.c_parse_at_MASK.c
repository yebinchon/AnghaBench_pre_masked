
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int reg; } ;
typedef TYPE_1__ sh_operand_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char const*,int*,int *) ;

int FUNC_2(const char *VAR_10,sh_operand_info *VAR_11, char *VAR_12)



{
    int VAR_13;
    int VAR_14;

    if(VAR_10[0] == 0)
      return 0;

    if(*VAR_10 == '-')
    {
       VAR_10++;
       VAR_14 = FUNC_1(VAR_10,&VAR_13,&(VAR_11->reg));
       if(VAR_14 == 0)
       {
          FUNC_0("Cant find arg", VAR_12);
          return 0;
       }
       if(VAR_13 != VAR_9)
       {
          FUNC_0("Invalid reg after @-", VAR_12);
          return 0;
       }
       else
       {
          VAR_11->type = VAR_0;
       }
    }
    else
     if(*VAR_10 == '(')
     {
        VAR_10++;
        VAR_14 = FUNC_1(VAR_10,&VAR_13,&(VAR_11->reg));
        if((VAR_14 > 0) && (VAR_13 == VAR_9))
        {
           VAR_10+=VAR_14;
           if(VAR_11->reg != 0)
           {
              FUNC_0("Must be @(R0,...)", VAR_12);
              return 0;
           }
           if(VAR_10[0] == ',')
              VAR_10++;
           VAR_14 = FUNC_1(VAR_10,&VAR_13,&(VAR_11->reg));
           VAR_10 += VAR_14;
           if(VAR_13 == VAR_4)
           {
              VAR_11->type = VAR_8;
           }
           else if (VAR_13 == VAR_9)
           {
              VAR_11->type = VAR_7;
           }
           else
           {
              FUNC_0("Syntax error in @(R0,...)", VAR_12);
              return 0;
           }

        }
        else
        {
           while((*(VAR_10-1) != ',') && (*VAR_10 != 0))
              VAR_10++;
           VAR_14 = FUNC_1(VAR_10,&VAR_13,&(VAR_11->reg));
           VAR_10+=VAR_14;
           if(VAR_14)
           {
             if(VAR_13 == VAR_9)
             {
                VAR_11->type = VAR_3;
             }
             else if (VAR_13 == VAR_4)
             {
                VAR_11->type = VAR_1;
             }
             else if (VAR_13 == VAR_2)
             {
                VAR_11->type = VAR_2;
             }
             else
             {
                FUNC_0("Bad syntax in @(disp,[Rn,GBR,PC])", VAR_12);
                return 0;
             }
           }
           else
           {
              FUNC_0("Bad syntax in @(disp,[Rn,GBR,PC])", VAR_12);
              return 0;
           }
        }
        if(*VAR_10 != ')')
        {
          FUNC_0("Expected a )", VAR_12);
          return 0;
        }
     }
     else
     {
        VAR_10 += FUNC_1(VAR_10,&VAR_13,&(VAR_11->reg));
        if(VAR_13 != VAR_9)
        {
           FUNC_0("Invalid register after @", VAR_12);
           return 0;
        }
        if(VAR_10[0] == '+')
        {
           VAR_11->type = VAR_5;
        }
        else
        {
           VAR_11->type = VAR_6;
        }
     }

    return 1;
}
