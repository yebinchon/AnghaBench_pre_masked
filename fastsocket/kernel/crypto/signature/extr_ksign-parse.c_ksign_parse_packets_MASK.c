
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ksign_user_id_actor_t ;
typedef int ksign_signature_actor_t ;
typedef int ksign_public_key_actor_t ;


 int FUNC_0 (int const**,int const*,int ,int ,int ,void*) ;

int FUNC_1(const uint8_t *VAR_0,
   size_t VAR_1,
   ksign_signature_actor_t VAR_2,
   ksign_public_key_actor_t VAR_3,
   ksign_user_id_actor_t VAR_4,
   void *VAR_5)
{
 const uint8_t *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = VAR_0;
 VAR_7 = VAR_0 + VAR_1;
 do {
  VAR_8 = FUNC_0(&VAR_6, VAR_7,
         VAR_2, VAR_3, VAR_4, VAR_5);
 } while (VAR_8 == 0 && VAR_6 < VAR_7);

 return VAR_8;
}
