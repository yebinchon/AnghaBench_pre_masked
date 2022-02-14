
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prism2_download_data {int num_areas; TYPE_1__* data; } ;
struct TYPE_2__ {struct prism2_download_data* data; } ;


 int FUNC_0 (struct prism2_download_data*) ;

__attribute__((used)) static void FUNC_1(struct prism2_download_data *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_areas; VAR_1++)
  FUNC_0(VAR_0->data[VAR_1].data);
 FUNC_0(VAR_0);
}
