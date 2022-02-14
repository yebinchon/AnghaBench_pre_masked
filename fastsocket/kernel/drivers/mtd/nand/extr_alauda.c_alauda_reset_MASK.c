
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct alauda {int card_mutex; int bulk_out; int dev; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct alauda *VAR_3)
{
 u8 VAR_4[] = {
  VAR_0, VAR_1, 0, 0,
  0, 0, 0, 0, VAR_3->port
 };
 FUNC_0(&VAR_3->card_mutex);
 FUNC_2(VAR_3->dev, VAR_3->bulk_out, VAR_4, 9, ((void*)0), VAR_2);
 FUNC_1(&VAR_3->card_mutex);
}
