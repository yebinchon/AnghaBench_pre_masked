
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platram_info {int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* set_rw ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct platram_info *VAR_0, int VAR_1)
{
 if (VAR_0->pdata == ((void*)0))
  return;

 if (VAR_0->pdata->set_rw != ((void*)0))
  (VAR_0->pdata->set_rw)(VAR_0->dev, VAR_1);
}
