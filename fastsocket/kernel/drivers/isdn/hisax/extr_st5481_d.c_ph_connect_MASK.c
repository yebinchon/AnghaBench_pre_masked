
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_in {int dummy; } ;
struct st5481_d_out {int fsm; } ;
struct st5481_adapter {int leds; struct st5481_in d_in; struct st5481_d_out d_out; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct st5481_adapter* VAR_8 ;
 int FUNC_2 (struct st5481_in*,int ) ;
 int FUNC_3 (struct st5481_adapter*,int ,int,int *,int *) ;
 int FUNC_4 (struct st5481_adapter*,int,int *,int *) ;

__attribute__((used)) static void FUNC_5(struct st5481_adapter *VAR_9)
{
 struct st5481_d_out *VAR_10 = &VAR_9->d_out;
 struct st5481_in *VAR_11 = &VAR_9->d_in;

 FUNC_0(8,"");

 FUNC_1(&VAR_10->fsm, VAR_6);


 FUNC_3(VAR_9, VAR_1, 0xfc, ((void*)0), ((void*)0));
 FUNC_2(VAR_11, VAR_4);






 FUNC_4(VAR_9, VAR_0 | VAR_7, ((void*)0), ((void*)0));


 VAR_9->leds |= VAR_3;
 FUNC_3(VAR_9, VAR_2, VAR_9->leds, ((void*)0), ((void*)0));
}
