
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_6__ {int cisco_keepalive_period; TYPE_4__ cisco_timer; scalar_t__ cisco_debserint; scalar_t__ cisco_line_state; scalar_t__ cisco_last_slarp_in; scalar_t__ cisco_yourseq; scalar_t__ cisco_mineseen; scalar_t__ cisco_myseq; } ;
typedef TYPE_1__ isdn_net_local ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(isdn_net_local *VAR_4)
{
 VAR_4->cisco_myseq = 0;
 VAR_4->cisco_mineseen = 0;
 VAR_4->cisco_yourseq = 0;
 VAR_4->cisco_keepalive_period = VAR_1;
 VAR_4->cisco_last_slarp_in = 0;
 VAR_4->cisco_line_state = 0;
 VAR_4->cisco_debserint = 0;


 FUNC_2(VAR_4);

 FUNC_1(&VAR_4->cisco_timer);
 VAR_4->cisco_timer.data = (unsigned long) VAR_4;
 VAR_4->cisco_timer.function = VAR_2;
 VAR_4->cisco_timer.expires = VAR_3 + VAR_4->cisco_keepalive_period * VAR_0;
 FUNC_0(&VAR_4->cisco_timer);
}
