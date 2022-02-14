
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_long_t ;
struct ucred {int dummy; } ;
struct fileglob {int fg_label; } ;


 int FUNC_0 (int ,struct ucred*,struct fileglob*,int ,int,int ) ;
 int VAR_0 ;

int
FUNC_1(struct ucred *VAR_1, struct fileglob *VAR_2, int VAR_3,
    user_long_t VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->fg_label, VAR_3, VAR_4);
 return (VAR_5);
}
