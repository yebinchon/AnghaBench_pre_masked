
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


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
 int VAR_10 ;
 int FUNC_0 (int) ;

int FUNC_1(int VAR_11, uint64_t VAR_12)
{




    if (!VAR_12)
    {
        return 1;
    }
    switch (VAR_11)
    {

        case 137:
            return ((VAR_12 & VAR_0) &&
                    (VAR_12 & VAR_1) &&
                    (VAR_12 & VAR_8) == VAR_8);


        case 135:
            return ((VAR_12 & VAR_5) == VAR_5);


        case 136:
            return ((VAR_12 & VAR_5) == VAR_5 ||
                    (VAR_12 & VAR_4) == VAR_4 ||
                    (VAR_12 & VAR_6) == VAR_6);


        case 138:
            return ((VAR_12 & VAR_2) == VAR_2 ||
                    (VAR_12 & VAR_3) == VAR_3 ||
                    (VAR_12 & VAR_7) == VAR_7 ||
                    (VAR_12 & VAR_10) == VAR_10);



        case 134:
        case 133:
            return ((VAR_12 & VAR_2) == VAR_2 ||
                    (VAR_12 & VAR_3) == VAR_3 ||
                    (VAR_12 & VAR_7) == VAR_7 ||
                    (VAR_12 == VAR_9 &&
                     VAR_11 == 134));


        case 128:
            return (FUNC_0(VAR_12) > 1);


        case 132:
        case 129:
            return (VAR_12 & VAR_8);



        case 131:
        case 130:
            return 1;


        default:
            return 0;
    }
}
