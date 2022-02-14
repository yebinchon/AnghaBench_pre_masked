
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int powered; int recalib_wq; struct psmouse* psmouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct hgpk_data*) ;
 struct hgpk_data* FUNC_3 (int,int ) ;
 int FUNC_4 (struct psmouse*) ;

int FUNC_5(struct psmouse *VAR_3)
{
 struct hgpk_data *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_3(sizeof(struct hgpk_data), VAR_1);
 if (!VAR_4)
  goto alloc_fail;

 VAR_3->private = VAR_4;
 VAR_4->psmouse = VAR_3;
 VAR_4->powered = 1;
 FUNC_0(&VAR_4->recalib_wq, VAR_2);

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  goto init_fail;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  goto init_fail;

 return 0;

init_fail:
 FUNC_2(VAR_4);
alloc_fail:
 return VAR_5;
}
