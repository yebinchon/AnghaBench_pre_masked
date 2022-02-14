
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct ata_taskfile {int dummy; } ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct ata_taskfile *VAR_6, u8 *VAR_7,
       unsigned int VAR_8,
        unsigned int VAR_9)
{
 u32 VAR_10;
 unsigned int VAR_11 = VAR_3 >> 2;
 __le32 *VAR_12 = (__le32 *) VAR_7;


 VAR_10 = VAR_1 + VAR_2 +
        (VAR_4 * VAR_8);
 FUNC_0("ATA sg addr 0x%x, %d\n", VAR_10, VAR_10);
 VAR_12[VAR_11] = FUNC_1(VAR_10);
 VAR_12[VAR_11 + 1] = FUNC_1(VAR_9 | VAR_0);

 FUNC_0("ATA PSG @ %x == (0x%x, 0x%x)\n",
  VAR_1 +
         (VAR_5 * VAR_8) +
         VAR_3,
  VAR_12[VAR_11], VAR_12[VAR_11 + 1]);
}
