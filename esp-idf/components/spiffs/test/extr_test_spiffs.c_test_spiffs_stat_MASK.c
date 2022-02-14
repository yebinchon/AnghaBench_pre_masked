
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char const*,char*) ;

void FUNC_5(const char* VAR_2)
{
    FUNC_4(VAR_2, "foo\n");
    struct stat VAR_3;
    FUNC_1(0, FUNC_3(VAR_2, &VAR_3));
    FUNC_0(VAR_3.st_mode & VAR_1);
    FUNC_2(VAR_3.st_mode & VAR_0);
}
