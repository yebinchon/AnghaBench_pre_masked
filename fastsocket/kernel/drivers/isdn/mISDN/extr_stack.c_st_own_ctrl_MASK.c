
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct mISDNchannel {TYPE_1__* st; } ;
struct TYPE_4__ {int (* ctrl ) (TYPE_2__*,int ,void*) ;} ;
struct TYPE_3__ {TYPE_2__* layer1; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,void*) ;

__attribute__((used)) static int
FUNC_1(struct mISDNchannel *VAR_1, u_int VAR_2, void *VAR_3)
{
 if (!VAR_1->st || !VAR_1->st->layer1)
  return -VAR_0;
 return VAR_1->st->layer1->ctrl(VAR_1->st->layer1, VAR_2, VAR_3);
}
