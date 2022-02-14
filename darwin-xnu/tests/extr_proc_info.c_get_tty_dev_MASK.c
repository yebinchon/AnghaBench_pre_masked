
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stat {scalar_t__ st_rdev; } ;


 int FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int) ;

uint32_t
FUNC_2()
{
 struct stat VAR_0;
 FUNC_0(FUNC_1(1), &VAR_0);
 return ((uint32_t)VAR_0.st_rdev);
}
