
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9170 {TYPE_1__* edcf; } ;
struct TYPE_2__ {int cw_min; int cw_max; int aifs; int txop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct ar9170 *VAR_9)
{
 FUNC_1(VAR_9);

 FUNC_0(VAR_0, VAR_9->edcf[0].cw_min |
     (VAR_9->edcf[0].cw_max << 16));
 FUNC_0(VAR_2, VAR_9->edcf[1].cw_min |
     (VAR_9->edcf[1].cw_max << 16));
 FUNC_0(VAR_4, VAR_9->edcf[2].cw_min |
     (VAR_9->edcf[2].cw_max << 16));
 FUNC_0(VAR_6, VAR_9->edcf[3].cw_min |
     (VAR_9->edcf[3].cw_max << 16));
 FUNC_0(VAR_8, VAR_9->edcf[4].cw_min |
     (VAR_9->edcf[4].cw_max << 16));

 FUNC_0(VAR_3,
     ((VAR_9->edcf[0].aifs * 9 + 10)) |
     ((VAR_9->edcf[1].aifs * 9 + 10) << 12) |
     ((VAR_9->edcf[2].aifs * 9 + 10) << 24));
 FUNC_0(VAR_7,
     ((VAR_9->edcf[2].aifs * 9 + 10) >> 8) |
     ((VAR_9->edcf[3].aifs * 9 + 10) << 4) |
     ((VAR_9->edcf[4].aifs * 9 + 10) << 16));

 FUNC_0(VAR_1,
     VAR_9->edcf[0].txop | VAR_9->edcf[1].txop << 16);
 FUNC_0(VAR_5,
     VAR_9->edcf[2].txop | VAR_9->edcf[3].txop << 16 |
     VAR_9->edcf[4].txop << 24);

 FUNC_2();

 return FUNC_3();
}
