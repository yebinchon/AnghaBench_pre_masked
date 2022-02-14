
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(char VAR_3)
{
    switch (VAR_3) {
    case 'Y':
    case 'y':
        return VAR_2;
    case 'P':
    case 'p':
        return VAR_0;
    case 'R':
    case 'r':
        return VAR_1;
    default:
        return -1;
    }
}
