
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int (* event_handler ) (TYPE_1__*) ;} ;
struct sh_cmt_priv {int clear_bits; int flags; scalar_t__ match_value; scalar_t__ next_match_value; scalar_t__ max_match_value; TYPE_1__ ced; int total_cycles; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sh_cmt_priv*,int) ;
 int FUNC_1 (struct sh_cmt_priv*,int ) ;
 int FUNC_2 (struct sh_cmt_priv*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_9, void *VAR_10)
{
 struct sh_cmt_priv *VAR_11 = VAR_10;


 FUNC_2(VAR_11, VAR_2, FUNC_1(VAR_11, VAR_2) & VAR_11->clear_bits);





 if (VAR_11->flags & VAR_4)
  VAR_11->total_cycles += VAR_11->match_value;

 if (!(VAR_11->flags & VAR_6))
  VAR_11->next_match_value = VAR_11->max_match_value;

 VAR_11->flags |= VAR_5;

 if (VAR_11->flags & VAR_3) {
  if (!(VAR_11->flags & VAR_7)) {
   if (VAR_11->ced.mode == VAR_0) {
    VAR_11->next_match_value = VAR_11->max_match_value;
    VAR_11->flags |= VAR_6;
   }

   VAR_11->ced.event_handler(&VAR_11->ced);
  }
 }

 VAR_11->flags &= ~VAR_7;

 if (VAR_11->flags & VAR_6) {
  VAR_11->flags &= ~VAR_6;
  FUNC_0(VAR_11, 1);

  if (VAR_11->flags & VAR_3)
   if ((VAR_11->ced.mode == VAR_1)
       || (VAR_11->match_value == VAR_11->next_match_value))
    VAR_11->flags &= ~VAR_6;
 }

 VAR_11->flags &= ~VAR_5;

 return VAR_8;
}
