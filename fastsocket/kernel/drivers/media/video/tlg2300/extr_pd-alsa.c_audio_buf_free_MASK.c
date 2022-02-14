
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poseidon_audio {scalar_t__* urb_array; } ;
struct poseidon {struct poseidon_audio audio; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct poseidon *VAR_1)
{
 struct poseidon_audio *VAR_2 = &VAR_1->audio;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->urb_array[VAR_3])
   FUNC_2(VAR_2->urb_array[VAR_3]);
 FUNC_0(VAR_2->urb_array, VAR_0);
 FUNC_1();
 return 0;
}
