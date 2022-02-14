
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmlogrdr_priv_t {TYPE_1__* device; int minor_num; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct vmlogrdr_priv_t *VAR_3)
{
 FUNC_1(VAR_1, FUNC_0(VAR_2, VAR_3->minor_num));
 if (VAR_3->device != ((void*)0)) {
  FUNC_3(&VAR_3->device->kobj, &VAR_0);
  FUNC_2(VAR_3->device);
  VAR_3->device=((void*)0);
 }
 return 0;
}
