
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum PathMatch { ____Placeholder_PathMatch } PathMatch ;
struct TYPE_2__ {char const* pathname; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;

enum PathMatch FUNC_1(const char *VAR_4)
{
    int VAR_5;
    int VAR_6;

    VAR_5 = FUNC_0(VAR_0.pathname);

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

        if (VAR_4[VAR_6] != VAR_0.pathname[VAR_6]) {

            if ((VAR_4[VAR_6] == '/') || (VAR_4[VAR_6] == '\\')) {
                if ((VAR_0.pathname[VAR_6] == '/') || (VAR_0.pathname[VAR_6] == '\\')) {
                    continue;
                }
            }


            return VAR_2;
        }
    }




    if (VAR_4[VAR_5] == 0)
        return VAR_1;



    if ((VAR_4[VAR_5] == '/') || (VAR_4[VAR_5] == '\\'))
        return VAR_3;
    else
        return VAR_2;
}
