
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct sockbuf {scalar_t__ sb_hiwat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

u_int8_t
FUNC_1(struct sockbuf *VAR_5)
{




 u_int32_t VAR_6 = ((VAR_2 >> 1) << (VAR_0 - VAR_1));





 u_int32_t VAR_7 = ((VAR_2 >> 4) << VAR_0);

 if ((VAR_4 < VAR_6) &&
  (VAR_5->sb_hiwat < VAR_7)) {
  return(1);
 } else {
  FUNC_0(&VAR_3);
 }
 return(0);
}
