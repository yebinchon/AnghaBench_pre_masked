
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csrow_info {size_t edac_mode; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct csrow_info *VAR_1, char *VAR_2,
    int VAR_3)
{
 return FUNC_0(VAR_2, "%s\n", VAR_0[VAR_1->edac_mode]);
}
