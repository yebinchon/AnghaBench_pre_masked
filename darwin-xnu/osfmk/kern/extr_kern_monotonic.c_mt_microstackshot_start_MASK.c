
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int mt_pmi_fn ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;

int
FUNC_2(unsigned int VAR_8, uint64_t VAR_9, mt_pmi_fn VAR_10,
  void *VAR_11)
{
 FUNC_0(VAR_8 < VAR_2);

 if (VAR_9 < VAR_3) {
  return VAR_1;
 }
 if (VAR_7) {
  return VAR_0;
 }

 VAR_4 = VAR_8;
 VAR_6 = VAR_10;
 VAR_5 = VAR_11;

 int VAR_12 = FUNC_1(VAR_9);
 if (VAR_12) {
  return VAR_12;
 }

 VAR_7 = 1;

 return 0;
}
