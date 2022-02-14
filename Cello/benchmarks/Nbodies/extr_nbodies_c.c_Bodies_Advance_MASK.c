
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Body {double x; double y; double z; double vx; double mass; double vy; double vz; } ;


 double FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(struct Body* VAR_0, size_t VAR_1, double VAR_2) {

  for(size_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

    struct Body* VAR_4 = &VAR_0[VAR_3];

    for(size_t VAR_5 = VAR_3+1; VAR_5 < VAR_1; VAR_5++) {

      struct Body* VAR_6 = &VAR_0[VAR_5];

      double VAR_7 = VAR_4->x - VAR_6->x;
      double VAR_8 = VAR_4->y - VAR_6->y;
      double VAR_9 = VAR_4->z - VAR_6->z;

      double VAR_10 = VAR_7 * VAR_7 + VAR_8 * VAR_8 + VAR_9 * VAR_9;
      double VAR_11 = FUNC_0(VAR_10);
      double VAR_12 = VAR_2 / (VAR_10 * VAR_11);

      VAR_4->vx -= VAR_7 * VAR_6->mass * VAR_12;
      VAR_4->vy -= VAR_8 * VAR_6->mass * VAR_12;
      VAR_4->vz -= VAR_9 * VAR_6->mass * VAR_12;

      VAR_6->vx += VAR_7 * VAR_4->mass * VAR_12;
      VAR_6->vy += VAR_8 * VAR_4->mass * VAR_12;
      VAR_6->vz += VAR_9 * VAR_4->mass * VAR_12;
    }
  }

  for(size_t VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
    struct Body* VAR_14 = &VAR_0[VAR_13];
    VAR_14->x += VAR_2 * VAR_14->vx;
    VAR_14->y += VAR_2 * VAR_14->vy;
    VAR_14->z += VAR_2 * VAR_14->vz;
  }
}
