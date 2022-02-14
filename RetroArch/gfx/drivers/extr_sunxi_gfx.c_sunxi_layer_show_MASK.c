
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ layer_id; scalar_t__ fb_id; int fd_disp; } ;
typedef TYPE_1__ sunxi_disp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__**) ;

__attribute__((used)) static int FUNC_1(sunxi_disp_t *VAR_1)
{
   uint32_t VAR_2[4];

   if (VAR_1->layer_id < 0)
      return -1;

   VAR_2[0] = VAR_1->fb_id;
   VAR_2[1] = VAR_1->layer_id;
   return FUNC_0(VAR_1->fd_disp, VAR_0, &VAR_2);
}
