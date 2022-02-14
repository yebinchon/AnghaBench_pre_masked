
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct lanai_buffer {int dmaaddr; int * start; int * end; int * ptr; } ;


 int FUNC_0 (int,char*,unsigned long) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct lanai_buffer *VAR_1,
 size_t VAR_2, size_t VAR_3, struct pci_dev *VAR_4)
{
 int VAR_5;

 if (VAR_2 > (128 * 1024))
  VAR_2 = 128 * 1024;
 for (VAR_5 = VAR_0; VAR_5 < VAR_2; VAR_5 *= 2)
  ;
 if (VAR_3 < VAR_0)
  VAR_3 = VAR_0;
 do {





  VAR_1->start = FUNC_2(VAR_4, VAR_5, &VAR_1->dmaaddr);
  if (VAR_1->start != ((void*)0)) {

   FUNC_0((VAR_1->dmaaddr & ~0xFFFFFF00) == 0,
       "bad dmaaddr: 0x%lx\n",
       (unsigned long) VAR_1->dmaaddr);
   VAR_1->ptr = VAR_1->start;
   VAR_1->end = (u32 *)
       (&((unsigned char *) VAR_1->start)[VAR_5]);
   FUNC_1(VAR_1->start, 0, VAR_5);
   break;
  }
  VAR_5 /= 2;
 } while (VAR_5 >= VAR_3);
}
