
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int rxbitmap; } ;
struct channel_data {int num; struct cosa_data* cosa; } ;


 int FUNC_0 (struct cosa_data*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct channel_data *VAR_0)
{
 struct cosa_data *VAR_1 = VAR_0->cosa;

 if (FUNC_1(VAR_0->num, &VAR_1->rxbitmap))
  FUNC_0(VAR_1);
}
