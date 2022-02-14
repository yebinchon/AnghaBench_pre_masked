
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pre_emphasis; int is_radio_streaming; int fm_freq; } ;
struct poseidon {int lock; TYPE_1__ radio_data; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct poseidon*,int ,int,int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct poseidon *VAR_10, __u32 VAR_11)
{
 __u32 VAR_12 ;
 int VAR_13, VAR_14;

 FUNC_0(&VAR_10->lock);

 VAR_13 = FUNC_3(VAR_10, VAR_6,
    VAR_10->radio_data.pre_emphasis, &VAR_14);

 VAR_12 = (VAR_11 * 125) * 500 / 1000;
 if (VAR_12 < VAR_8/1000 || VAR_12 > VAR_7/1000) {
  VAR_13 = -VAR_0;
  goto error;
 }

 VAR_13 = FUNC_3(VAR_10, VAR_9, VAR_12, &VAR_14);
 if (VAR_13 < 0)
  goto error ;
 VAR_13 = FUNC_3(VAR_10, VAR_3, 0, &VAR_14);

 FUNC_4(VAR_4);
 FUNC_2(VAR_1/4);
 if (!VAR_10->radio_data.is_radio_streaming) {
  VAR_13 = FUNC_3(VAR_10, VAR_3, 0, &VAR_14);
  VAR_13 = FUNC_3(VAR_10, VAR_2,
    VAR_5, &VAR_14);
  VAR_10->radio_data.is_radio_streaming = 1;
 }
 VAR_10->radio_data.fm_freq = VAR_11;
error:
 FUNC_1(&VAR_10->lock);
 return VAR_13;
}
