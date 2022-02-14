
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* set_ctl ) (struct broadsheetfb_par*,int ,int) ;int (* get_hdb ) (struct broadsheetfb_par*) ;int (* wait_for_rdy ) (struct broadsheetfb_par*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct broadsheetfb_par*) ;
 int FUNC_1 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_2 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_3 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_4 (struct broadsheetfb_par*) ;
 int FUNC_5 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_6 (struct broadsheetfb_par*,int ,int) ;

__attribute__((used)) static u16 FUNC_7(struct broadsheetfb_par *VAR_3)
{
 u16 VAR_4;

 VAR_3->board->wait_for_rdy(VAR_3);


 VAR_3->board->set_ctl(VAR_3, VAR_1, 1);
 VAR_3->board->set_ctl(VAR_3, VAR_0, 0);
 VAR_3->board->set_ctl(VAR_3, VAR_2, 0);

 VAR_4 = VAR_3->board->get_hdb(VAR_3);


 VAR_3->board->set_ctl(VAR_3, VAR_2, 1);
 VAR_3->board->set_ctl(VAR_3, VAR_0, 1);

 return VAR_4;
}
