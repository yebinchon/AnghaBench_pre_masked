
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ format; } ;
struct mdp_blit_req {int transp_mask; TYPE_1__ src; } ;


 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static uint32_t FUNC_1(struct mdp_blit_req *VAR_1)
{
 uint32_t VAR_2 = 0;
 if (VAR_1->src.format == VAR_0) {


  VAR_2 |= ((FUNC_0(VAR_1->transp_mask, 15, 11) << 3) |
      (FUNC_0(VAR_1->transp_mask, 15, 13))) << 16;

  VAR_2 |= ((FUNC_0(VAR_1->transp_mask, 4, 0) << 3) |
      (FUNC_0(VAR_1->transp_mask, 4, 2))) << 8;

  VAR_2 |= (FUNC_0(VAR_1->transp_mask, 10, 5) << 2) |
     (FUNC_0(VAR_1->transp_mask, 10, 9));
 } else {

  VAR_2 |= (FUNC_0(VAR_1->transp_mask, 15, 8)) |
     (FUNC_0(VAR_1->transp_mask, 23, 16) << 16) |
     (FUNC_0(VAR_1->transp_mask, 7, 0) << 8);
 }
 return VAR_2;
}
