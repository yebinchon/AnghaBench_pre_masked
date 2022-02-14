
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int state; } ;
struct isar_ch {int is; TYPE_1__ bch; int dpath; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int,int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct isar_ch *VAR_9) {
 u8 VAR_10 = FUNC_0(VAR_9->dpath);
 u8 VAR_11, VAR_12[2] = {0, 0};

 switch (VAR_9->bch.state) {
 case 128:
  FUNC_1(VAR_9->is, VAR_10 | VAR_1, VAR_4,
   0, ((void*)0));
  break;
 case 130:
 case 132:
  FUNC_1(VAR_9->is, VAR_10 | VAR_1, VAR_3,
   2, VAR_12);
  break;
 case 133:
 case 129:
  FUNC_1(VAR_9->is, VAR_10 | VAR_1, VAR_5,
   1, VAR_12);
  break;
 case 131:
  VAR_11 = VAR_6 | VAR_2;
  VAR_12[0] = VAR_7;
  VAR_12[1] = VAR_8;
  FUNC_1(VAR_9->is, VAR_10 | VAR_1, VAR_11, 2, VAR_12);
  break;
 }
 FUNC_2(1000);
 FUNC_1(VAR_9->is, VAR_10 | VAR_0, 0, 0, ((void*)0));
 FUNC_2(1000);
}
