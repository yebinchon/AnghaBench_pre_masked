
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx88_core {char* name; } ;
struct cx8802_fh {struct cx8802_dev* dev; } ;
struct cx8802_dev {int params; struct cx88_core* core; } ;
typedef int name ;


 int FUNC_0 (struct cx88_core*,struct cx88_core*,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_1, void *VAR_2)
{
 struct cx8802_dev *VAR_3 = ((struct cx8802_fh *)VAR_2)->dev;
 struct cx88_core *VAR_4 = VAR_3->core;
 char VAR_5[32 + 2];

 FUNC_3(VAR_5, sizeof(VAR_5), "%s/2", VAR_4->name);
 FUNC_2("%s/2: ============  START LOG STATUS  ============\n",
  VAR_4->name);
 FUNC_0(VAR_4, VAR_4, VAR_0);
 FUNC_1(&VAR_3->params, VAR_5);
 FUNC_2("%s/2: =============  END LOG STATUS  =============\n",
  VAR_4->name);
 return 0;
}
