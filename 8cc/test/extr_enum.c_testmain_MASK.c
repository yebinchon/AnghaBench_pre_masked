
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tag { ____Placeholder_tag } tag ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

void FUNC_2() {
    FUNC_1("enum");

    FUNC_0(0, VAR_0);
    FUNC_0(2, VAR_1);

    enum { x } VAR_2;
    FUNC_0(0, x);

    enum { y };
    FUNC_0(0, y);

    enum tag { z };
    enum tag VAR_3 = z;
    FUNC_0(0, z);
    FUNC_0(0, VAR_3);
}
