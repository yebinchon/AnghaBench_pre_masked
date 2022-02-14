
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int nr; int state; int Flags; } ;
struct isar_ch {int is; TYPE_1__ bch; int dpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int,int*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct isar_ch *VAR_7) {
 u8 VAR_8 = FUNC_0(VAR_7->dpath);
 u8 VAR_9 = VAR_2, VAR_10[5] = {VAR_4, 0, 0, 0, 0};

 if (VAR_7->bch.nr == 2) {
  VAR_10[1] = 1;
  VAR_10[3] = 1;
 }
 switch (VAR_7->bch.state) {
 case 128:
  VAR_9 = 0;

  VAR_10[1] = VAR_7->dpath + 2;
  VAR_10[3] = VAR_7->dpath + 2;
  break;
 case 130:
 case 133:
  break;
 case 131:
 case 129:
  VAR_9 |= VAR_3;
 case 132:
  if (FUNC_2(VAR_0, &VAR_7->bch.Flags))
   VAR_9 |= VAR_3;
  VAR_9 |= VAR_1;
  break;
 }
 FUNC_1(VAR_7->is, VAR_8 | VAR_5, VAR_9, 5, VAR_10);
 FUNC_3(1000);
 FUNC_1(VAR_7->is, VAR_8 | VAR_6, 0, 0, ((void*)0));
 FUNC_3(1000);
}
