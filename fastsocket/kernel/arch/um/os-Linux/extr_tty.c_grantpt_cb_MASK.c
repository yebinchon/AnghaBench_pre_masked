
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grantpt_info {int err; int fd; int res; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct grantpt_info *VAR_2 = VAR_1;

 VAR_2->res = FUNC_0(VAR_2->fd);
 VAR_2->err = VAR_0;
}
