
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int flags; int result_tf; scalar_t__ err_mask; } ;
struct ata_port {scalar_t__ nr_active_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct ata_queued_cmd* FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 int FUNC_4 (int *,int ,int) ;

void FUNC_5(struct ata_port *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct ata_queued_cmd *VAR_6 = FUNC_1(VAR_4, VAR_5);

  if (!(VAR_6->flags & VAR_1))
   continue;

  if (VAR_6->err_mask) {




   if (VAR_6->flags & VAR_2)
    FUNC_3(VAR_6);
   else
    FUNC_2(VAR_6);
  } else {
   if (VAR_6->flags & VAR_3) {
    FUNC_2(VAR_6);
   } else {

    FUNC_4(&VAR_6->result_tf, 0, sizeof(VAR_6->result_tf));
    FUNC_3(VAR_6);
   }
  }
 }


 FUNC_0(VAR_4->nr_active_links);
 VAR_4->nr_active_links = 0;
}
