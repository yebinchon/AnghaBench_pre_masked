
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
struct daemon_data {struct sockaddr_un* data_addr; } ;


 int FUNC_0 (int,void*,int,struct sockaddr_un*,int) ;

int FUNC_1(int VAR_0, void *VAR_1, int VAR_2, struct daemon_data *VAR_3)
{
 struct sockaddr_un *VAR_4 = VAR_3->data_addr;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, sizeof(*VAR_4));
}
