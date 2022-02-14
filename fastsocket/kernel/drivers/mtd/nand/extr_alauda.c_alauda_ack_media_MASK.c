
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alauda {int card_mutex; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,int,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct alauda *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->card_mutex);
 VAR_3 = FUNC_2(VAR_2->dev, FUNC_3(VAR_2->dev, 0),
   VAR_0, 0x40, 0, 1, ((void*)0), 0, VAR_1);
 FUNC_1(&VAR_2->card_mutex);
 return VAR_3;
}
