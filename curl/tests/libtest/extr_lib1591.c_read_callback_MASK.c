
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_2, size_t VAR_3, size_t VAR_4, void *VAR_5)
{
  size_t VAR_6 = VAR_4 * VAR_3;

  if(VAR_0 == FUNC_1(VAR_1)) {
    return 0;
  }

  if(VAR_6 > FUNC_1(VAR_1)-VAR_0) {
    VAR_6 = FUNC_1(VAR_1);
  }

  VAR_0 += VAR_6;
  (void)VAR_5;
  FUNC_0(VAR_2, VAR_1, VAR_6);
  return VAR_6;
}
