
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int __u8 ;
struct TYPE_4__ {int fpc; } ;
struct TYPE_5__ {TYPE_1__ fp_regs; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

 int FUNC_4 (struct pt_regs*,int,int) ;
 int FUNC_5 (struct pt_regs*,int,int,int) ;
 int FUNC_6 (struct pt_regs*,int,int,int) ;
 int FUNC_7 (struct pt_regs*,int,int,int) ;
 int FUNC_8 (struct pt_regs*,int,int) ;
 int FUNC_9 (struct pt_regs*,int,int) ;
 int FUNC_10 (struct pt_regs*,int,int) ;
 int FUNC_11 (struct pt_regs*,int,int) ;
 int FUNC_12 (struct pt_regs*,int,int) ;
 int FUNC_13 (struct pt_regs*,int,int) ;
 int FUNC_14 (struct pt_regs*,int,int) ;
 int FUNC_15 (struct pt_regs*,int,int) ;
 int FUNC_16 (struct pt_regs*,int,int) ;
 int FUNC_17 (struct pt_regs*,int,int,int) ;
 int FUNC_18 (struct pt_regs*,int,int,int) ;
 int FUNC_19 (struct pt_regs*,int,int,int) ;
 int FUNC_20 (struct pt_regs*,int,int) ;
 int FUNC_21 (struct pt_regs*,int,int) ;
 int FUNC_22 (struct pt_regs*,int,int) ;

int FUNC_23(__u8 *VAR_3, struct pt_regs * VAR_4) {
        int VAR_5 = 0;
        static const __u8 VAR_6[256] = {
                [0x00] = 0x03,[0x01] = 0x03,[0x02] = 0x03,[0x03] = 0x03,
  [0x04] = 0x0f,[0x05] = 0x0d,[0x06] = 0x0e,[0x07] = 0x0d,
  [0x08] = 0x03,[0x09] = 0x03,[0x0a] = 0x03,[0x0b] = 0x03,
                [0x0c] = 0x0f,[0x0d] = 0x03,[0x0e] = 0x06,[0x0f] = 0x06,
  [0x10] = 0x02,[0x11] = 0x02,[0x12] = 0x02,[0x13] = 0x02,
  [0x14] = 0x03,[0x15] = 0x02,[0x16] = 0x01,[0x17] = 0x03,
                [0x18] = 0x02,[0x19] = 0x02,[0x1a] = 0x02,[0x1b] = 0x02,
  [0x1c] = 0x02,[0x1d] = 0x02,[0x1e] = 0x05,[0x1f] = 0x05,
  [0x40] = 0x01,[0x41] = 0x01,[0x42] = 0x01,[0x43] = 0x01,
                [0x44] = 0x12,[0x45] = 0x0d,[0x46] = 0x11,[0x47] = 0x04,
  [0x48] = 0x01,[0x49] = 0x01,[0x4a] = 0x01,[0x4b] = 0x01,
  [0x4c] = 0x01,[0x4d] = 0x01,[0x53] = 0x06,[0x57] = 0x06,
                [0x5b] = 0x05,[0x5f] = 0x05,[0x84] = 0x13,[0x8c] = 0x13,
  [0x94] = 0x09,[0x95] = 0x08,[0x96] = 0x07,[0x98] = 0x0c,
  [0x99] = 0x0b,[0x9a] = 0x0a
        };
        static const void *VAR_7[256]= {
                [0x00] = 150,[0x01] = 153,[0x02] = 147,
                [0x03] = 160,[0x04] = 158,[0x05] = 145,
                [0x06] = 144,[0x07] = 135,[0x08] = 163,
                [0x09] = 180, [0x0a] = 184, [0x0b] = 133,
                [0x0c] = 140,[0x0d] = 172, [0x0e] = 142,
                [0x0f] = 137,[0x10] = 151,[0x11] = 154,
                [0x12] = 148,[0x13] = 161,[0x14] = 130,
                [0x15] = 131,[0x16] = 129,[0x17] = 139,
                [0x18] = 164, [0x19] = 182, [0x1a] = 185,
                [0x1b] = 134, [0x1c] = 141, [0x1d] = 173,
                [0x1e] = 143,[0x1f] = 138,[0x40] = 149,
                [0x41] = 152,[0x42] = 146,[0x43] = 159,
                [0x44] = 156,[0x45] = 157,[0x46] = 155,
                [0x47] = 165,[0x48] = 162, [0x49] = 175,
                [0x4a] = 183, [0x4b] = 128, [0x4c] = 136,
                [0x4d] = 169, [0x53] = 170,[0x57] = 166,
                [0x5b] = 171,[0x5f] = 167,[0x84] = 132,
                [0x8c] = 168, [0x94] = 179,[0x95] = 181,
                [0x96] = 174,[0x98] = 177,[0x99] = 178,
                [0x9a] = 176
        };

        switch (VAR_6[VAR_3[1]]) {
        case 1:
                if (VAR_3[3] & 0x22)
   return VAR_1;
                FUNC_2((VAR_3[3] >> 4) & 15);
                FUNC_2(((VAR_3[3] >> 4) & 15) + 2);
                FUNC_2(VAR_3[3] & 15);
                FUNC_2((VAR_3[3] & 15) + 2);

                VAR_5 = ((int (*)(struct pt_regs *,int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
                FUNC_0(((VAR_3[3] >> 4) & 15) + 2);
                FUNC_0(VAR_3[3] & 15);
                FUNC_0((VAR_3[3] & 15) + 2);
  break;
        case 2:
                FUNC_2((VAR_3[3] >> 4) & 15);
                FUNC_2(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
                FUNC_0(VAR_3[3] & 15);
  break;
        case 3:
                FUNC_3((VAR_3[3] >> 4) & 15);
                FUNC_3(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_1((VAR_3[3] >> 4) & 15);
                FUNC_1(VAR_3[3] & 15);
  break;
        case 4:
                if (VAR_3[3] & 0x22)
   return VAR_1;
                FUNC_2((VAR_3[3] >> 4) & 15);
                FUNC_2(((VAR_3[3] >> 4) & 15) + 2);
                FUNC_2(VAR_3[3] & 15);
                FUNC_2((VAR_3[3] & 15) + 2);

                VAR_5 = ((int (*)(struct pt_regs *, int, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15, VAR_3[2] >> 4);
                FUNC_0((VAR_3[3] >> 4) & 15);
                FUNC_0(((VAR_3[3] >> 4) & 15) + 2);
                FUNC_0(VAR_3[3] & 15);
                FUNC_0((VAR_3[3] & 15) + 2);
  break;
        case 5:
                FUNC_2((VAR_3[2] >> 4) & 15);
                FUNC_2((VAR_3[3] >> 4) & 15);
                FUNC_2(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15, VAR_3[2] >> 4);
                FUNC_0((VAR_3[2] >> 4) & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
                FUNC_0(VAR_3[3] & 15);
  break;
        case 6:
                FUNC_3((VAR_3[2] >> 4) & 15);
                FUNC_3((VAR_3[3] >> 4) & 15);
                FUNC_3(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15, VAR_3[2] >> 4);
                FUNC_1((VAR_3[2] >> 4) & 15);
                FUNC_1((VAR_3[3] >> 4) & 15);
                FUNC_1(VAR_3[3] & 15);
  break;
        case 7:

                if (VAR_3[3] & 0x20)
   return VAR_1;
                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
                FUNC_0(((VAR_3[3] >> 4) & 15) + 2);
  break;
        case 8:

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
  break;
        case 9:

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_1((VAR_3[3] >> 4) & 15);
  break;
        case 10:
                if ((VAR_3[2] & 128) == 128 || (VAR_3[2] & 96) == 32)

   return VAR_1;
                if (VAR_3[3] & 2)
   return VAR_1;
                FUNC_2(VAR_3[3] & 15);
                FUNC_2((VAR_3[3] & 15) + 2);

                VAR_5 = ((int (*)(struct pt_regs *, int, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15, VAR_3[2] >> 4);
  break;
        case 11:
                if ((VAR_3[2] & 128) == 128 || (VAR_3[2] & 96) == 32)

   return VAR_1;
                FUNC_2(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15, VAR_3[2] >> 4);
  break;
        case 12:
                if ((VAR_3[2] & 128) == 128 || (VAR_3[2] & 96) == 32)

   return VAR_1;
                FUNC_3(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15, VAR_3[2] >> 4);
  break;
        case 13:

                if (VAR_3[3] & 0x20)
   return VAR_1;
                FUNC_2((VAR_3[3] >> 4) & 15);
                FUNC_2(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
                FUNC_0(((VAR_3[3] >> 4) & 15) + 2);
  break;
        case 14:

                if (VAR_3[3] & 0x20)
   return VAR_1;
                FUNC_3((VAR_3[3] >> 4) & 15);
                FUNC_3(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
                FUNC_0(((VAR_3[3] >> 4) & 15) + 2);
  break;
        case 15:

                FUNC_3((VAR_3[3] >> 4) & 15);
                FUNC_3(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
  break;
        case 16:

                if (VAR_3[3] & 2)
   return VAR_1;
                FUNC_2(VAR_3[3] & 15);
                FUNC_2((VAR_3[3] & 15) + 2);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_0((VAR_3[3] >> 4) & 15);
                break;
        case 17:

                if (VAR_3[3] & 2)
   return VAR_1;
                FUNC_2(VAR_3[3] & 15);
                FUNC_2((VAR_3[3] & 15) + 2);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_1((VAR_3[3] >> 4) & 15);
                break;
        case 18:

                FUNC_2(VAR_3[3] & 15);

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                FUNC_1((VAR_3[3] >> 4) & 15);
                break;
        case 19:

                VAR_5 = ((int (*)(struct pt_regs *, int, int))
   VAR_7[VAR_3[1]])
                        (VAR_4, VAR_3[3] >> 4, VAR_3[3] & 15);
                break;
        default:
                return VAR_1;
        }
 if (VAR_5 != 0) {
  VAR_2->thread.fp_regs.fpc |= VAR_5;
  if (VAR_2->thread.fp_regs.fpc & (VAR_5 << 8))
   return VAR_0;
 }
 return 0;
}
