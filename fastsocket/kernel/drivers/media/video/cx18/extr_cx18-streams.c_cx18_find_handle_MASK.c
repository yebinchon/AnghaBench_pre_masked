
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx18_stream {scalar_t__ handle; scalar_t__ video_dev; } ;
struct cx18 {struct cx18_stream* streams; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

u32 FUNC_0(struct cx18 *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct cx18_stream *VAR_4 = &VAR_2->streams[VAR_3];

  if (VAR_4->video_dev && (VAR_4->handle != VAR_0))
   return VAR_4->handle;
 }
 return VAR_0;
}
