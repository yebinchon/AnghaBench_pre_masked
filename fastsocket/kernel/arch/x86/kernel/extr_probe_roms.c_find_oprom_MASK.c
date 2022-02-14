
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ end; int start; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct resource*) ;
 struct resource* VAR_0 ;
 unsigned char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,unsigned short,unsigned short) ;
 scalar_t__ FUNC_3 (unsigned char const*,unsigned short) ;
 scalar_t__ FUNC_4 (struct pci_dev*,unsigned short,unsigned char const*) ;

__attribute__((used)) static struct resource *FUNC_5(struct pci_dev *VAR_1)
{
 struct resource *VAR_2 = ((void*)0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  struct resource *VAR_4 = &VAR_0[VAR_3];
  unsigned short VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  const unsigned char *VAR_10;

  if (VAR_4->end == 0)
   break;

  VAR_10 = FUNC_1(VAR_4->start);
  if (FUNC_3(VAR_10 + 0x18, VAR_5) != 0)
   continue;

  if (FUNC_3(VAR_10 + VAR_5 + 0x4, VAR_6) != 0)
   continue;

  if (FUNC_3(VAR_10 + VAR_5 + 0x6, VAR_7) != 0)
   continue;

  if (FUNC_2(VAR_1, VAR_6, VAR_7)) {
   VAR_2 = VAR_4;
   break;
  }

  if (FUNC_3(VAR_10 + VAR_5 + 0x8, VAR_8) == 0 &&
      FUNC_3(VAR_10 + VAR_5 + 0xc, VAR_9) == 0 &&
      VAR_9 >= 3 && VAR_8 &&
      FUNC_4(VAR_1, VAR_6, VAR_10 + VAR_5 + VAR_8)) {
   VAR_2 = VAR_4;
   break;
  }
 }

 return VAR_2;
}
