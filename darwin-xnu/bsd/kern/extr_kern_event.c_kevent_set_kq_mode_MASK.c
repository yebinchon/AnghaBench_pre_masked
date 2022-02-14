
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_state; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*) ;

__attribute__((used)) static int
FUNC_2(struct kqueue *VAR_6, unsigned int VAR_7)
{

 FUNC_0(VAR_6);
 if (VAR_6->kq_state & (VAR_3 | VAR_4 | VAR_5)) {
  if (VAR_7 & VAR_1) {
   if ((VAR_6->kq_state & VAR_3) == 0) {
    FUNC_1(VAR_6);
    return VAR_0;
   }
  } else if (VAR_6->kq_state & VAR_3) {
   FUNC_1(VAR_6);
   return VAR_0;
  }
 } else if (VAR_7 & VAR_1) {
  VAR_6->kq_state |= VAR_3;
 } else if (VAR_7 & VAR_2) {
  VAR_6->kq_state |= VAR_4;
 } else {
  VAR_6->kq_state |= VAR_5;
 }
 FUNC_1(VAR_6);
 return 0;
}
