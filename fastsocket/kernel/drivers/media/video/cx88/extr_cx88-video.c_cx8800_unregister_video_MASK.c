
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx8800_dev {int * video_dev; int * vbi_dev; int * radio_dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cx8800_dev *VAR_0)
{
 if (VAR_0->radio_dev) {
  if (FUNC_1(VAR_0->radio_dev))
   FUNC_2(VAR_0->radio_dev);
  else
   FUNC_0(VAR_0->radio_dev);
  VAR_0->radio_dev = ((void*)0);
 }
 if (VAR_0->vbi_dev) {
  if (FUNC_1(VAR_0->vbi_dev))
   FUNC_2(VAR_0->vbi_dev);
  else
   FUNC_0(VAR_0->vbi_dev);
  VAR_0->vbi_dev = ((void*)0);
 }
 if (VAR_0->video_dev) {
  if (FUNC_1(VAR_0->video_dev))
   FUNC_2(VAR_0->video_dev);
  else
   FUNC_0(VAR_0->video_dev);
  VAR_0->video_dev = ((void*)0);
 }
}
