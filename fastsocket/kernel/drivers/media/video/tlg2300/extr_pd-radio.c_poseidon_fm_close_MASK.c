
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radio_data {scalar_t__ users; scalar_t__ is_radio_streaming; } ;
struct poseidon {int kref; int lock; int interface; struct file* file_for_stream; int state; struct radio_data radio_data; } ;
struct file {struct poseidon* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct poseidon*,int ,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4)
{
 struct poseidon *VAR_5 = VAR_4->private_data;
 struct radio_data *VAR_6 = &VAR_5->radio_data;
 uint32_t VAR_7;

 FUNC_1(&VAR_5->lock);
 VAR_6->users--;
 if (0 == VAR_6->users)
  VAR_5->state &= ~VAR_1;

 if (VAR_6->is_radio_streaming && VAR_4 == VAR_5->file_for_stream) {
  VAR_6->is_radio_streaming = 0;
  FUNC_3(VAR_5, VAR_0, VAR_2, &VAR_7);
 }
 FUNC_4(VAR_5->interface);
 FUNC_2(&VAR_5->lock);

 FUNC_0(&VAR_5->kref, VAR_3);
 VAR_4->private_data = ((void*)0);
 return 0;
}
