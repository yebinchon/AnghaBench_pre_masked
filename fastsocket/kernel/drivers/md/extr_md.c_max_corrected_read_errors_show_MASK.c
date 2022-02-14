
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int max_corr_read_errors; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_0, char *VAR_1) {
 return FUNC_1(VAR_1, "%d\n",
         FUNC_0(&VAR_0->max_corr_read_errors));
}
