
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; int st_mode; } ;
typedef int st_path ;
typedef int st_fd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (struct stat*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

int FUNC_4(int VAR_4, const char *VAR_5) {
        struct stat VAR_6;

        if (VAR_4 < 0)
                return -VAR_0;

        FUNC_2(&VAR_6, 0, sizeof(VAR_6));
        if (FUNC_1(VAR_4, &VAR_6) < 0)
                return -VAR_3;

        if (!FUNC_0(VAR_6.st_mode))
                return 0;

        if (VAR_5) {
                struct stat VAR_7;

                FUNC_2(&VAR_7, 0, sizeof(VAR_7));
                if (FUNC_3(VAR_5, &VAR_7) < 0) {

                        if (VAR_3 == VAR_1 || VAR_3 == VAR_2)
                                return 0;

                        return -VAR_3;
                }

                return
                        VAR_7.st_dev == VAR_6.st_dev &&
                        VAR_7.st_ino == VAR_6.st_ino;
        }

        return 1;
}
