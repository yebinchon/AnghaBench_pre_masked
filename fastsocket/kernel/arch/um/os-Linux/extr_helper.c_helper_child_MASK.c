
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct helper_data {char** argv; int fd; int buf; int pre_data; int (* pre_exec ) (int ) ;} ;
typedef int err ;


 int FUNC_0 (int ,char*,char**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct helper_data *VAR_1 = VAR_0;
 char **VAR_2 = VAR_1->argv;
 int VAR_3;

 if (VAR_1->pre_exec != ((void*)0))
  (*VAR_1->pre_exec)(VAR_1->pre_data);
 VAR_3 = FUNC_0(VAR_1->buf, VAR_2[0], VAR_2);


 FUNC_2(VAR_1->fd, &VAR_3, sizeof(VAR_3));

 return 0;
}
