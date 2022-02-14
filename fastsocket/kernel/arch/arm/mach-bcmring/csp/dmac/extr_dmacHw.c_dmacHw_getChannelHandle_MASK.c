
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dmacHw_ID_t ;
typedef int dmacHw_HANDLE_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;

dmacHw_HANDLE_t FUNC_2(dmacHw_ID_t VAR_3
    ) {
 int VAR_4;

 switch ((VAR_3 >> 8)) {
 case 0:
  FUNC_0((VAR_3 & 0xff) < VAR_0);
  VAR_4 = (VAR_3 & 0xff);
  break;
 case 1:
  FUNC_0((VAR_3 & 0xff) < VAR_1);
  VAR_4 = VAR_0 + (VAR_3 & 0xff);
  break;
 default:
  FUNC_0(0);
  return (dmacHw_HANDLE_t) -1;
 }

 return FUNC_1(&VAR_2[VAR_4]);
}
