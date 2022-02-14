
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct stat*) ;

int FUNC_2 (int VAR_0)
{
    struct stat VAR_1;

    if (FUNC_1 (VAR_0,&VAR_1) == -1)
 FUNC_0 ("Error fstating");

    return VAR_1.st_size;
}
