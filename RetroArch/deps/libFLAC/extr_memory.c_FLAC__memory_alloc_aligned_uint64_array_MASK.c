
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__uint64 ;
typedef int FLAC__bool ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,void**) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

FLAC__bool FUNC_3(size_t VAR_1, FLAC__uint64 **VAR_2, FLAC__uint64 **VAR_3)
{
 FLAC__uint64 *VAR_4;
 union {
  FLAC__uint64 *pa;
  void *pv;
 } VAR_5;

 FUNC_0(VAR_1 > 0);
 FUNC_0(0 != VAR_2);
 FUNC_0(0 != VAR_3);
 FUNC_0(VAR_2 != VAR_3);

 if(VAR_1 > VAR_0 / sizeof(*VAR_4))
  return 0;

 VAR_4 = (FLAC__uint64*)FUNC_1(sizeof(*VAR_4) * VAR_1, &VAR_5.pv);
 if(0 == VAR_4) {
  return 0;
 }
 else {
  if(*VAR_2 != 0)
   FUNC_2(*VAR_2);
  *VAR_2 = VAR_4;
  *VAR_3 = VAR_5.pa;
  return 1;
 }
}
