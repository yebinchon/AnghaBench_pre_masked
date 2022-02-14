
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx18_stream {scalar_t__ handle; } ;
struct cx18 {struct cx18_stream* streams; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cx18_stream*) ;

struct cx18_stream *FUNC_1(struct cx18 *VAR_2, u32 VAR_3)
{
 int VAR_4;
 struct cx18_stream *VAR_5;

 if (VAR_3 == VAR_0)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = &VAR_2->streams[VAR_4];
  if (VAR_5->handle != VAR_3)
   continue;
  if (FUNC_0(VAR_5))
   return VAR_5;
 }
 return ((void*)0);
}
