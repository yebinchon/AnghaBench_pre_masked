
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ bdeSize; int bdeFlags; } ;
struct TYPE_4__ {void* w; TYPE_1__ f; } ;
struct ulp_bde64 {TYPE_2__ tus; void* addrHigh; void* addrLow; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int list; void* virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_3 (int,int ) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 void* FUNC_7 (struct lpfc_hba*,int ,int *) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static struct lpfc_dmabuf *
FUNC_10(struct lpfc_hba *VAR_6, int VAR_7, struct ulp_bde64 *VAR_8,
    uint32_t VAR_9, int *VAR_10)
{
 struct lpfc_dmabuf *VAR_11 = ((void*)0);
 struct lpfc_dmabuf *VAR_12;
 int VAR_13, VAR_14 = 0;


 VAR_13 = VAR_9 > VAR_1 ? VAR_1: VAR_9;

 while (VAR_9) {

  VAR_12 = FUNC_3(sizeof(struct lpfc_dmabuf), VAR_2);
  if (!VAR_12) {
   if (VAR_11)
    FUNC_6(VAR_6, VAR_11);
   return ((void*)0);
  }

  FUNC_0(&VAR_12->list);

  if (VAR_7 == FUNC_1(VAR_5) ||
      VAR_7 == FUNC_1(VAR_4))
   VAR_12->virt = FUNC_7(VAR_6, VAR_3, &(VAR_12->phys));
  else
   VAR_12->virt = FUNC_7(VAR_6, 0, &(VAR_12->phys));

  if (!VAR_12->virt) {
   FUNC_2(VAR_12);
   if (VAR_11)
    FUNC_6(VAR_6, VAR_11);
   return ((void*)0);
  }


  if (!VAR_11)
   VAR_11 = VAR_12;
  else
   FUNC_5(&VAR_12->list, &VAR_11->list);

  VAR_8->tus.f.bdeFlags = VAR_0;

  VAR_8->addrLow = FUNC_4(FUNC_9(VAR_12->phys) );
  VAR_8->addrHigh = FUNC_4(FUNC_8(VAR_12->phys) );
  VAR_8->tus.f.bdeSize = (uint16_t) VAR_13;
  VAR_8->tus.w = FUNC_4(VAR_8->tus.w);
  VAR_8++;

  VAR_14++;
  VAR_9 -= VAR_13;
 }

 *VAR_10 = VAR_14;
 return VAR_11;
}
