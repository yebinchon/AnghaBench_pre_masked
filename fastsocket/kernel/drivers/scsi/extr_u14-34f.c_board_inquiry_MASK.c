
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mscp {int cp_dma_addr; int cdb_len; scalar_t__ adapter_status; int * cdb; void* data_len; void* data_address; int xdir; int opcode; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__* cp_stat; int pdev; struct mscp* cp; struct mscp* board_id; } ;
struct TYPE_3__ {scalar_t__ io_port; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (int) ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (unsigned int) ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_3 (struct mscp*,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (void*,scalar_t__) ;
 void* FUNC_6 (int ,struct mscp*,int,int ) ;
 int FUNC_7 (int ,int,int,int ) ;
 int FUNC_8 (char*,int ,...) ;
 TYPE_1__** VAR_18 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (long) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_19) {
   struct mscp *VAR_20;
   dma_addr_t VAR_21;
   unsigned int VAR_22 = 0;
   unsigned long VAR_23;

   VAR_21 = FUNC_6(FUNC_2(VAR_19)->pdev, FUNC_2(VAR_19)->board_id,
                    sizeof(FUNC_2(VAR_19)->board_id), VAR_11);
   VAR_20 = &FUNC_2(VAR_19)->cp[0];
   VAR_20->cp_dma_addr = FUNC_6(FUNC_2(VAR_19)->pdev, VAR_20, sizeof(struct mscp),
                                     VAR_11);
   FUNC_3(VAR_20, 0, sizeof(struct mscp) - VAR_2);
   VAR_20->opcode = VAR_10;
   VAR_20->xdir = VAR_3;
   VAR_20->data_address = FUNC_1(VAR_21);
   VAR_20->data_len = FUNC_1(sizeof(FUNC_2(VAR_19)->board_id));
   VAR_20->cdb_len = 6;
   VAR_20->cdb[0] = VAR_6;

   if (FUNC_12(VAR_18[VAR_19]->io_port, VAR_9)) {
      FUNC_8("%s: board_inquiry, adapter busy.\n", FUNC_0(VAR_19));
      return VAR_15;
      }

   FUNC_2(VAR_19)->cp_stat[0] = VAR_8;


   FUNC_4(VAR_0, VAR_18[VAR_19]->io_port + VAR_14);


   FUNC_5(FUNC_1(VAR_20->cp_dma_addr), VAR_18[VAR_19]->io_port + VAR_13);


   FUNC_4(VAR_1, VAR_18[VAR_19]->io_port + VAR_12);

   FUNC_10(&VAR_16);
   VAR_23 = VAR_17;
   while ((VAR_17 - VAR_23) < VAR_7 && VAR_22++ < 20000) FUNC_11(100L);
   FUNC_9(&VAR_16);

   if (VAR_20->adapter_status || FUNC_2(VAR_19)->cp_stat[0] != VAR_5) {
      FUNC_2(VAR_19)->cp_stat[0] = VAR_5;
      FUNC_8("%s: board_inquiry, err 0x%x.\n", FUNC_0(VAR_19), VAR_20->adapter_status);
      return VAR_15;
      }

   FUNC_7(FUNC_2(VAR_19)->pdev, VAR_20->cp_dma_addr, sizeof(struct mscp),
                    VAR_11);
   FUNC_7(FUNC_2(VAR_19)->pdev, VAR_21, sizeof(FUNC_2(VAR_19)->board_id),
                    VAR_11);
   return VAR_4;
}
