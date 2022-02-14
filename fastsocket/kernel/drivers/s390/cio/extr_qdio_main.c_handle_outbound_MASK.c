
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pci_out_enabled; int use_enh_siga; } ;
struct TYPE_7__ {TYPE_4__ out; } ;
struct qdio_q {int tasklet; TYPE_3__ u; TYPE_2__* irq_ptr; int nr_buf_used; } ;
struct TYPE_5__ {int mmwc; } ;
struct TYPE_6__ {TYPE_1__ ssqd_desc; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_1 (int,int *) ;
 int VAR_4 ;
 int FUNC_2 (struct qdio_q*,int ,unsigned char*,int ) ;
 scalar_t__ FUNC_3 (struct qdio_q*) ;
 scalar_t__ FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 unsigned long FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (struct qdio_q*,unsigned long) ;
 int FUNC_9 (struct qdio_q*) ;
 int FUNC_10 (struct qdio_q*,int ) ;
 scalar_t__ FUNC_11 (struct qdio_q*) ;
 int FUNC_12 (struct qdio_q*,int,unsigned char,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct qdio_q *VAR_7, unsigned int VAR_8,
      int VAR_9, int VAR_10)
{
 unsigned char VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_10(VAR_7, VAR_5);

 VAR_10 = FUNC_12(VAR_7, VAR_9, VAR_3, VAR_10);
 VAR_12 = FUNC_1(VAR_10, &VAR_7->nr_buf_used);
 FUNC_0(VAR_12 > VAR_2);

 if (VAR_8 & VAR_0) {
  VAR_7->u.out.pci_out_enabled = 1;
  FUNC_10(VAR_7, VAR_6);
 }
 else
  VAR_7->u.out.pci_out_enabled = 0;

 if (FUNC_11(VAR_7) == VAR_1) {
  if (FUNC_3(VAR_7))
   VAR_13 = FUNC_8(VAR_7, 0);
  else
   if ((VAR_7->irq_ptr->ssqd_desc.mmwc > 1) &&
       (VAR_10 > 1) &&
       (VAR_10 <= VAR_7->irq_ptr->ssqd_desc.mmwc)) {

    VAR_7->u.out.use_enh_siga = 1;
    VAR_13 = FUNC_8(VAR_7, 0);
   } else {
    int VAR_14;
    unsigned long VAR_15;





    VAR_7->u.out.use_enh_siga = 0;
    VAR_14 = VAR_9;
    while (VAR_10--) {
     VAR_15 = FUNC_7(
       &VAR_7->u.out, VAR_14);
     VAR_13 = FUNC_8(VAR_7, VAR_15);
     if (VAR_13)
      goto out;
     VAR_14 = FUNC_5(VAR_14);
    }
   }
  goto out;
 }

 if (FUNC_4(VAR_7)) {
  FUNC_9(VAR_7);
  goto out;
 }


 FUNC_2(VAR_7, FUNC_6(VAR_9), &VAR_11, 0);
 if (VAR_11 != VAR_3)
  VAR_13 = FUNC_8(VAR_7, 0);
 else
  FUNC_10(VAR_7, VAR_4);

out:
 FUNC_13(&VAR_7->tasklet);
 return VAR_13;
}
