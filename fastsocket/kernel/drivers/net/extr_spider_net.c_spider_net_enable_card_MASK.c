
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {int dummy; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (struct spider_net_card*) ;
 int FUNC_1 (struct spider_net_card*) ;
 int FUNC_2 (struct spider_net_card*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct spider_net_card *VAR_42)
{
 int VAR_43;


 u32 VAR_44[][2] = {
  { VAR_26, 0 },
  { VAR_25, 0 },



  { VAR_6, VAR_13 },
  { VAR_7, VAR_13 },
  { VAR_8, VAR_13 },
  { VAR_9, VAR_13 },

  { VAR_10, VAR_3 },


  { VAR_11, 0 },
  { VAR_24, 0 },
  { VAR_30, 0 },


  { VAR_28, VAR_38 },

  { VAR_32, VAR_39 },

  { VAR_14, VAR_33 },

  { VAR_12, VAR_37 },

  { VAR_23, 0 },
  { VAR_29, 0x10000000 },
  { VAR_31, 0x00400040 },

  { VAR_17, 0 },


  { VAR_15, VAR_35 },
  { VAR_20, VAR_40 },

  { VAR_16, VAR_0 },
  { 0, 0}
 };

 VAR_43 = 0;
 while (VAR_44[VAR_43][0]) {
  FUNC_2(VAR_42, VAR_44[VAR_43][0], VAR_44[VAR_43][1]);
  VAR_43++;
 }


 for (VAR_43 = 1; VAR_43 <= 14; VAR_43++) {
  FUNC_2(VAR_42,
         VAR_22 + VAR_43 * 8,
         0x00080000);
  FUNC_2(VAR_42,
         VAR_22 + VAR_43 * 8 + 4,
         0x00000000);
 }

 FUNC_2(VAR_42, VAR_21, 0x08080000);

 FUNC_2(VAR_42, VAR_1, VAR_2);



 FUNC_0(VAR_42);
 FUNC_1(VAR_42);

 FUNC_2(VAR_42, VAR_27, VAR_41);

 FUNC_2(VAR_42, VAR_18,
        VAR_34);
 FUNC_2(VAR_42, VAR_19,
        VAR_36);

 FUNC_2(VAR_42, VAR_5,
        VAR_4);
}
