
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct lm8323_chip {int keys_down; unsigned short* keymap; int active_time; int idev; scalar_t__ kp_enabled; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,size_t,char*) ;
 int FUNC_2 (int ,int ,int ,size_t) ;
 int FUNC_3 (int ,unsigned short,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (struct lm8323_chip*,int ,size_t*,int ) ;
 int FUNC_7 (struct lm8323_chip*,int ) ;
 size_t FUNC_8 (size_t) ;

__attribute__((used)) static void FUNC_9(struct lm8323_chip *VAR_4)
{
 u8 VAR_5;
 u8 VAR_6[VAR_2 + 1];
 int VAR_7 = VAR_4->keys_down;
 int VAR_8;
 int VAR_9 = 0;





 VAR_8 = FUNC_6(VAR_4, VAR_1, VAR_6, VAR_2);

 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->client->dev, "Failed reading fifo \n");
  return;
 }
 VAR_6[VAR_8] = 0;

 while ((VAR_5 = VAR_6[VAR_9++])) {
  u8 VAR_10 = FUNC_8(VAR_5);
  int VAR_11 = FUNC_5(VAR_5);
  unsigned short VAR_12 = VAR_4->keymap[VAR_10];

  FUNC_1(&VAR_4->client->dev, "key 0x%02x %s\n",
    VAR_10, VAR_11 ? "down" : "up");

  if (VAR_4->kp_enabled) {
   FUNC_2(VAR_4->idev, VAR_0, VAR_3, VAR_10);
   FUNC_3(VAR_4->idev, VAR_12, VAR_11);
   FUNC_4(VAR_4->idev);
  }

  if (VAR_11)
   VAR_4->keys_down++;
  else
   VAR_4->keys_down--;
 }






 if (!VAR_7 && VAR_4->keys_down)
  FUNC_7(VAR_4, 0);
 if (VAR_7 && !VAR_4->keys_down)
  FUNC_7(VAR_4, VAR_4->active_time);
}
