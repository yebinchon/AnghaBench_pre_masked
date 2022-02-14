
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Body {double mass; double vx; double vy; double vz; double x; double y; double z; } ;


 double FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(struct Body* VAR_0, size_t VAR_1) {

  double VAR_2 = 0.0;
  double VAR_3 = 0.0;
  double VAR_4 = 0.0;
  double VAR_5 = 0.0;
  double VAR_6 = 0.0;

  for(size_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

    struct Body* VAR_8 = &VAR_0[VAR_7];

    VAR_6 += (0.5 * VAR_8->mass * (
        VAR_8->vx * VAR_8->vx +
        VAR_8->vy * VAR_8->vy +
        VAR_8->vz * VAR_8->vz));

    for(size_t VAR_9 = VAR_7+1; VAR_9 < VAR_1; VAR_9++) {

      struct Body* VAR_10 = &VAR_0[VAR_9];

      VAR_2 = VAR_8->x - VAR_10->x;
      VAR_3 = VAR_8->y - VAR_10->y;
      VAR_4 = VAR_8->z - VAR_10->z;

      VAR_5 = FUNC_0(VAR_2 * VAR_2 + VAR_3 * VAR_3 + VAR_4 * VAR_4);
      VAR_6 -= (VAR_8->mass * VAR_10->mass) / VAR_5;
    }
  }

  return VAR_6;
}
