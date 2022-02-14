
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ decoder_client_id; int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int ) ;

int FUNC_3(struct pvr2_hdw *VAR_4)
{
 FUNC_1(VAR_1,
     "Requesting decoder reset");
 if (VAR_4->decoder_client_id) {
  FUNC_2(&VAR_4->v4l2_dev, VAR_4->decoder_client_id,
         VAR_2, VAR_3, 0);
  FUNC_0(VAR_4);
  return 0;
 }
 FUNC_1(VAR_1,
     "Unable to reset decoder: nothing attached");
 return -VAR_0;
}
