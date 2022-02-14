
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_7 ;
 int FUNC_4 (size_t) ;
 int VAR_8 ;
 size_t* VAR_9 ;

__attribute__((used)) static void FUNC_5(void)
{
  uint* VAR_10 = &VAR_1;
  uint VAR_11 = (((VAR_7 >> 9) - 1) & 7) + 1;
  uint VAR_12 = FUNC_1(*VAR_10);
  uint VAR_13 = VAR_12 >> VAR_11;

  if(VAR_11 != 0)
    FUNC_4(VAR_11 * VAR_0);

  if(FUNC_0(VAR_12))
    VAR_13 |= VAR_9[VAR_11];

  *VAR_10 = FUNC_2(*VAR_10) | VAR_13;

  VAR_3 = FUNC_3(VAR_13);
  VAR_6 = VAR_13;
  VAR_4 = VAR_8;
  VAR_5 = VAR_2 = VAR_12 << (9-VAR_11);
}
