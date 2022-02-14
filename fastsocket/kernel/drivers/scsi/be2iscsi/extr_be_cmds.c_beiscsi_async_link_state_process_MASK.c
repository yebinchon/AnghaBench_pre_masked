
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int state; int shost; } ;
struct be_async_event_link_state {int port_link_status; scalar_t__ port_fault; int physical_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int,char*,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct beiscsi_hba *VAR_10,
  struct be_async_event_link_state *VAR_11)
{
 if ((VAR_11->port_link_status == VAR_0) ||
     ((VAR_11->port_link_status & VAR_2) &&
      (VAR_11->port_fault != VAR_5))) {
  VAR_10->state = VAR_6;

  FUNC_0(VAR_10, VAR_8,
       VAR_3 | VAR_4,
       "BC_%d : Link Down on Port %d\n",
       VAR_11->physical_port);

  FUNC_1(VAR_10->shost,
         VAR_9);
 } else if ((VAR_11->port_link_status & VAR_1) ||
      ((VAR_11->port_link_status & VAR_2) &&
       (VAR_11->port_fault == VAR_5))) {
  VAR_10->state = VAR_7;

  FUNC_0(VAR_10, VAR_8,
       VAR_3 | VAR_4,
       "BC_%d : Link UP on Port %d\n",
       VAR_11->physical_port);
 }
}
