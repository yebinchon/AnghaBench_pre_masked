
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {char* option; struct message* files; int * next; int * msg; } ;


 struct message* FUNC_0 (char const*,int) ;
 int FUNC_1 (struct message*) ;
 struct message* FUNC_2 (int) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static struct message *FUNC_4(const char *VAR_0, char *VAR_1,
        const char *VAR_2, int VAR_3)
{
 struct message *VAR_4 = FUNC_2(sizeof(*VAR_4));

 if (VAR_4 == ((void*)0))
  goto out;

 VAR_4->files = FUNC_0(VAR_2, VAR_3);
 if (VAR_4->files == ((void*)0))
  goto out_fail;

 VAR_4->msg = FUNC_3(VAR_0);
 if (VAR_4->msg == ((void*)0))
  goto out_fail_msg;

 VAR_4->option = VAR_1;
 VAR_4->next = ((void*)0);
out:
 return VAR_4;
out_fail_msg:
 FUNC_1(VAR_4->files);
out_fail:
 FUNC_1(VAR_4);
 VAR_4 = ((void*)0);
 goto out;
}
