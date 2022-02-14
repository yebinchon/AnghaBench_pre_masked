
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdp_regs {int op; } ;
struct TYPE_4__ {size_t format; } ;
struct TYPE_3__ {int format; } ;
struct mdp_blit_req {scalar_t__ transp_mask; int alpha; TYPE_2__ dst; TYPE_1__ src; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 scalar_t__ FUNC_1 (struct mdp_blit_req*) ;

__attribute__((used)) static void FUNC_2(struct mdp_blit_req *VAR_10, struct mdp_regs *VAR_11)
{

 if (VAR_10->transp_mask != VAR_1) {
  VAR_10->transp_mask = FUNC_1(VAR_10);
  if (VAR_10->alpha != VAR_0) {




   VAR_11->op |= VAR_8 | VAR_5 |
    VAR_3 |
    VAR_4 |
    VAR_2;
  } else {


   VAR_11->op |= VAR_8 | VAR_5 |
    VAR_7;
  }
 }

 VAR_10->alpha &= 0xff;

 if (FUNC_0(VAR_10->src.format)) {
  VAR_11->op |= VAR_8 | VAR_5 |
   VAR_6;
 } else if (VAR_10->alpha < VAR_0) {

  VAR_11->op |= VAR_8 | VAR_5 |
   VAR_3 |
   VAR_4;
 }

 VAR_11->op |= VAR_9[VAR_10->dst.format];
}
