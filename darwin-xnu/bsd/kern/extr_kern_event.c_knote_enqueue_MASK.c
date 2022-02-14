
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_count; } ;
struct kqtailq {int dummy; } ;
struct knote {int kn_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kqtailq*,struct knote*,int ) ;
 int VAR_6 ;
 struct kqueue* FUNC_1 (struct knote*) ;
 struct kqtailq* FUNC_2 (struct knote*) ;
 int FUNC_3 (struct kqueue*) ;

__attribute__((used)) static int
FUNC_4(struct knote *VAR_7)
{
 if ((VAR_7->kn_status & (VAR_0 | VAR_4)) == 0 ||
     (VAR_7->kn_status & (VAR_1 | VAR_5 | VAR_2)))
  return 0;

 if ((VAR_7->kn_status & VAR_3) == 0) {
  struct kqtailq *VAR_8 = FUNC_2(VAR_7);
  struct kqueue *VAR_9 = FUNC_1(VAR_7);

  FUNC_3(VAR_9);
  FUNC_0(VAR_8, VAR_7, VAR_6);
  VAR_7->kn_status |= VAR_3;
  VAR_9->kq_count++;
  return 1;
 }
 return ((VAR_7->kn_status & VAR_4) != 0);
}
