
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_chunk {int stripe; } ;
typedef enum chunk_dirty_type { ____Placeholder_chunk_dirty_type } chunk_dirty_type ;


 int FUNC_0 () ;

 int FUNC_1 (struct stripe_chunk*) ;
 int FUNC_2 (struct stripe_chunk*) ;


 int FUNC_3 (struct stripe_chunk*) ;
 int FUNC_4 (struct stripe_chunk*) ;
 int FUNC_5 (struct stripe_chunk*) ;
 int FUNC_6 (struct stripe_chunk*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct stripe_chunk *VAR_0, enum chunk_dirty_type VAR_1)
{
 switch (VAR_1) {
 case 130:
  FUNC_1(VAR_0);
  break;
 case 129:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_4(VAR_0);
  FUNC_7(VAR_0->stripe);
  return;
 default:
  FUNC_0();
 }

 FUNC_6(VAR_0);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
}
