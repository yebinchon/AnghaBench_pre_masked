
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int name_dir2_file ;
typedef int name_dir2 ;
typedef int name_dir1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

void FUNC_9(const char* VAR_2)
{
    char VAR_3[64];
    char VAR_4[64];
    char VAR_5[64];
    FUNC_5(VAR_3, sizeof(VAR_3), "%s1", VAR_2);
    FUNC_5(VAR_4, sizeof(VAR_4), "%s2", VAR_2);
    FUNC_5(VAR_5, sizeof(VAR_5), "%s2/1.txt", VAR_2);

    FUNC_0(0, FUNC_3(VAR_3, 0755));
    struct stat VAR_6;
    FUNC_0(0, FUNC_6(VAR_3, &VAR_6));
    FUNC_2(VAR_6.st_mode & VAR_0);
    FUNC_1(VAR_6.st_mode & VAR_1);
    FUNC_0(0, FUNC_4(VAR_3));
    FUNC_0(-1, FUNC_6(VAR_3, &VAR_6));

    FUNC_0(0, FUNC_3(VAR_4, 0755));
    FUNC_7(VAR_5, "foo\n");
    FUNC_0(0, FUNC_6(VAR_4, &VAR_6));
    FUNC_2(VAR_6.st_mode & VAR_0);
    FUNC_1(VAR_6.st_mode & VAR_1);
    FUNC_0(0, FUNC_6(VAR_5, &VAR_6));
    FUNC_1(VAR_6.st_mode & VAR_0);
    FUNC_2(VAR_6.st_mode & VAR_1);
    FUNC_0(-1, FUNC_4(VAR_4));
    FUNC_0(0, FUNC_8(VAR_5));
    FUNC_0(0, FUNC_4(VAR_4));
}
