
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct ib_umad_packet {TYPE_2__ mad; int length; TYPE_4__* msg; } ;
struct ib_umad_file {int dummy; } ;
struct ib_mad_send_wc {scalar_t__ status; TYPE_3__* send_buf; } ;
struct ib_mad_agent {struct ib_umad_file* context; } ;
struct TYPE_8__ {int ah; } ;
struct TYPE_7__ {struct ib_umad_packet** context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_umad_file*,struct ib_umad_packet*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct ib_umad_packet*) ;
 int FUNC_4 (struct ib_umad_file*,struct ib_mad_agent*,struct ib_umad_packet*) ;

__attribute__((used)) static void FUNC_5(struct ib_mad_agent *VAR_3,
    struct ib_mad_send_wc *VAR_4)
{
 struct ib_umad_file *VAR_5 = VAR_3->context;
 struct ib_umad_packet *VAR_6 = VAR_4->send_buf->context[0];

 FUNC_0(VAR_5, VAR_6);
 FUNC_1(VAR_6->msg->ah);
 FUNC_2(VAR_6->msg);

 if (VAR_4->status == VAR_2) {
  VAR_6->length = VAR_1;
  VAR_6->mad.hdr.status = VAR_0;
  if (!FUNC_4(VAR_5, VAR_3, VAR_6))
   return;
 }
 FUNC_3(VAR_6);
}
