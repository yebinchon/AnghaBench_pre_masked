
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PSTRING ;
typedef scalar_t__ CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

PSTRING FUNC_0(CHAR VAR_6)
{
    if(VAR_6 == VAR_2)
        return "Pairwise Message 1";
    else if(VAR_6 == VAR_3)
        return "Pairwise Message 2";
 else if(VAR_6 == VAR_4)
        return "Pairwise Message 3";
 else if(VAR_6 == VAR_5)
        return "Pairwise Message 4";
 else if(VAR_6 == VAR_0)
        return "Group Message 1";
 else if(VAR_6 == VAR_1)
        return "Group Message 2";
    else
 return "Invalid Message";
}
