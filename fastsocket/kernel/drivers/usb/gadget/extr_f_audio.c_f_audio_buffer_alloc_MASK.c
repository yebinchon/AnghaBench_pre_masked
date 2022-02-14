
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_audio_buf {void* buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f_audio_buf*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static struct f_audio_buf *FUNC_2(int VAR_2)
{
 struct f_audio_buf *VAR_3;

 VAR_3 = FUNC_1(sizeof *VAR_3, VAR_1);
 if (!VAR_3)
  return (struct f_audio_buf *)-VAR_0;

 VAR_3->buf = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3->buf) {
  FUNC_0(VAR_3);
  return (struct f_audio_buf *)-VAR_0;
 }

 return VAR_3;
}
