
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int multiuse; struct connectdata* multi; struct connectdata* data; struct connectdata* bundle; } ;


 int FUNC_0 (struct connectdata*) ;
 int FUNC_1 (struct connectdata*) ;

void FUNC_2(struct connectdata *VAR_0,
                         int VAR_1)
{
  FUNC_0(VAR_0);
  FUNC_0(VAR_0->bundle);
  FUNC_0(VAR_0->data);
  FUNC_0(VAR_0->data->multi);

  VAR_0->bundle->multiuse = VAR_1;
  FUNC_1(VAR_0->data->multi);
}
