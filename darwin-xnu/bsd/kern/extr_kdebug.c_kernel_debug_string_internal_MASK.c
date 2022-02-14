
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int SInt64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static uint64_t
FUNC_5(uint32_t VAR_8, uint64_t VAR_9, void *VAR_10,
                             size_t VAR_11)
{

 uintptr_t *VAR_12 = VAR_10;
 size_t VAR_13 = 0;
 uintptr_t VAR_14;
 int VAR_15;
 uint32_t VAR_16 = FUNC_1(VAR_2,
                                        VAR_5);

 VAR_14 = (uintptr_t)FUNC_4(FUNC_2());


 if (VAR_9 != 0 && VAR_11 == 0) {
  FUNC_3(VAR_16 | VAR_1 | VAR_0,
    (uintptr_t)VAR_8, (uintptr_t)VAR_9, 0, 0, VAR_14, 0);
  return VAR_9;
 }


 if (VAR_9 == 0) {
  VAR_9 = FUNC_0((SInt64 *)&VAR_6);
  VAR_9 = (VAR_9 & VAR_4) | VAR_7;
 }

 VAR_16 |= VAR_1;

 if (VAR_11 <= (2 * sizeof(uintptr_t))) {
  VAR_16 |= VAR_0;
 }

 FUNC_3(VAR_16, (uintptr_t)VAR_8, (uintptr_t)VAR_9,
   VAR_12[0], VAR_12[1], VAR_14, 0);

 VAR_16 &= VAR_3;
 VAR_15 = 2;
 VAR_13 += 2 * sizeof(uintptr_t);

 for (; VAR_13 < VAR_11; VAR_15 += 4, VAR_13 += 4 * sizeof(uintptr_t)) {
  if ((VAR_13 + (4 * sizeof(uintptr_t))) >= VAR_11) {
   VAR_16 |= VAR_0;
  }
  FUNC_3(VAR_16, VAR_12[VAR_15],
                                       VAR_12[VAR_15 + 1],
                                       VAR_12[VAR_15 + 2],
                                       VAR_12[VAR_15 + 3], VAR_14, 0);
 }

 return VAR_9;
}
