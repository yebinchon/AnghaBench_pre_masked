
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 size_t VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static size_t FUNC_0(size_t VAR_3) {
  VAR_3 = (size_t)((double)(VAR_3+1) / VAR_0);
  for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (VAR_2[VAR_4] >= VAR_3) { return VAR_2[VAR_4]; }
  }
  size_t VAR_5 = VAR_2[VAR_1-1];
  for (size_t VAR_6 = 0;; VAR_6++) {
    if (VAR_5 * VAR_6 >= VAR_3) { return VAR_5 * VAR_6; }
  }
}
