
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poseidon_audio {scalar_t__ card; } ;
struct poseidon {struct poseidon_audio audio; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct poseidon *VAR_0)
{
 struct poseidon_audio *VAR_1 = &VAR_0->audio;

 if (VAR_1->card)
  FUNC_0(VAR_1->card);
 return 0;
}
