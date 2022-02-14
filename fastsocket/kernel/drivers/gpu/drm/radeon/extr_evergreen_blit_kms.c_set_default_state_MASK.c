
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct TYPE_2__ {int shader_gpu_addr; int state_offset; int state_len; } ;
struct radeon_device {int family; TYPE_1__ r600_blit; struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int) ;


 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_26 (int ) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_27 (int) ;
 int FUNC_28 (struct radeon_ring*,int) ;
 int FUNC_29 (int) ;

__attribute__((used)) static void
FUNC_30(struct radeon_device *VAR_12)
{
 struct radeon_ring *VAR_13 = &VAR_12->ring[VAR_7];
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39;
 int VAR_40, VAR_41;
 u64 VAR_42;
 int VAR_43;


 FUNC_28(VAR_13, FUNC_25(VAR_2, 0));
 FUNC_28(VAR_13, 0);

 if (VAR_12->family < VAR_0) {
  switch (VAR_12->family) {
  case 136:
  default:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 96;
   VAR_31 = 16;
   VAR_32 = 16;
   VAR_33 = 16;
   VAR_34 = 16;
   VAR_35 = 16;
   VAR_36 = 42;
   VAR_37 = 42;
   VAR_38 = 42;
   VAR_39 = 42;
   VAR_40 = 42;
   VAR_41 = 42;
   break;
  case 131:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 128;
   VAR_31 = 20;
   VAR_32 = 20;
   VAR_33 = 20;
   VAR_34 = 20;
   VAR_35 = 20;
   VAR_36 = 42;
   VAR_37 = 42;
   VAR_38 = 42;
   VAR_39 = 42;
   VAR_40 = 42;
   VAR_41 = 42;
   break;
  case 133:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 128;
   VAR_31 = 20;
   VAR_32 = 20;
   VAR_33 = 20;
   VAR_34 = 20;
   VAR_35 = 20;
   VAR_36 = 85;
   VAR_37 = 85;
   VAR_38 = 85;
   VAR_39 = 85;
   VAR_40 = 85;
   VAR_41 = 85;
   break;
  case 135:
  case 134:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 128;
   VAR_31 = 20;
   VAR_32 = 20;
   VAR_33 = 20;
   VAR_34 = 20;
   VAR_35 = 20;
   VAR_36 = 85;
   VAR_37 = 85;
   VAR_38 = 85;
   VAR_39 = 85;
   VAR_40 = 85;
   VAR_41 = 85;
   break;
  case 132:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 96;
   VAR_31 = 16;
   VAR_32 = 16;
   VAR_33 = 16;
   VAR_34 = 16;
   VAR_35 = 16;
   VAR_36 = 42;
   VAR_37 = 42;
   VAR_38 = 42;
   VAR_39 = 42;
   VAR_40 = 42;
   VAR_41 = 42;
   break;
  case 130:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 96;
   VAR_31 = 25;
   VAR_32 = 25;
   VAR_33 = 25;
   VAR_34 = 25;
   VAR_35 = 25;
   VAR_36 = 42;
   VAR_37 = 42;
   VAR_38 = 42;
   VAR_39 = 42;
   VAR_40 = 42;
   VAR_41 = 42;
   break;
  case 129:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 96;
   VAR_31 = 25;
   VAR_32 = 25;
   VAR_33 = 25;
   VAR_34 = 25;
   VAR_35 = 25;
   VAR_36 = 85;
   VAR_37 = 85;
   VAR_38 = 85;
   VAR_39 = 85;
   VAR_40 = 85;
   VAR_41 = 85;
   break;
  case 138:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 128;
   VAR_31 = 20;
   VAR_32 = 20;
   VAR_33 = 20;
   VAR_34 = 20;
   VAR_35 = 20;
   VAR_36 = 85;
   VAR_37 = 85;
   VAR_38 = 85;
   VAR_39 = 85;
   VAR_40 = 85;
   VAR_41 = 85;
   break;
  case 128:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 128;
   VAR_31 = 20;
   VAR_32 = 20;
   VAR_33 = 20;
   VAR_34 = 20;
   VAR_35 = 20;
   VAR_36 = 42;
   VAR_37 = 42;
   VAR_38 = 42;
   VAR_39 = 42;
   VAR_40 = 42;
   VAR_41 = 42;
   break;
  case 137:
   VAR_23 = 93;
   VAR_24 = 46;
   VAR_25 = 4;
   VAR_26 = 31;
   VAR_27 = 31;
   VAR_28 = 23;
   VAR_29 = 23;
   VAR_30 = 128;
   VAR_31 = 10;
   VAR_32 = 10;
   VAR_33 = 10;
   VAR_34 = 10;
   VAR_35 = 10;
   VAR_36 = 42;
   VAR_37 = 42;
   VAR_38 = 42;
   VAR_39 = 42;
   VAR_40 = 42;
   VAR_41 = 42;
   break;
  }

  if ((VAR_12->family == 136) ||
      (VAR_12->family == 132) ||
      (VAR_12->family == 130) ||
      (VAR_12->family == 129) ||
      (VAR_12->family == 137))
   VAR_14 = 0;
  else
   VAR_14 = VAR_11;

  VAR_14 |= (VAR_1 |
         FUNC_1(0) |
         FUNC_5(0) |
         FUNC_4(0) |
         FUNC_26(0) |
         FUNC_27(1) |
         FUNC_3(2) |
         FUNC_2(3));

  VAR_15 = (FUNC_19(VAR_23) |
       FUNC_22(VAR_24) |
       FUNC_6(VAR_25));
  VAR_16 = (FUNC_10(VAR_26) |
       FUNC_7(VAR_27));
  VAR_17 = (FUNC_13(VAR_28) |
       FUNC_16(VAR_29));
  VAR_18 = (FUNC_21(VAR_30) |
        FUNC_24(VAR_31) |
        FUNC_12(VAR_32) |
        FUNC_9(VAR_33));
  VAR_19 = (FUNC_15(VAR_34) |
          FUNC_18(VAR_35));
  VAR_20 = (FUNC_20(VAR_36) |
         FUNC_23(VAR_37));
  VAR_21 = (FUNC_11(VAR_38) |
         FUNC_8(VAR_39));
  VAR_22 = (FUNC_14(VAR_40) |
         FUNC_17(VAR_41));


  FUNC_28(VAR_13, FUNC_25(VAR_5, 1));
  FUNC_28(VAR_13, (VAR_9 - VAR_6) >> 2);
  FUNC_28(VAR_13, 0);


  FUNC_28(VAR_13, FUNC_25(VAR_5, 1));
  FUNC_28(VAR_13, (VAR_10 - VAR_6) >> 2);
  FUNC_28(VAR_13, 0x10001000);


  FUNC_28(VAR_13, FUNC_25(VAR_5, 11));
  FUNC_28(VAR_13, (VAR_8 - VAR_6) >> 2);
  FUNC_28(VAR_13, VAR_14);
  FUNC_28(VAR_13, VAR_15);
  FUNC_28(VAR_13, VAR_16);
  FUNC_28(VAR_13, VAR_17);
  FUNC_28(VAR_13, 0);
  FUNC_28(VAR_13, 0);
  FUNC_28(VAR_13, VAR_18);
  FUNC_28(VAR_13, VAR_19);
  FUNC_28(VAR_13, VAR_20);
  FUNC_28(VAR_13, VAR_21);
  FUNC_28(VAR_13, VAR_22);
 }


 FUNC_28(VAR_13, 0xc0012800);
 FUNC_28(VAR_13, 0x80000000);
 FUNC_28(VAR_13, 0x80000000);


 FUNC_28(VAR_13, 0xc0026f00);
 FUNC_28(VAR_13, 0x00000000);
 FUNC_28(VAR_13, 0x00000000);
 FUNC_28(VAR_13, 0x00000000);


 FUNC_28(VAR_13, 0xc0036e00);
 FUNC_28(VAR_13, 0x00000000);
 FUNC_28(VAR_13, 0x00000012);
 FUNC_28(VAR_13, 0x00000000);
 FUNC_28(VAR_13, 0x00000000);


 FUNC_28(VAR_13, FUNC_25(VAR_4, 0));
 FUNC_28(VAR_13, 1);


 VAR_43 = FUNC_0(VAR_12->r600_blit.state_len, 0x10);
 VAR_42 = VAR_12->r600_blit.shader_gpu_addr + VAR_12->r600_blit.state_offset;
 FUNC_28(VAR_13, FUNC_25(VAR_3, 2));
 FUNC_28(VAR_13, VAR_42 & 0xFFFFFFFC);
 FUNC_28(VAR_13, FUNC_29(VAR_42) & 0xFF);
 FUNC_28(VAR_13, VAR_43);

}
