
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cm_control {int wr_dma_go; int cm_control_reg; } ;
typedef int uint64_t ;
struct putdma {int bytes; scalar_t__ localAddr; int intrVector; int intrHostDest; int amoModType; int amoHostDest; int peerIO; int DoneIntEnable; int DoneAmoEnable; int hostAddr; } ;
struct mbcs_soft {struct putdma putdma; void* mmr_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,int ,scalar_t__,int,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct mbcs_soft *VAR_5)
{
 void *VAR_6;
 struct putdma *VAR_7;
 uint64_t VAR_8;
 union cm_control VAR_9;

 VAR_6 = VAR_5->mmr_base;
 VAR_7 = &VAR_5->putdma;


 if (!VAR_7->hostAddr)
  return -1;

 VAR_8 =
     (VAR_7->bytes + (VAR_3 - 1)) / VAR_3;


 FUNC_2(VAR_6, FUNC_3(VAR_7->hostAddr),
     VAR_7->localAddr,
     (VAR_7->localAddr < VAR_0) ? 0 :
     (VAR_7->localAddr < VAR_1) ? 1 :
     (VAR_7->localAddr < VAR_2) ? 2 : 3,
     VAR_8,
     VAR_7->DoneAmoEnable,
     VAR_7->DoneIntEnable,
     VAR_7->peerIO,
     VAR_7->amoHostDest,
     VAR_7->amoModType,
     VAR_7->intrHostDest, VAR_7->intrVector);


 VAR_9.cm_control_reg = FUNC_0(VAR_6, VAR_4);
 VAR_9.wr_dma_go = 1;
 FUNC_1(VAR_6, VAR_4, VAR_9.cm_control_reg);

 return 0;

}
