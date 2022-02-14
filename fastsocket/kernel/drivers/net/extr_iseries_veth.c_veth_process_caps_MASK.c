
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_cap_data {int ack_timeout; int num_buffers; int ack_threshold; } ;
struct veth_lpar_connection {int ack_timeout; int num_ack_events; int remote_lp; struct veth_cap_data remote_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct veth_lpar_connection *VAR_5)
{
 struct veth_cap_data *VAR_6 = &VAR_5->remote_caps;
 int VAR_7;


 VAR_5->ack_timeout = VAR_6->ack_timeout * VAR_0 / 1000000;

 if ( (VAR_6->num_buffers == 0)
      || (VAR_6->ack_threshold > VAR_4)
      || (VAR_6->ack_threshold == 0)
      || (VAR_5->ack_timeout == 0) ) {
  FUNC_1("Received incompatible capabilities from LPAR %d.\n",
    VAR_5->remote_lp);
  return VAR_3;
 }

 VAR_7 = (VAR_6->num_buffers
      / VAR_6->ack_threshold) + 1;


 if (VAR_5->num_ack_events < VAR_7) {
  int VAR_8;

  VAR_8 = FUNC_0(VAR_5->remote_lp,
        VAR_7-VAR_5->num_ack_events);
  if (VAR_8 > 0)
   VAR_5->num_ack_events += VAR_8;

  if (VAR_5->num_ack_events < VAR_7) {
   FUNC_1("Couldn't allocate enough ack events "
     "for LPAR %d.\n", VAR_5->remote_lp);

   return VAR_1;
  }
 }


 return VAR_2;
}
