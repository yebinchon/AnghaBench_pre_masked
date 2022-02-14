
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct poseidon_audio {int capture_stream; int copied_position; int rcv_position; } ;
struct poseidon {struct poseidon_audio audio; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct poseidon*) ;
 int FUNC_1 (struct poseidon*) ;
 int FUNC_2 (char*,int,int ) ;
 struct poseidon* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5, int VAR_6)
{
 struct poseidon *VAR_7 = FUNC_3(VAR_5);
 struct poseidon_audio *VAR_8 = &VAR_7->audio;

 if (VAR_4)
  FUNC_2("cmd %d, audio stat : %d\n", VAR_6, VAR_8->capture_stream);

 switch (VAR_6) {
 case 131:
 case 130:
  if (VAR_8->capture_stream == VAR_2)
   return 0;

  VAR_8->rcv_position = VAR_8->copied_position = 0;
  VAR_8->capture_stream = VAR_2;

  if (FUNC_1(VAR_7))
   return 0;
  FUNC_0(VAR_7);
  return 0;

 case 128:
  VAR_8->capture_stream = VAR_3;
  return 0;
 case 129:
  VAR_8->capture_stream = VAR_1;
  return 0;
 default:
  return -VAR_0;
 }
}
