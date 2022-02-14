
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {struct r3964_client_info* firstClient; } ;
struct r3964_client_info {struct pid* pid; struct r3964_client_info* next; } ;
struct pid {int dummy; } ;



__attribute__((used)) static struct r3964_client_info *FUNC_0(struct r3964_info *VAR_0,
  struct pid *VAR_1)
{
 struct r3964_client_info *VAR_2;

 for (VAR_2 = VAR_0->firstClient; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->pid == VAR_1) {
   return VAR_2;
  }
 }
 return ((void*)0);
}
