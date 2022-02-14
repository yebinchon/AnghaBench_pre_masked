
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poseidon {int lock; } ;
struct pd_dvb_adapter {scalar_t__* urb_array; scalar_t__ is_streaming; struct poseidon* pd_device; } ;
typedef size_t s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct poseidon*,int ,int ,size_t*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct pd_dvb_adapter *VAR_3)
{
 struct poseidon *VAR_4 = VAR_3->pd_device;

 FUNC_1(&VAR_4->lock);
 if (VAR_3->is_streaming) {
  s32 VAR_5, VAR_6, VAR_7 = 0;

  VAR_3->is_streaming = 0;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_3->urb_array[VAR_5])
    FUNC_4(VAR_3->urb_array[VAR_5]);

  VAR_6 = FUNC_3(VAR_4, VAR_1, VAR_2,
     &VAR_7);
  if (VAR_6 | VAR_7)
   FUNC_0("error");
 }
 FUNC_2(&VAR_4->lock);
}
