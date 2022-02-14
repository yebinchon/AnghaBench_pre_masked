
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned char* data; } ;
struct TYPE_4__ {int index; } ;
struct ppp {int xstate; int rstate; int flags; int xc_state; TYPE_3__* xcomp; int rc_state; TYPE_2__* rcomp; int debug; TYPE_1__ file; int mru; } ;
struct TYPE_6__ {int (* comp_reset ) (int ) ;int (* comp_init ) (int ,unsigned char*,int,int ,int ,int ) ;} ;
struct TYPE_5__ {int (* decomp_reset ) (int ) ;int (* decomp_init ) (int ,unsigned char*,int,int ,int ,int ,int ) ;} ;


 int FUNC_0 (unsigned char*) ;


 int VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int ,unsigned char*,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,unsigned char*,int,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct ppp *VAR_8, struct sk_buff *VAR_9, int VAR_10)
{
 unsigned char *VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_9, VAR_0 + 2))
  return;
 VAR_11 = VAR_9->data + 2;

 switch (FUNC_0(VAR_11)) {
 case 131:
  if(VAR_10)

   VAR_8->xstate &= ~VAR_4;
  else

   VAR_8->rstate &= ~VAR_7;

  break;

 case 128:
 case 129:



  VAR_8->rstate &= ~VAR_7;
  VAR_8->xstate &= ~VAR_4;
  break;

 case 132:
  if ((VAR_8->flags & (VAR_2 | VAR_3)) != VAR_2)
   break;
  VAR_12 = FUNC_1(VAR_11);
  if (!FUNC_3(VAR_9, VAR_12 + 2))
   return;
  VAR_11 += VAR_0;
  VAR_12 -= VAR_0;
  if (VAR_12 < VAR_1 || VAR_12 < FUNC_2(VAR_11))
   break;
  if (VAR_10) {

   if (!VAR_8->rc_state)
    break;
   if (VAR_8->rcomp->decomp_init(VAR_8->rc_state, VAR_11, VAR_12,
     VAR_8->file.index, 0, VAR_8->mru, VAR_8->debug)) {
    VAR_8->rstate |= VAR_7;
    VAR_8->rstate &= ~(VAR_5 | VAR_6);
   }
  } else {

   if (!VAR_8->xc_state)
    break;
   if (VAR_8->xcomp->comp_init(VAR_8->xc_state, VAR_11, VAR_12,
     VAR_8->file.index, 0, VAR_8->debug))
    VAR_8->xstate |= VAR_4;
  }
  break;

 case 130:

  if ((VAR_8->flags & VAR_3) == 0)
   break;
  if (VAR_10) {
   if (VAR_8->rc_state && (VAR_8->rstate & VAR_7)) {
    VAR_8->rcomp->decomp_reset(VAR_8->rc_state);
    VAR_8->rstate &= ~VAR_5;
   }
  } else {
   if (VAR_8->xc_state && (VAR_8->xstate & VAR_4))
    VAR_8->xcomp->comp_reset(VAR_8->xc_state);
  }
  break;
 }
}
