
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_emb_pmu {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 struct fsl_emb_pmu* VAR_3 ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(struct fsl_emb_pmu *VAR_4)
{
 if (VAR_3)
  return -VAR_0;

 VAR_3 = VAR_4;
 FUNC_1("%s performance monitor hardware support registered\n",
  VAR_4->name);

 FUNC_0(&VAR_2, "cpu", VAR_1);

 return 0;
}
