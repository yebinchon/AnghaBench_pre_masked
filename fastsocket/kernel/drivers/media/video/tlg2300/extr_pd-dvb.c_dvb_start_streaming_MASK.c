
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poseidon {int state; int lock; } ;
struct pd_dvb_adapter {int is_streaming; int * urb_array; struct poseidon* pd_device; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pd_dvb_adapter*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct poseidon*,int ,int,int*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static s32 FUNC_6(struct pd_dvb_adapter *VAR_5)
{
 struct poseidon *VAR_6 = VAR_5->pd_device;
 int VAR_7 = 0;

 if (VAR_6->state & VAR_4)
  return -VAR_1;

 FUNC_2(&VAR_6->lock);
 if (!VAR_5->is_streaming) {
  s32 VAR_8, VAR_9 = 0;





  VAR_7 = FUNC_4(VAR_6, VAR_3, 1, &VAR_9);
  if (VAR_7 | VAR_9)
   goto out;

  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7 < 0)
   goto out;

  VAR_5->is_streaming = 1;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_7 = FUNC_5(VAR_5->urb_array[VAR_8],
             VAR_2);
   if (VAR_7) {
    FUNC_1(" submit urb error %d", VAR_7);
    goto out;
   }
  }
 }
out:
 FUNC_3(&VAR_6->lock);
 return VAR_7;
}
