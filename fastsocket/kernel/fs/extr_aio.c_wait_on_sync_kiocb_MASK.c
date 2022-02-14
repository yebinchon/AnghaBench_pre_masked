
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_user_data; scalar_t__ ki_users; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

ssize_t FUNC_3(struct kiocb *VAR_2)
{
 while (VAR_2->ki_users) {
  FUNC_2(VAR_1);
  if (!VAR_2->ki_users)
   break;
  FUNC_1();
 }
 FUNC_0(VAR_0);
 return VAR_2->ki_user_data;
}
