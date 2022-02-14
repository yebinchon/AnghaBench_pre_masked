
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int socklen_t ;
typedef int other_type ;
typedef int accepting ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int*) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int VAR_6, int VAR_7) {
        struct stat VAR_8;

        if (VAR_5 < 0 || VAR_6 < 0)
                return -VAR_0;

        if (FUNC_1(VAR_5, &VAR_8) < 0)
                return -VAR_4;

        if (!FUNC_0(VAR_8.st_mode))
                return 0;

        if (VAR_6 != 0) {
                int VAR_9 = 0;
                socklen_t VAR_10 = sizeof(VAR_9);

                if (FUNC_2(VAR_5, VAR_1, VAR_3, &VAR_9, &VAR_10) < 0)
                        return -VAR_4;

                if (VAR_10 != sizeof(VAR_9))
                        return -VAR_0;

                if (VAR_9 != VAR_6)
                        return 0;
        }

        if (VAR_7 >= 0) {
                int VAR_11 = 0;
                socklen_t VAR_12 = sizeof(VAR_11);

                if (FUNC_2(VAR_5, VAR_1, VAR_2, &VAR_11, &VAR_12) < 0)
                        return -VAR_4;

                if (VAR_12 != sizeof(VAR_11))
                        return -VAR_0;

                if (!VAR_11 != !VAR_7)
                        return 0;
        }

        return 1;
}
