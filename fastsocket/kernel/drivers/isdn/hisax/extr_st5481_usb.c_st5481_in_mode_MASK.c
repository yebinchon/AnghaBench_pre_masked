
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st5481_in {int mode; int counter; int adapter; int packet_size; int ep; int hdlc_state; int * urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct st5481_in*) ;
 int FUNC_2 (int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct st5481_in *VAR_5, int VAR_6)
{
 if (VAR_5->mode == VAR_6)
  return;

 VAR_5->mode = VAR_6;

 FUNC_4(VAR_5->urb[0]);
 FUNC_4(VAR_5->urb[1]);

 if (VAR_5->mode != VAR_3) {
  if (VAR_5->mode != VAR_4) {
   u32 VAR_7 = VAR_1;

   if (VAR_5->mode == VAR_2)
    VAR_7 |= VAR_0;
   FUNC_0(&VAR_5->hdlc_state, VAR_7);
  }
  FUNC_3(VAR_5->adapter, VAR_5->ep, ((void*)0), ((void*)0));
  FUNC_2(VAR_5->adapter, VAR_5->counter,
        VAR_5->packet_size,
        ((void*)0), ((void*)0));
  FUNC_1(VAR_5);
 } else {
  FUNC_2(VAR_5->adapter, VAR_5->counter,
        0, ((void*)0), ((void*)0));
 }
}
