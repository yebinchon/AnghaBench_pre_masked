
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qib_qp {int s_flags; size_t s_lsn; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t* VAR_6 ;
 scalar_t__ FUNC_0 (size_t,size_t) ;
 int FUNC_1 (struct qib_qp*) ;

void FUNC_2(struct qib_qp *VAR_7, u32 VAR_8)
{
 u32 VAR_9 = (VAR_8 >> VAR_2) & VAR_1;






 if (VAR_9 == VAR_0) {
  if (!(VAR_7->s_flags & VAR_4)) {
   VAR_7->s_flags |= VAR_4;
   if (VAR_7->s_flags & VAR_5) {
    VAR_7->s_flags &= ~VAR_5;
    FUNC_1(VAR_7);
   }
  }
 } else if (!(VAR_7->s_flags & VAR_4)) {

  VAR_9 = (VAR_8 + VAR_6[VAR_9]) & VAR_3;
  if (FUNC_0(VAR_9, VAR_7->s_lsn) > 0) {
   VAR_7->s_lsn = VAR_9;
   if (VAR_7->s_flags & VAR_5) {
    VAR_7->s_flags &= ~VAR_5;
    FUNC_1(VAR_7);
   }
  }
 }
}
