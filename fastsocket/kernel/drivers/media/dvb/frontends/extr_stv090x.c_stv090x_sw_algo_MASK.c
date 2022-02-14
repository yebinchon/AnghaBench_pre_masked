
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {int search_mode; TYPE_1__* internal; } ;
typedef int s32 ;
struct TYPE_2__ {int dev_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;




 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct stv090x_state*) ;
 int FUNC_6 (struct stv090x_state*,int*,int*,int*) ;
 int FUNC_7 (struct stv090x_state*,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct stv090x_state *VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = 0;
 u32 VAR_13;

 s32 VAR_14;
 s32 VAR_15, VAR_16, VAR_17, VAR_18;


 FUNC_6(VAR_9, &VAR_15, &VAR_16, &VAR_18);

 switch (VAR_9->search_mode) {
 case 129:
 case 130:

  if (VAR_9->internal->dev_ver >= 0x20) {
   if (FUNC_2(VAR_9, VAR_0, 0x3B) < 0)
    goto err;
  }

  if (FUNC_2(VAR_9, VAR_2, 0x49) < 0)
   goto err;
  VAR_11 = 0;
  break;

 case 128:
  if (VAR_9->internal->dev_ver >= 0x20) {
   if (FUNC_2(VAR_9, VAR_1, 0x79) < 0)
    goto err;
  }

  if (FUNC_2(VAR_9, VAR_2, 0x89) < 0)
   goto err;
  VAR_11 = 1;
  break;

 case 131:
 default:

  if (VAR_9->internal->dev_ver >= 0x20) {
   if (FUNC_2(VAR_9, VAR_0, 0x3b) < 0)
    goto err;
   if (FUNC_2(VAR_9, VAR_1, 0x79) < 0)
    goto err;
  }

  if (FUNC_2(VAR_9, VAR_2, 0xc9) < 0)
   goto err;
  VAR_11 = 0;
  break;
 }

 VAR_17 = 0;
 do {
  VAR_12 = FUNC_7(VAR_9, VAR_15, VAR_16, VAR_11, VAR_18);
  VAR_10 = FUNC_5(VAR_9);
  VAR_17++;


  if (VAR_12 || VAR_10 || (VAR_17 == 2)) {

   if (VAR_9->internal->dev_ver >= 0x20) {
    if (FUNC_2(VAR_9, VAR_0, 0x49) < 0)
     goto err;
    if (FUNC_2(VAR_9, VAR_1, 0x9e) < 0)
     goto err;
   }

   VAR_13 = FUNC_1(VAR_9, VAR_4);
   if ((VAR_12) && (FUNC_0(VAR_13, VAR_7) == VAR_8)) {

    FUNC_4(VAR_16);
    VAR_13 = FUNC_1(VAR_9, VAR_3);
    VAR_14 = FUNC_0(VAR_13, VAR_6);
    if (VAR_14 < 0xd) {
     FUNC_4(VAR_16);
     VAR_13 = FUNC_1(VAR_9, VAR_3);
     VAR_14 = FUNC_0(VAR_13, VAR_6);
    }
    if (VAR_14 < 0xd) {

     VAR_12 = 0;
     if (VAR_17 < 2) {
      if (VAR_9->internal->dev_ver >= 0x20) {
       if (FUNC_2(VAR_9, VAR_1, 0x79) < 0)
        goto err;
      }

      if (FUNC_2(VAR_9, VAR_2, 0x89) < 0)
       goto err;
     }
    }
   }
  }
 } while ((!VAR_12) && (VAR_17 < 2) && (!VAR_10));

 return VAR_12;
err:
 FUNC_3(VAR_5, 1, "I/O error");
 return -1;
}
