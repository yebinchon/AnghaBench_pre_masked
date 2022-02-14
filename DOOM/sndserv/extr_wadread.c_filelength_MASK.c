
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,struct stat*) ;
 int VAR_0 ;

int FUNC_2 (int VAR_1)
{
    struct stat VAR_2;

    if (FUNC_1 (VAR_1,&VAR_2) == -1)
 FUNC_0 (VAR_0, "Error fstating\n");

    return VAR_2.st_size;
}
