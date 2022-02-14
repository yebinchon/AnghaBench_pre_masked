
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct tmComResBusInfo {scalar_t__ m_dwSetWritePos; scalar_t__ m_dwGetReadPos; scalar_t__ m_dwGetWritePos; scalar_t__ m_dwSetReadPos; void* m_dwSizeGetRing; int * m_pdwGetRing; void* m_dwSizeSetRing; int * m_pdwSetRing; int m_wMaxReqSize; int Type; int lock; } ;
struct TYPE_4__ {int BARLocation; } ;
struct TYPE_3__ {int ResponseRing; int CommandRing; } ;
struct saa7164_dev {TYPE_2__ intfdesc; TYPE_1__ busdesc; scalar_t__ bmmio; struct tmComResBusInfo bus; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct saa7164_dev *VAR_3)
{
 struct tmComResBusInfo *VAR_4 = &VAR_3->bus;

 FUNC_0(&VAR_4->lock);

 VAR_4->Type = VAR_2;
 VAR_4->m_wMaxReqSize = VAR_1;

 VAR_4->m_pdwSetRing = (u8 *)(VAR_3->bmmio +
  ((u32)VAR_3->busdesc.CommandRing));

 VAR_4->m_dwSizeSetRing = VAR_0;

 VAR_4->m_pdwGetRing = (u8 *)(VAR_3->bmmio +
  ((u32)VAR_3->busdesc.ResponseRing));

 VAR_4->m_dwSizeGetRing = VAR_0;

 VAR_4->m_dwSetWritePos = ((u32)VAR_3->intfdesc.BARLocation) +
  (2 * sizeof(u64));
 VAR_4->m_dwSetReadPos = VAR_4->m_dwSetWritePos + (1 * sizeof(u32));

 VAR_4->m_dwGetWritePos = VAR_4->m_dwSetWritePos + (2 * sizeof(u32));
 VAR_4->m_dwGetReadPos = VAR_4->m_dwSetWritePos + (3 * sizeof(u32));

 return 0;
}
