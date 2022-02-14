
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {char* name; int mpeg_params; } ;
typedef int name ;


 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,char*,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3)
{
 struct cx231xx_fh *VAR_4 = VAR_3;
 struct cx231xx *VAR_5 = VAR_4->dev;
 char VAR_6[32 + 2];

 FUNC_3(VAR_6, sizeof(VAR_6), "%s/2", VAR_5->name);
 FUNC_2(3,
  "%s/2: ============  START LOG STATUS  ============\n",
        VAR_5->name);
 FUNC_0(VAR_5, VAR_0, VAR_1);
 FUNC_1(&VAR_5->mpeg_params, VAR_6);
 FUNC_2(3,
  "%s/2: =============  END LOG STATUS  =============\n",
        VAR_5->name);
 return 0;
}
