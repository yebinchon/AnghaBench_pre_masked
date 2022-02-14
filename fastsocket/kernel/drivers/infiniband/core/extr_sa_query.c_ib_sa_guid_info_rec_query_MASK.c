
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_sa_query {struct ib_sa_client* client; int release; int * callback; TYPE_1__* mad_buf; struct ib_sa_port* port; } ;
struct ib_sa_port {struct ib_mad_agent* agent; } ;
struct TYPE_6__ {int comp_mask; } ;
struct TYPE_5__ {int attr_id; scalar_t__ method; } ;
struct ib_sa_mad {int data; TYPE_3__ sa_hdr; TYPE_2__ mad_hdr; } ;
struct ib_sa_guidinfo_rec {int dummy; } ;
struct ib_sa_guidinfo_query {void (* callback ) (int,struct ib_sa_guidinfo_rec*,void*) ;struct ib_sa_query sa_query; void* context; } ;
struct ib_sa_device {scalar_t__ start_port; struct ib_sa_port* port; } ;
struct ib_sa_client {int dummy; } ;
struct ib_mad_agent {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int ib_sa_comp_mask ;
typedef int gfp_t ;
struct TYPE_4__ {struct ib_sa_mad* mad; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ib_sa_query*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_sa_query*) ;
 int VAR_7 ;
 struct ib_sa_device* FUNC_4 (struct ib_device*,int *) ;
 int FUNC_5 (int ,int ,struct ib_sa_guidinfo_rec*,int ) ;
 int FUNC_6 (struct ib_sa_client*) ;
 int FUNC_7 (struct ib_sa_client*) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct ib_sa_mad*,struct ib_mad_agent*) ;
 int FUNC_9 (struct ib_sa_guidinfo_query*) ;
 struct ib_sa_guidinfo_query* FUNC_10 (int,int ) ;
 int VAR_10 ;
 int FUNC_11 (struct ib_sa_query*,int,int ) ;

int FUNC_12(struct ib_sa_client *VAR_11,
         struct ib_device *VAR_12, u8 VAR_13,
         struct ib_sa_guidinfo_rec *VAR_14,
         ib_sa_comp_mask VAR_15, u8 VAR_16,
         int VAR_17, gfp_t VAR_18,
         void (*VAR_19)(int VAR_20,
            struct ib_sa_guidinfo_rec *VAR_21,
            void *VAR_22),
         void *VAR_23,
         struct ib_sa_query **VAR_24)
{
 struct ib_sa_guidinfo_query *VAR_25;
 struct ib_sa_device *VAR_26 = FUNC_4(VAR_12, &VAR_10);
 struct ib_sa_port *VAR_27;
 struct ib_mad_agent *VAR_28;
 struct ib_sa_mad *VAR_29;
 int VAR_30;

 if (!VAR_26)
  return -VAR_1;

 if (VAR_16 != VAR_3 &&
     VAR_16 != VAR_4 &&
     VAR_16 != VAR_6) {
  return -VAR_0;
 }

 VAR_27 = &VAR_26->port[VAR_13 - VAR_26->start_port];
 VAR_28 = VAR_27->agent;

 VAR_25 = FUNC_10(sizeof *VAR_25, VAR_18);
 if (!VAR_25)
  return -VAR_2;

 VAR_25->sa_query.port = VAR_27;
 VAR_30 = FUNC_1(&VAR_25->sa_query, VAR_18);
 if (VAR_30)
  goto err1;

 FUNC_6(VAR_11);
 VAR_25->sa_query.client = VAR_11;
 VAR_25->callback = VAR_19;
 VAR_25->context = VAR_23;

 VAR_29 = VAR_25->sa_query.mad_buf->mad;
 FUNC_8(VAR_29, VAR_28);

 VAR_25->sa_query.callback = VAR_19 ? VAR_8 : ((void*)0);
 VAR_25->sa_query.release = VAR_9;

 VAR_29->mad_hdr.method = VAR_16;
 VAR_29->mad_hdr.attr_id = FUNC_2(VAR_5);
 VAR_29->sa_hdr.comp_mask = VAR_15;

 FUNC_5(VAR_7, FUNC_0(VAR_7), VAR_14,
  VAR_29->data);

 *VAR_24 = &VAR_25->sa_query;

 VAR_30 = FUNC_11(&VAR_25->sa_query, VAR_17, VAR_18);
 if (VAR_30 < 0)
  goto err2;

 return VAR_30;

err2:
 *VAR_24 = ((void*)0);
 FUNC_7(VAR_25->sa_query.client);
 FUNC_3(&VAR_25->sa_query);

err1:
 FUNC_9(VAR_25);
 return VAR_30;
}
