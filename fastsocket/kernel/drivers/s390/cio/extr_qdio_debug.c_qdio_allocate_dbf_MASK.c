
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_irq {int debug_area; } ;
struct qdio_initialize {unsigned long q_format; unsigned long qib_param_field_format; TYPE_1__* cdev; int output_sbal_addr_array; int input_sbal_addr_array; int flags; int int_parm; int output_handler; int input_handler; int no_output_qs; int no_input_qs; int output_slib_elements; int input_slib_elements; int qib_param_field; int * adapter_name; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,struct qdio_irq*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long,...) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,char*) ;

void FUNC_8(struct qdio_initialize *VAR_3,
         struct qdio_irq *VAR_4)
{
 char VAR_5[20];

 FUNC_1("qfmt:%1d", VAR_3->q_format);
 FUNC_2(VAR_3->adapter_name, 8);
 FUNC_1("qpff%4x", VAR_3->qib_param_field_format);
 FUNC_2(&VAR_3->qib_param_field, sizeof(void *));
 FUNC_2(&VAR_3->input_slib_elements, sizeof(void *));
 FUNC_2(&VAR_3->output_slib_elements, sizeof(void *));
 FUNC_1("niq:%1d noq:%1d", VAR_3->no_input_qs,
    VAR_3->no_output_qs);
 FUNC_2(&VAR_3->input_handler, sizeof(void *));
 FUNC_2(&VAR_3->output_handler, sizeof(void *));
 FUNC_2(&VAR_3->int_parm, sizeof(long));
 FUNC_2(&VAR_3->flags, sizeof(long));
 FUNC_2(&VAR_3->input_sbal_addr_array, sizeof(void *));
 FUNC_2(&VAR_3->output_sbal_addr_array, sizeof(void *));
 FUNC_1("irq:%8lx", (unsigned long)VAR_4);


 FUNC_7(VAR_5, 20, "qdio_%s", FUNC_6(&VAR_3->cdev->dev));
 VAR_4->debug_area = FUNC_3(VAR_5, 2, 1, 16);
 FUNC_4(VAR_4->debug_area, &VAR_2);
 FUNC_5(VAR_4->debug_area, VAR_1);
 FUNC_0(VAR_0, VAR_4, "dbf created");
}
