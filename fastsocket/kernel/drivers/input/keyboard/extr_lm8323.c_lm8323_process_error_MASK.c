
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm8323_chip {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct lm8323_chip*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct lm8323_chip *VAR_5)
{
 u8 VAR_6;

 if (FUNC_1(VAR_5, VAR_4, &VAR_6, 1) == 1) {
  if (VAR_6 & VAR_2)
   FUNC_0(&VAR_5->client->dev, "fifo overflow!\n");
  if (VAR_6 & VAR_3)
   FUNC_0(&VAR_5->client->dev,
     "more than two keys pressed\n");
  if (VAR_6 & VAR_1)
   FUNC_0(&VAR_5->client->dev,
     "unknown command submitted\n");
  if (VAR_6 & VAR_0)
   FUNC_0(&VAR_5->client->dev, "bad command parameter\n");
 }
}
