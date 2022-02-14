
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
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_3(struct radeon_device *VAR_16)
{
 uint32_t VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 bool VAR_26;

 VAR_17 = FUNC_0(VAR_11);
 VAR_18 = FUNC_0(VAR_12);
 VAR_19 = FUNC_0(VAR_15);
 VAR_20 = FUNC_0(VAR_0);
 VAR_21 = FUNC_0(VAR_1);
 VAR_22 = FUNC_0(VAR_4);
 VAR_23 = FUNC_0(VAR_6);
 VAR_24 = FUNC_0(VAR_7);
 VAR_25 = FUNC_0(VAR_8);

 FUNC_1(VAR_11,
        ((VAR_17 & ~VAR_9) |
  (0xc << VAR_10)));
 FUNC_1(VAR_6, 0);
 FUNC_1(VAR_7, 0);
 FUNC_1(VAR_8, 0);


 FUNC_1(VAR_12, (VAR_18 & ~VAR_13));


 FUNC_1(VAR_15, (VAR_19 & ~VAR_14));


 FUNC_1(VAR_0,
        (VAR_20 & ~(VAR_2 |
  VAR_3)));
 FUNC_1(VAR_1,
        (VAR_21 & ~(VAR_2 |
  VAR_3)));
 FUNC_1(VAR_4,
        (VAR_22 & ~VAR_5));

 VAR_26 = FUNC_2(VAR_16);


 FUNC_1(VAR_11, VAR_17);
 FUNC_1(VAR_12, VAR_18);
 FUNC_1(VAR_15, VAR_19);
 FUNC_1(VAR_0, VAR_20);
 FUNC_1(VAR_1, VAR_21);
 FUNC_1(VAR_4, VAR_22);
 FUNC_1(VAR_6, VAR_23);
 FUNC_1(VAR_7, VAR_24);
 FUNC_1(VAR_8, VAR_25);
 return VAR_26;
}
