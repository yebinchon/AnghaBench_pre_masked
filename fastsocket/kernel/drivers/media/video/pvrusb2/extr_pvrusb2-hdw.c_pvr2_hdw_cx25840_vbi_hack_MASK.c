
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sliced; } ;
struct v4l2_format {TYPE_1__ fmt; int type; } ;
struct pvr2_hdw {scalar_t__ decoder_client_id; int v4l2_dev; } ;
typedef int fmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_format*,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct pvr2_hdw *VAR_5)
{
 struct v4l2_format VAR_6;
 if (VAR_5->decoder_client_id != VAR_0) {

  return;
 }

 FUNC_1(VAR_1,
     "Module ID %u:"
     " Executing cx25840 VBI hack",
     VAR_5->decoder_client_id);
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_2;
 FUNC_2(&VAR_5->v4l2_dev, VAR_5->decoder_client_id,
        VAR_4, VAR_3, &VAR_6.fmt.sliced);
}
