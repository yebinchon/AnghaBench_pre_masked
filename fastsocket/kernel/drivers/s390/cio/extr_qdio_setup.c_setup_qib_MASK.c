
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long isliba; unsigned long osliba; int ebcnam; int qfmt; int rflags; } ;
struct qdio_irq {TYPE_3__ qib; TYPE_2__** output_qs; TYPE_1__** input_qs; } ;
struct qdio_initialize {int adapter_name; scalar_t__ no_output_qs; scalar_t__ no_input_qs; int q_format; int qib_rflags; } ;
struct TYPE_5__ {scalar_t__ slib; } ;
struct TYPE_4__ {scalar_t__ slib; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct qdio_irq *VAR_1,
        struct qdio_initialize *VAR_2)
{
 if (FUNC_1())
  VAR_1->qib.rflags |= VAR_0;

 VAR_1->qib.rflags |= VAR_2->qib_rflags;

 VAR_1->qib.qfmt = VAR_2->q_format;
 if (VAR_2->no_input_qs)
  VAR_1->qib.isliba =
   (unsigned long)(VAR_1->input_qs[0]->slib);
 if (VAR_2->no_output_qs)
  VAR_1->qib.osliba =
   (unsigned long)(VAR_1->output_qs[0]->slib);
 FUNC_0(VAR_1->qib.ebcnam, VAR_2->adapter_name, 8);
}
