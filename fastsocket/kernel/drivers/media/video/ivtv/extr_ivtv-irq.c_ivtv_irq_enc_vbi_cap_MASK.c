
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv_stream {int s_flags; } ;
struct ivtv {struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ivtv_stream*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ivtv_stream*,int *) ;

__attribute__((used)) static void FUNC_4(struct ivtv *VAR_4)
{
 u32 VAR_5[VAR_0];
 struct ivtv_stream *VAR_6;

 FUNC_0("ENC START VBI CAP\n");
 VAR_6 = &VAR_4->streams[VAR_1];

 if (!FUNC_3(VAR_6, VAR_5))
  FUNC_2(FUNC_1(VAR_6) ? VAR_3 : VAR_2, &VAR_6->s_flags);
}
