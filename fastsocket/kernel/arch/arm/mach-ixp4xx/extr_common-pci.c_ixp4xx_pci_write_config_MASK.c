
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,unsigned int,int) ;
 scalar_t__ FUNC_4 (int,int,int) ;
 int FUNC_5 (char*,int,int,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_4, unsigned int VAR_5, int VAR_6, int VAR_7, u32 VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13 = VAR_4->number;

 FUNC_5("write_config_byte %#x to %d size %d dev %d:%d:%d\n", VAR_8, VAR_6,
  VAR_7, VAR_13, FUNC_1(VAR_5), FUNC_0(VAR_5));

 VAR_9 = VAR_6 % 4;
 VAR_10 = FUNC_2(VAR_9, VAR_7);
 if (VAR_10 == 0xffffffff)
  return VAR_1;

 VAR_11 = FUNC_3(VAR_13, VAR_5, VAR_6);
 VAR_12 = VAR_8 << (8*VAR_9);
 if (FUNC_4(VAR_11, VAR_10 | VAR_0, VAR_12))
  return VAR_2;

 return VAR_3;
}
