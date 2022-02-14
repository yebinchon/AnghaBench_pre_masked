
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scq_info {scalar_t__ paddr; int * last; int * next; int * base; int pending; int transmit; int skblock; int lock; int used; } ;
struct idt77252_dev {int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int *,int *,unsigned long long) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct scq_info*) ;
 struct scq_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct scq_info *
FUNC_8(struct idt77252_dev *VAR_3, int VAR_4)
{
 struct scq_info *VAR_5;

 VAR_5 = FUNC_3(sizeof(struct scq_info), VAR_0);
 if (!VAR_5)
  return ((void*)0);
 VAR_5->base = FUNC_5(VAR_3->pcidev, VAR_2,
      &VAR_5->paddr);
 if (VAR_5->base == ((void*)0)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }
 FUNC_4(VAR_5->base, 0, VAR_2);

 VAR_5->next = VAR_5->base;
 VAR_5->last = VAR_5->base + (VAR_1 - 1);
 FUNC_1(&VAR_5->used, 0);

 FUNC_7(&VAR_5->lock);
 FUNC_7(&VAR_5->skblock);

 FUNC_6(&VAR_5->transmit);
 FUNC_6(&VAR_5->pending);

 FUNC_0("idt77252: SCQ: base 0x%p, next 0x%p, last 0x%p, paddr %08llx\n",
   VAR_5->base, VAR_5->next, VAR_5->last, (unsigned long long)VAR_5->paddr);

 return VAR_5;
}
