
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Slice* var ;
struct Slice {int range; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct Slice*,struct Slice*) ;

__attribute__((used)) static void FUNC_2(var VAR_1, var VAR_2) {
  struct Slice* VAR_3 = VAR_1;
  VAR_3->range = FUNC_0(VAR_0);
  FUNC_1(VAR_1, VAR_2);
}
