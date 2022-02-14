
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ilo_hwinfo {int * db_vaddr; int ilo_dev; } ;
struct TYPE_10__ {int * db_base; } ;
struct TYPE_9__ {char* recv_desc; unsigned long recv_desc_pa; } ;
struct TYPE_8__ {char* send_desc; unsigned long send_desc_pa; } ;
struct TYPE_7__ {char* recv_fifobar; int recv_fifobar_pa; } ;
struct TYPE_6__ {char* send_fifobar; int send_fifobar_pa; } ;
struct ccb {int channel; TYPE_5__ ccb_u5; TYPE_4__ ccb_u4; TYPE_3__ ccb_u2; TYPE_2__ ccb_u3; TYPE_1__ ccb_u1; } ;
struct ccb_data {unsigned long dma_pa; scalar_t__ dma_size; scalar_t__ dma_va; struct ccb ilo_ccb; struct ccb driver_ccb; } ;
typedef unsigned long dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ccb*,int ,int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,unsigned long*) ;
 unsigned long FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ilo_hwinfo *VAR_7, struct ccb_data *VAR_8, int VAR_9)
{
 char *VAR_10;
 dma_addr_t VAR_11;
 struct ccb *VAR_12, *VAR_13;

 VAR_12 = &VAR_8->driver_ccb;
 VAR_13 = &VAR_8->ilo_ccb;

 VAR_8->dma_size = 2 * FUNC_3(VAR_6) +
    2 * FUNC_1(VAR_6) +
    VAR_3 + VAR_2;

 VAR_8->dma_va = FUNC_5(VAR_7->ilo_dev, VAR_8->dma_size,
         &VAR_8->dma_pa);
 if (!VAR_8->dma_va)
  return -VAR_0;

 VAR_10 = (char *)VAR_8->dma_va;
 VAR_11 = VAR_8->dma_pa;

 FUNC_4(VAR_10, 0, VAR_8->dma_size);

 VAR_10 = (char *)FUNC_6((unsigned long)VAR_10, VAR_3);
 VAR_11 = FUNC_6(VAR_11, VAR_3);





 FUNC_0(VAR_12, VAR_6, VAR_5);
 FUNC_0(VAR_13, VAR_6, VAR_5);

 FUNC_2(VAR_10, VAR_6);
 VAR_12->ccb_u1.send_fifobar = VAR_10 + VAR_1;
 VAR_13->ccb_u1.send_fifobar_pa = VAR_11 + VAR_1;
 VAR_10 += FUNC_3(VAR_6);
 VAR_11 += FUNC_3(VAR_6);

 VAR_10 = (char *)FUNC_6((unsigned long)VAR_10, VAR_2);
 VAR_11 = FUNC_6(VAR_11, VAR_2);

 FUNC_2(VAR_10, VAR_6);
 VAR_12->ccb_u3.recv_fifobar = VAR_10 + VAR_1;
 VAR_13->ccb_u3.recv_fifobar_pa = VAR_11 + VAR_1;
 VAR_10 += FUNC_3(VAR_6);
 VAR_11 += FUNC_3(VAR_6);

 VAR_12->ccb_u2.send_desc = VAR_10;
 VAR_13->ccb_u2.send_desc_pa = VAR_11;
 VAR_11 += FUNC_1(VAR_6);
 VAR_10 += FUNC_1(VAR_6);

 VAR_12->ccb_u4.recv_desc = VAR_10;
 VAR_13->ccb_u4.recv_desc_pa = VAR_11;

 VAR_12->channel = VAR_9;
 VAR_13->channel = VAR_9;

 VAR_12->ccb_u5.db_base = VAR_7->db_vaddr + (VAR_9 << VAR_4);
 VAR_13->ccb_u5.db_base = ((void*)0);

 return 0;
}
