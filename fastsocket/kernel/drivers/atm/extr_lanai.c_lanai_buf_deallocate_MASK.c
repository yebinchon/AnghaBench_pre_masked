
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lanai_buffer {int * ptr; int * end; int * start; int dmaaddr; } ;


 int FUNC_0 (struct lanai_buffer*) ;
 int FUNC_1 (struct pci_dev*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct lanai_buffer *VAR_0,
 struct pci_dev *VAR_1)
{
 if (VAR_0->start != ((void*)0)) {
  FUNC_1(VAR_1, FUNC_0(VAR_0),
      VAR_0->start, VAR_0->dmaaddr);
  VAR_0->start = VAR_0->end = VAR_0->ptr = ((void*)0);
 }
}
