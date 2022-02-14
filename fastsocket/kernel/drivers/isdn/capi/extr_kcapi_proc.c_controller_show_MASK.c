
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct capi_ctr {char* (* procinfo ) (struct capi_ctr*) ;int name; int cardstate; int driver_name; int cnr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,char*) ;
 char* FUNC_2 (struct capi_ctr*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct capi_ctr *VAR_2 = *(struct capi_ctr **) VAR_1;

 if (!VAR_2)
  return 0;

 FUNC_1(VAR_0, "%d %-10s %-8s %-16s %s\n",
     VAR_2->cnr, VAR_2->driver_name,
     FUNC_0(VAR_2->cardstate),
     VAR_2->name,
     VAR_2->procinfo ? VAR_2->procinfo(VAR_2) : "");

 return 0;
}
