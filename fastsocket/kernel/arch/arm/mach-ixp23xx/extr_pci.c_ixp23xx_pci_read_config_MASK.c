
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int FUNC_0 (char*,int,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int* VAR_2 ;
 int* FUNC_3 (int ,unsigned int,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_4, unsigned int VAR_5,
    int VAR_6, int VAR_7, u32 *VAR_8)
{
 u32 VAR_9;
 u32 *VAR_10;

 VAR_9 = VAR_6 % 4;

 FUNC_0("In config_read(%d) %d from dev %d:%d:%d\n", VAR_7, VAR_6,
  VAR_4->number, FUNC_2(VAR_5), FUNC_1(VAR_5));

 VAR_10 = FUNC_3(VAR_4->number, VAR_5, VAR_6);
 if (!VAR_10)
  return VAR_0;

 VAR_3 = 0;
 *VAR_8 = (*VAR_10 >> (8*VAR_9)) & VAR_2[VAR_7];
 if (VAR_3) {
   VAR_3 = 0;
   *VAR_8 = 0xffffffff;
   return VAR_0;
  }

 return VAR_1;
}
