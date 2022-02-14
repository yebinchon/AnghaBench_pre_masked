
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ib_mad_send_wc {int status; struct ib_mad_send_buf* send_buf; } ;
struct ib_mad_send_buf {int retries; scalar_t__* context; scalar_t__ mad; } ;
struct ib_mad_hdr {int attr_id; } ;
struct ib_mad_agent {struct cm_port* context; } ;
struct cm_port {TYPE_1__* counter_group; } ;
struct TYPE_2__ {int * counter; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;


 int FUNC_0 (int,int *) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct ib_mad_send_buf*) ;
 int FUNC_3 (struct ib_mad_send_buf*,int) ;

__attribute__((used)) static void FUNC_4(struct ib_mad_agent *VAR_4,
       struct ib_mad_send_wc *VAR_5)
{
 struct ib_mad_send_buf *VAR_6 = VAR_5->send_buf;
 struct cm_port *VAR_7;
 u16 VAR_8;

 VAR_7 = VAR_4->context;
 VAR_8 = FUNC_1(((struct ib_mad_hdr *)
      VAR_6->mad)->attr_id) - VAR_0;






 if (!VAR_6->context[0] && (VAR_8 != VAR_1))
  VAR_6->retries = 1;

 FUNC_0(1 + VAR_6->retries,
   &VAR_7->counter_group[VAR_2].counter[VAR_8]);
 if (VAR_6->retries)
  FUNC_0(VAR_6->retries,
    &VAR_7->counter_group[VAR_3].
    counter[VAR_8]);

 switch (VAR_5->status) {
 case 129:
 case 128:
  FUNC_2(VAR_6);
  break;
 default:
  if (VAR_6->context[0] && VAR_6->context[1])
   FUNC_3(VAR_6, VAR_5->status);
  else
   FUNC_2(VAR_6);
  break;
 }
}
