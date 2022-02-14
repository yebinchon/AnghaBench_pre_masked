
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hecubafb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* wait_for_ack ) (struct hecubafb_par*,int) ;int (* set_ctl ) (struct hecubafb_par*,int ,int) ;int (* set_data ) (struct hecubafb_par*,unsigned char) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hecubafb_par*,unsigned char) ;
 int FUNC_1 (struct hecubafb_par*,int ,int) ;
 int FUNC_2 (struct hecubafb_par*,int) ;
 int FUNC_3 (struct hecubafb_par*,int ,int) ;
 int FUNC_4 (struct hecubafb_par*,int) ;

__attribute__((used)) static void FUNC_5(struct hecubafb_par *VAR_1, unsigned char VAR_2)
{

 VAR_1->board->set_data(VAR_1, VAR_2);


 VAR_1->board->set_ctl(VAR_1, VAR_0, 0);


 VAR_1->board->wait_for_ack(VAR_1, 0);


 VAR_1->board->set_ctl(VAR_1, VAR_0, 1);


 VAR_1->board->wait_for_ack(VAR_1, 1);
}
