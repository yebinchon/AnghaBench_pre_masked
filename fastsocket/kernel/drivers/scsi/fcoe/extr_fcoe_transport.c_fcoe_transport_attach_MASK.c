
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_transport {int attached; int name; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(struct fcoe_transport *VAR_4)
{
 int VAR_5 = 0;

 FUNC_3(&VAR_3);
 if (VAR_4->attached) {
  FUNC_0("transport %s already attached\n",
           VAR_4->name);
  VAR_5 = -VAR_0;
  goto out_attach;
 }


 if (FUNC_5(VAR_4->name, VAR_1))
  FUNC_1(&VAR_4->list, &VAR_2);
 else
  FUNC_2(&VAR_4->list, &VAR_2);

 VAR_4->attached = 1;
 FUNC_0("attaching transport %s\n", VAR_4->name);

out_attach:
 FUNC_4(&VAR_3);
 return VAR_5;
}
