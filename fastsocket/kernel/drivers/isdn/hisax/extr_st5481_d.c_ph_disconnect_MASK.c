
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_adapter {int leds; int d_in; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct st5481_adapter*,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct st5481_adapter *VAR_3)
{
 FUNC_0(8,"");

 FUNC_1(&VAR_3->d_in, VAR_2);


 VAR_3->leds &= ~VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_3->leds, ((void*)0), ((void*)0));
}
