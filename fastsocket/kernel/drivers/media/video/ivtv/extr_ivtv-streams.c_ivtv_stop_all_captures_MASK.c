
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int s_flags; int * vdev; } ;
struct ivtv {struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ivtv_stream*,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct ivtv *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--) {
  struct ivtv_stream *VAR_4 = &VAR_2->streams[VAR_3];

  if (VAR_4->vdev == ((void*)0))
   continue;
  if (FUNC_1(VAR_0, &VAR_4->s_flags)) {
   FUNC_0(VAR_4, 0);
  }
 }
}
