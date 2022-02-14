
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_stream {int s_flags; } ;
struct cx18 {struct cx18_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx18_stream*,int ) ;
 int FUNC_1 (struct cx18_stream*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct cx18 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--) {
  struct cx18_stream *VAR_4 = &VAR_2->streams[VAR_3];

  if (!FUNC_1(VAR_4))
   continue;
  if (FUNC_2(VAR_0, &VAR_4->s_flags))
   FUNC_0(VAR_4, 0);
 }
}
