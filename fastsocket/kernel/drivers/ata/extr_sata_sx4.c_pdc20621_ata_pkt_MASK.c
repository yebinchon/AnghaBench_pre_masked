
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {scalar_t__ protocol; int flags; int ctl; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ata_taskfile *VAR_14,
         unsigned int VAR_15, u8 *VAR_16,
         unsigned int VAR_17)
{
 unsigned int VAR_18, VAR_19;
 __le32 *VAR_20 = (__le32 *) VAR_16;
 u8 VAR_21;

 unsigned int VAR_22 = VAR_6 +
          (VAR_9 * VAR_17) +
          VAR_7;
 FUNC_0("ENTER, dimm_sg == 0x%x, %d\n", VAR_22, VAR_22);

 VAR_18 = VAR_8;




 if ((VAR_14->protocol == VAR_2) && (!(VAR_14->flags & VAR_5)))
  VAR_16[VAR_18++] = VAR_12;
 else if (VAR_14->protocol == VAR_3)
  VAR_16[VAR_18++] = VAR_11;
 else
  VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = VAR_17 + 1;
 VAR_16[VAR_18++] = 0xff;


 VAR_19 = VAR_18 >> 2;
 if (VAR_14->protocol == VAR_3)
  VAR_20[VAR_19] = 0;
 else
  VAR_20[VAR_19] = FUNC_1(VAR_22);
 VAR_20[VAR_19 + 1] = 0;
 VAR_18 += 8;

 if (VAR_15 == 0)
  VAR_21 = VAR_1;
 else
  VAR_21 = VAR_1 | VAR_0;


 VAR_16[VAR_18++] = (1 << 5) | VAR_10 | VAR_4;
 VAR_16[VAR_18++] = VAR_21;


 VAR_16[VAR_18++] = (1 << 5) | VAR_13;
 VAR_16[VAR_18++] = VAR_14->ctl;

 return VAR_18;
}
