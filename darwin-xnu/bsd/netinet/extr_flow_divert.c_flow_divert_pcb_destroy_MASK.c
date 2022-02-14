
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_divert_pcb {int * app_data; int * connect_packet; int * connect_token; int * remote_address; int * local_address; int bytes_received; int bytes_sent; int bytes_read_by_app; int bytes_written_by_app; } ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct flow_divert_pcb*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct flow_divert_pcb *VAR_4)
{
 FUNC_0(VAR_0, VAR_4, "Destroying, app tx %u, app rx %u, tunnel tx %u, tunnel rx %u",
   VAR_4->bytes_written_by_app, VAR_4->bytes_read_by_app, VAR_4->bytes_sent, VAR_4->bytes_received);

 if (VAR_4->local_address != ((void*)0)) {
  FUNC_1(VAR_4->local_address, VAR_2);
 }
 if (VAR_4->remote_address != ((void*)0)) {
  FUNC_1(VAR_4->remote_address, VAR_2);
 }
 if (VAR_4->connect_token != ((void*)0)) {
  FUNC_3(VAR_4->connect_token);
 }
 if (VAR_4->connect_packet != ((void*)0)) {
  FUNC_3(VAR_4->connect_packet);
 }
 if (VAR_4->app_data != ((void*)0)) {
  FUNC_1(VAR_4->app_data, VAR_3);
 }
 FUNC_2(VAR_4, sizeof(*VAR_4), VAR_1);
}
