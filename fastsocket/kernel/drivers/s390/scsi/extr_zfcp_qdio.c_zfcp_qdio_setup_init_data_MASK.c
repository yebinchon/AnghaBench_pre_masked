
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sbal; } ;
struct TYPE_7__ {scalar_t__ sbal; } ;
struct zfcp_qdio {TYPE_4__ req_q; TYPE_3__ resp_q; TYPE_1__* adapter; } ;
struct qdio_initialize {int no_input_qs; int no_output_qs; unsigned long int_parm; int flags; void** input_sbal_addr_array; void** output_sbal_addr_array; int output_handler; int input_handler; int qdr_ac; int qib_rflags; int adapter_name; TYPE_2__* cdev; int q_format; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_2__* ccw_device; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct qdio_initialize*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(struct qdio_initialize *VAR_9,
          struct zfcp_qdio *VAR_10)
{
 FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->cdev = VAR_10->adapter->ccw_device;
 VAR_9->q_format = VAR_3;
 FUNC_2(VAR_9->adapter_name, FUNC_1(&VAR_9->cdev->dev), 8);
 FUNC_0(VAR_9->adapter_name, 8);
 VAR_9->qib_rflags = VAR_5;
 if (VAR_6)
  VAR_9->qdr_ac |= VAR_4;
 VAR_9->no_input_qs = 1;
 VAR_9->no_output_qs = 1;
 VAR_9->input_handler = VAR_8;
 VAR_9->output_handler = VAR_7;
 VAR_9->int_parm = (unsigned long) VAR_10;
 VAR_9->flags = VAR_0 |
      VAR_1 | VAR_2;
 VAR_9->input_sbal_addr_array = (void **) (VAR_10->resp_q.sbal);
 VAR_9->output_sbal_addr_array = (void **) (VAR_10->req_q.sbal);
}
