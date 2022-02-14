
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_path {int desc_fmt1; int chpid; int desc; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct channel_path *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->chpid, &VAR_0->desc);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->chpid, &VAR_0->desc_fmt1);

 return VAR_1;
}
