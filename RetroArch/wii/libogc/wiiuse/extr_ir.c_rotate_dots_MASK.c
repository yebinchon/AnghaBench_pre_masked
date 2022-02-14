
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdot_t {float x; float y; } ;


 int FUNC_0 (float) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fdot_t* VAR_0, struct fdot_t *VAR_1, int VAR_2, float VAR_3) {
 float VAR_4, VAR_5;
 int VAR_6;

 if (VAR_3 == 0) {
  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
   VAR_1[VAR_6].x = VAR_0[VAR_6].x;
   VAR_1[VAR_6].y = VAR_0[VAR_6].y;
  }
  return;
 }

 VAR_4 = FUNC_2(FUNC_0(VAR_3));
 VAR_5 = FUNC_1(FUNC_0(VAR_3));






 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  VAR_1[VAR_6].x = (VAR_5 * VAR_0[VAR_6].x) + (-VAR_4 * VAR_0[VAR_6].y);
  VAR_1[VAR_6].y = (VAR_4 * VAR_0[VAR_6].x) + (VAR_5 * VAR_0[VAR_6].y);
 }
}
