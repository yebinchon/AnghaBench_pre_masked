
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_highlevel {scalar_t__ add_host; int irq_list; int hl_list; int addr_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct hpsb_highlevel*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct hpsb_highlevel*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct hpsb_highlevel *VAR_5)
{
 unsigned long VAR_6;

 FUNC_2(VAR_5);
 FUNC_0(&VAR_5->addr_list);

 FUNC_1(&VAR_2);
 FUNC_3(&VAR_5->hl_list, &VAR_1);
 FUNC_5(&VAR_2);

 FUNC_6(&VAR_4, VAR_6);
 FUNC_3(&VAR_5->irq_list, &VAR_3);
 FUNC_7(&VAR_4, VAR_6);

 if (VAR_5->add_host)
  FUNC_4(VAR_5, VAR_0);
 return;
}
