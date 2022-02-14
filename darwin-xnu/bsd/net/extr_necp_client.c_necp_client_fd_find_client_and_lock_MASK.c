
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct necp_fd_data {int dummy; } ;
struct necp_client {int dummy; } ;


 int FUNC_0 (struct necp_client*) ;
 struct necp_client* FUNC_1 (struct necp_fd_data*,int ) ;

__attribute__((used)) static struct necp_client *
FUNC_2(struct necp_fd_data *VAR_0, uuid_t VAR_1)
{
 struct necp_client *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_2);
 }

 return (VAR_2);
}
