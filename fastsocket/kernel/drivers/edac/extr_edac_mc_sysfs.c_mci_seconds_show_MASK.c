
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int start_time; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct mem_ctl_info *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, "%ld\n", (VAR_1 - VAR_2->start_time) / VAR_0);
}
