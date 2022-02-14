
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {char* iov_base; unsigned int iov_len; } ;
struct TCP_Server_Info {int dummy; } ;


 int FUNC_0 (struct TCP_Server_Info*,struct kvec*,int,unsigned int) ;

int
FUNC_1(struct TCP_Server_Info *VAR_0, char *VAR_1,
        unsigned int VAR_2)
{
 struct kvec VAR_3;

 VAR_3.iov_base = VAR_1;
 VAR_3.iov_len = VAR_2;

 return FUNC_0(VAR_0, &VAR_3, 1, VAR_2);
}
