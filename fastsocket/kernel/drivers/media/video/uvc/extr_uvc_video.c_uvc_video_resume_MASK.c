
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_streaming {int queue; int ctrl; scalar_t__ frozen; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_streaming*,int *) ;
 int FUNC_1 (struct uvc_streaming*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct uvc_streaming *VAR_1)
{
 int VAR_2;

 VAR_1->frozen = 0;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->ctrl);
 if (VAR_2 < 0) {
  FUNC_2(&VAR_1->queue, 0);
  return VAR_2;
 }

 if (!FUNC_3(&VAR_1->queue))
  return 0;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 < 0)
  FUNC_2(&VAR_1->queue, 0);

 return VAR_2;
}
