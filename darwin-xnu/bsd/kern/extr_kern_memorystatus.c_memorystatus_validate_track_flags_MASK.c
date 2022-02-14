
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct proc {int p_memstat_dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_0(struct proc *VAR_9, uint32_t VAR_10) {

 if (VAR_9->p_memstat_dirty & VAR_8) {
  return VAR_0;
 }


 if ((VAR_10 & VAR_3) &&
    !(VAR_10 & VAR_7)) {
  return VAR_1;
 }


 if ((VAR_10 & VAR_6) &&
    !(VAR_10 & VAR_7)) {
  return VAR_1;
 }


 if ((VAR_10 & VAR_4) &&
     (VAR_10 & VAR_5)) {
  return VAR_1;
 }


 if (((VAR_10 & VAR_4) ||
     (VAR_10 & VAR_5)) &&
    !(VAR_10 & VAR_2)) {
  return VAR_1;
 }

 return(0);
}
