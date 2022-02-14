
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct stat * VAR_2)
{
    FUNC_0(VAR_1 >=0 && VAR_1 < 3);
    VAR_2->st_mode = VAR_0;
    return 0;
}
