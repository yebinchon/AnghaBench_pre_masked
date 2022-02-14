
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct shash_desc {int dummy; } ;
struct ksign_public_key {int version; int timestamp; long expiredate; int * pkey; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct shash_desc*,unsigned int) ;
 int FUNC_1 (struct shash_desc*,int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,unsigned int*,int *) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct shash_desc *VAR_2,
    struct ksign_public_key *VAR_3)
{
 unsigned VAR_4;
 unsigned VAR_5[VAR_0];
 unsigned VAR_6[VAR_0];
 uint8_t *VAR_7[VAR_0];
 uint32_t VAR_8;
 int VAR_9;
 int VAR_10 = VAR_0;

 VAR_4 = VAR_3->version < 4 ? 8 : 6;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_5[VAR_9] = FUNC_4(VAR_3->pkey[VAR_9]);
  VAR_7[VAR_9] = FUNC_3( VAR_3->pkey[VAR_9], VAR_6 + VAR_9, ((void*)0));
  VAR_4 += 2 + VAR_6[VAR_9];
 }

 FUNC_0(VAR_2, 0x99);
 FUNC_0(VAR_2, VAR_4 >> 8);
 FUNC_0(VAR_2, VAR_4);

 if (VAR_3->version < 4)
  FUNC_0(VAR_2, 3);
 else
  FUNC_0(VAR_2, 4);

 VAR_8 = VAR_3->timestamp;
 FUNC_0(VAR_2, VAR_8 >> 24 );
 FUNC_0(VAR_2, VAR_8 >> 16 );
 FUNC_0(VAR_2, VAR_8 >> 8 );
 FUNC_0(VAR_2, VAR_8 >> 0 );

 if (VAR_3->version < 4) {
  uint16_t VAR_11;

  if( VAR_3->expiredate )
   VAR_11 = (uint16_t)
    ((VAR_3->expiredate - VAR_3->timestamp) / 86400L);
  else
   VAR_11 = 0;
  FUNC_0(VAR_2, VAR_11 >> 8);
  FUNC_0(VAR_2, VAR_11 >> 0);
 }

 FUNC_0(VAR_2, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  FUNC_0(VAR_2, VAR_5[VAR_9] >> 8);
  FUNC_0(VAR_2, VAR_5[VAR_9]);
  FUNC_1(VAR_2, VAR_7[VAR_9], VAR_6[VAR_9]);
  FUNC_2(VAR_7[VAR_9]);
 }
}
