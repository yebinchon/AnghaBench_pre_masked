
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_3(struct radeon_device *VAR_21)
{
 uint32_t VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28;
 uint32_t VAR_29;
 uint32_t VAR_30;
 uint32_t VAR_31;
 uint32_t VAR_32;
 uint32_t VAR_33;
 bool VAR_34;

 VAR_22 = FUNC_0(VAR_19);
 VAR_23 = FUNC_0(VAR_7);
 VAR_24 = FUNC_0(VAR_0);
 VAR_25 = FUNC_0(VAR_1);
 VAR_26 = FUNC_0(VAR_4);
 VAR_27 = FUNC_0(VAR_15);
 VAR_28 = FUNC_0(VAR_9);
 VAR_29 = FUNC_0(VAR_12);
 VAR_30 = FUNC_0(VAR_13);
 VAR_31 = FUNC_0(VAR_10);
 VAR_32 = FUNC_0(VAR_8);
 VAR_33 = FUNC_0(VAR_11);


 FUNC_1(VAR_19, (VAR_22 & ~VAR_20));

 FUNC_1(VAR_7, (VAR_23 & ~VAR_6));

 FUNC_1(VAR_0,
        (VAR_24 & ~(VAR_2 |
  VAR_3)));
 FUNC_1(VAR_1,
        (VAR_25 & ~(VAR_2 |
  VAR_3)));
 FUNC_1(VAR_4,
        (VAR_26 & ~VAR_5));

 FUNC_1(VAR_15,
        ((VAR_27 & ~VAR_17) |
  (1 << VAR_18) |
  VAR_16));

 FUNC_1(VAR_9, (VAR_28 & ~VAR_14));
 FUNC_1(VAR_12,
        (VAR_29 & ~0x400));
 FUNC_1(VAR_13,
        (VAR_30 & ~0x400));
 FUNC_1(VAR_10,
        (VAR_31 & ~0x400));
 FUNC_1(VAR_8,
        (VAR_32 & ~0x400));
 FUNC_1(VAR_11, (VAR_33 | 0x400));

 VAR_34 = FUNC_2(VAR_21);


 FUNC_1(VAR_19, VAR_22);
 FUNC_1(VAR_7, VAR_23);
 FUNC_1(VAR_0, VAR_24);
 FUNC_1(VAR_1, VAR_25);
 FUNC_1(VAR_4, VAR_26);
 FUNC_1(VAR_15, VAR_27);
 FUNC_1(VAR_9, VAR_28);
 FUNC_1(VAR_12, VAR_29);
 FUNC_1(VAR_13, VAR_30);
 FUNC_1(VAR_10, VAR_31);
 FUNC_1(VAR_8, VAR_32);
 FUNC_1(VAR_11, VAR_33);
 return VAR_34;
}
