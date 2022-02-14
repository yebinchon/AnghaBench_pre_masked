
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; } ;


 scalar_t__ FUNC_0 (char*,struct stat*) ;

int FUNC_1(void) {




        struct stat VAR_0, VAR_1;




        if (FUNC_0("/sys/fs/cgroup", &VAR_0) < 0)
                return 0;

        if (FUNC_0("/sys/fs/cgroup/systemd", &VAR_1) < 0)
                return 0;

        return VAR_0.st_dev != VAR_1.st_dev;

}
