
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int __u8 ;
typedef long __u64 ;
typedef int __u32 ;
struct TYPE_4__ {int fpc; } ;
struct TYPE_5__ {TYPE_1__ fp_regs; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pt_regs*,int,int,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;



 int FUNC_5 (long*,long*,int) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (struct pt_regs*,int,double*) ;
 int FUNC_8 (struct pt_regs*,int,long) ;
 int FUNC_9 (struct pt_regs*,int,float*) ;
 int FUNC_10 (struct pt_regs*,int,double*,int) ;
 int FUNC_11 (struct pt_regs*,int,float*,int) ;
 int FUNC_12 (struct pt_regs*,int,double*) ;
 int FUNC_13 (struct pt_regs*,int,float*) ;
 int FUNC_14 (struct pt_regs*,int,float*) ;
 int FUNC_15 (struct pt_regs*,int,long) ;
 int FUNC_16 (struct pt_regs*,int,long) ;

int FUNC_17(__u8 *VAR_3, struct pt_regs * VAR_4) {
        int VAR_5 = 0;

        static const __u8 VAR_6[256] = {
                [0x04] = 0x06,[0x05] = 0x05,[0x06] = 0x07,[0x07] = 0x05,
  [0x08] = 0x02,[0x09] = 0x02,[0x0a] = 0x02,[0x0b] = 0x02,
  [0x0c] = 0x06,[0x0d] = 0x02,[0x0e] = 0x04,[0x0f] = 0x04,
                [0x10] = 0x08,[0x11] = 0x09,[0x12] = 0x0a,[0x14] = 0x02,
  [0x15] = 0x01,[0x17] = 0x02,[0x18] = 0x01,[0x19] = 0x01,
  [0x1a] = 0x01,[0x1b] = 0x01,[0x1c] = 0x01,[0x1d] = 0x01,
                [0x1e] = 0x03,[0x1f] = 0x03,
        };
        static const void *VAR_7[]= {
                [0x04] = 145,[0x05] = 144,[0x06] = 143,
                [0x07] = 135,[0x08] = 146, [0x09] = 150,
                [0x0a] = 152, [0x0b] = 133, [0x0c] = 139,
                [0x0d] = 148, [0x0e] = 141,[0x0f] = 136,
                [0x10] = 129,[0x11] = 130,[0x12] = 128,
                [0x14] = 131,[0x15] = 132,[0x17] = 138,
                [0x18] = 147, [0x19] = 151, [0x1a] = 153,
                [0x1b] = 134, [0x1c] = 140, [0x1d] = 149,
                [0x1e] = 142,[0x1f] = 137
        };

        switch (VAR_6[VAR_3[5]]) {
        case 1: {
                __u64 *VAR_8, VAR_9;
                __u32 VAR_10;

                FUNC_3((VAR_3[1] >> 4) & 15);
                VAR_10 = *((__u32 *) VAR_3);
                VAR_8 = (__u64 *) FUNC_0(VAR_4, VAR_10 >> 16, VAR_10 >> 12, VAR_10);
                FUNC_5(&VAR_9, VAR_8, 8);

                VAR_5 = ((int (*)(struct pt_regs *, int, double *))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, (double *) &VAR_9);
                FUNC_1((VAR_3[1] >> 4) & 15);
                break;
        }
        case 2: {
                __u32 *VAR_11, VAR_12;
                __u32 VAR_13;

                FUNC_4((VAR_3[1] >> 4) & 15);
                VAR_13 = *((__u32 *) VAR_3);
                VAR_11 = (__u32 *) FUNC_0(VAR_4, VAR_13 >> 16, VAR_13 >> 12, VAR_13);
                FUNC_6(VAR_12, VAR_11);

                VAR_5 = ((int (*)(struct pt_regs *, int, float *))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, (float *) &VAR_12);
                FUNC_2((VAR_3[1] >> 4) & 15);
                break;
        }
        case 3: {
                __u64 *VAR_14, VAR_15;
                __u32 VAR_16;

                FUNC_3((VAR_3[1] >> 4) & 15);
                FUNC_3((VAR_3[4] >> 4) & 15);
                VAR_16 = *((__u32 *) VAR_3);
                VAR_14 = (__u64 *) FUNC_0(VAR_4, VAR_16 >> 16, VAR_16 >> 12, VAR_16);
                FUNC_5(&VAR_15, VAR_14, 8);

                VAR_5 = ((int (*)(struct pt_regs *, int, double *, int))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, (double *) &VAR_15, VAR_3[4] >> 4);
                FUNC_1((VAR_3[1] >> 4) & 15);
                break;
        }
        case 4: {
                __u32 *VAR_17, VAR_18;
                __u32 VAR_19;

                FUNC_4((VAR_3[1] >> 4) & 15);
                FUNC_4((VAR_3[4] >> 4) & 15);
                VAR_19 = *((__u32 *) VAR_3);
                VAR_17 = (__u32 *) FUNC_0(VAR_4, VAR_19 >> 16, VAR_19 >> 12, VAR_19);
                FUNC_6(VAR_18, VAR_17);

                VAR_5 = ((int (*)(struct pt_regs *, int, float *, int))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, (float *) &VAR_18, VAR_3[4] >> 4);
                FUNC_2((VAR_3[4] >> 4) & 15);
                break;
        }
        case 5:

        {
                __u64 *VAR_20, VAR_21;
                __u32 VAR_22;
                if ((VAR_3[1] >> 4) & 0x20)
   return VAR_1;
                FUNC_3((VAR_3[1] >> 4) & 15);
                VAR_22 = *((__u32 *) VAR_3);
                VAR_20 = (__u64 *) FUNC_0(VAR_4, VAR_22 >> 16, VAR_22 >> 12, VAR_22);
                FUNC_5(&VAR_21, VAR_20, 8);

                VAR_5 = ((int (*)(struct pt_regs *, int, double *))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, (double *) &VAR_21);
                FUNC_1((VAR_3[1] >> 4) & 15);
                FUNC_1(((VAR_3[1] >> 4) & 15) + 2);
                break;
        }
        case 6:

        {
                __u32 *VAR_23, VAR_24;
                __u32 VAR_25;
                FUNC_4((VAR_3[1] >> 4) & 15);
                VAR_25 = *((__u32 *) VAR_3);
                VAR_23 = (__u32 *) FUNC_0(VAR_4, VAR_25 >> 16, VAR_25 >> 12, VAR_25);
                FUNC_6(VAR_24, VAR_23);

                VAR_5 = ((int (*)(struct pt_regs *, int, float *))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, (float *) &VAR_24);
                FUNC_1((VAR_3[1] >> 4) & 15);
                break;
        }
        case 7:

        {
                __u32 *VAR_26, VAR_27;
                __u32 VAR_28;
                if ((VAR_3[1] >> 4) & 0x20)
   return VAR_1;
                FUNC_4((VAR_3[1] >> 4) & 15);
                VAR_28 = *((__u32 *) VAR_3);
                VAR_26 = (__u32 *) FUNC_0(VAR_4, VAR_28 >> 16, VAR_28 >> 12, VAR_28);
                FUNC_6(VAR_27, VAR_26);

                VAR_5 = ((int (*)(struct pt_regs *, int, float *))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, (float *) &VAR_27);
                FUNC_1((VAR_3[1] >> 4) & 15);
                FUNC_1(((VAR_3[1] >> 4) & 15) + 2);
                break;
        }
        case 8: {
                __u64 VAR_29;
                __u32 VAR_30;

                FUNC_4((VAR_3[1] >> 4) & 15);
                VAR_30 = *((__u32 *) VAR_3);
                VAR_29 = (__u64) FUNC_0(VAR_4, VAR_30 >> 16, VAR_30 >> 12, VAR_30);

                VAR_5 = ((int (*)(struct pt_regs *, int, long))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, VAR_29);
                break;
        }
        case 9: {
                __u64 VAR_31;
                __u32 VAR_32;

                FUNC_3((VAR_3[1] >> 4) & 15);
                VAR_32 = *((__u32 *) VAR_3);
                VAR_31 = (__u64) FUNC_0(VAR_4, VAR_32 >> 16, VAR_32 >> 12, VAR_32);

                VAR_5 = ((int (*)(struct pt_regs *, int, long))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, VAR_31);
                break;
        }
        case 10: {
                __u64 VAR_33;
                __u32 VAR_34;

                if ((VAR_3[1] >> 4) & 2)
   return VAR_1;
                FUNC_3((VAR_3[1] >> 4) & 15);
                FUNC_3(((VAR_3[1] >> 4) & 15) + 2);
                VAR_34 = *((__u32 *) VAR_3);
                VAR_33 = (__u64) FUNC_0(VAR_4, VAR_34 >> 16, VAR_34 >> 12, VAR_34);

                VAR_5 = ((int (*)(struct pt_regs *, int, long))
   VAR_7[VAR_3[5]])
                        (VAR_4, VAR_3[1] >> 4, VAR_33);
                break;
        }
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
