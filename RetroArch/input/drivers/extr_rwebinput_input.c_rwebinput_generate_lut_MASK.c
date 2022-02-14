
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct rarch_key_map {scalar_t__ sym; int rk; scalar_t__ key; } ;
typedef struct rarch_key_map rwebinput_key_to_code_map_entry_t ;


 int FUNC_0 (struct rarch_key_map*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int const*,int ) ;
 struct rarch_key_map* VAR_1 ;
 int FUNC_2 (int) ;
 struct rarch_key_map* VAR_2 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
   int VAR_3;
   struct rarch_key_map *VAR_4;

   FUNC_2(FUNC_0(VAR_1) ==
      FUNC_0(VAR_2) + 1);

   for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
   {
      int VAR_5;
      uint32_t VAR_6;
      const rwebinput_key_to_code_map_entry_t *VAR_7 =
         &VAR_2[VAR_3];
      VAR_4 = &VAR_1[VAR_3];
      VAR_6 = FUNC_1(0, (const uint8_t *)VAR_7->key,
         FUNC_3(VAR_7->key));


      for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
      {
         FUNC_2(VAR_1[VAR_5].sym != VAR_6);
      }

      VAR_4->rk = VAR_7->rk;
      VAR_4->sym = VAR_6;
   }


   VAR_4 = &VAR_1[FUNC_0(VAR_1) - 1];
   VAR_4->rk = VAR_0;
   VAR_4->sym = 0;
}
