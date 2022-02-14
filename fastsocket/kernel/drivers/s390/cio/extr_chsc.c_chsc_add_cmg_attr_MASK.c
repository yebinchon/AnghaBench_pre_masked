
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_subsystem {int * chps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct channel_subsystem *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
  if (!VAR_1->chps[VAR_2])
   continue;
  VAR_3 = FUNC_0(VAR_1->chps[VAR_2]);
  if (VAR_3)
   goto cleanup;
 }
 return VAR_3;
cleanup:
 for (--VAR_2; VAR_2 >= 0; VAR_2--) {
  if (!VAR_1->chps[VAR_2])
   continue;
  FUNC_1(VAR_1->chps[VAR_2]);
 }
 return VAR_3;
}
