
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ bdeSize; int bdeFlags; } ;
struct TYPE_4__ {void* w; TYPE_1__ f; } ;
struct ulp_bde64 {TYPE_2__ tus; void* addrHigh; void* addrLow; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int list; int virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_6 (struct lpfc_hba*,int ,int *) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static struct lpfc_dmabuf *
FUNC_9(struct lpfc_hba *VAR_5, unsigned int VAR_6,
         int VAR_7, struct ulp_bde64 *VAR_8,
         int *VAR_9)
{
 struct lpfc_dmabuf *VAR_10 = ((void*)0);
 struct lpfc_dmabuf *VAR_11;
 unsigned int VAR_12 = VAR_6;


 if (!VAR_6 || (VAR_6 > (*VAR_9 * VAR_3)))
  return ((void*)0);


 *VAR_9 = (VAR_6 % VAR_3 ? VAR_6/VAR_3 + 1 :
   VAR_6/VAR_3);


 while (VAR_12) {

  VAR_11 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_2);
  if (!VAR_11) {
   if (VAR_10)
    FUNC_5(VAR_5, VAR_10);
   return ((void*)0);
  }

  FUNC_0(&VAR_11->list);
  VAR_11->virt = FUNC_6(VAR_5, VAR_4, &(VAR_11->phys));

  if (!VAR_11->virt) {
   FUNC_1(VAR_11);
   if (VAR_10)
    FUNC_5(VAR_5, VAR_10);
   return ((void*)0);
  }


  if (!VAR_10)
   VAR_10 = VAR_11;
  else
   FUNC_4(&VAR_11->list, &VAR_10->list);


  if (VAR_7)
   VAR_8->tus.f.bdeFlags = VAR_0;
  else
   VAR_8->tus.f.bdeFlags = VAR_1;
  VAR_8->addrLow = FUNC_3(FUNC_8(VAR_11->phys));
  VAR_8->addrHigh = FUNC_3(FUNC_7(VAR_11->phys));
  VAR_8->tus.f.bdeSize = (uint16_t)
   (VAR_12 >= VAR_3 ? VAR_3 :
    VAR_12);
  VAR_12 -= VAR_8->tus.f.bdeSize;
  VAR_8->tus.w = FUNC_3(VAR_8->tus.w);
  VAR_8++;
 }
 return VAR_10;
}
