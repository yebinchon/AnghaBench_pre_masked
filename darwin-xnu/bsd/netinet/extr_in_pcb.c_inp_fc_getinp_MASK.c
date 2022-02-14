
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct inpcb {int inp_flags2; int infc_link; } ;
struct TYPE_3__ {int inp_flowhash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inpcb* FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,struct inpcb*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (struct inpcb*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct inpcb *
FUNC_6(u_int32_t VAR_8, u_int32_t VAR_9)
{
 struct inpcb *VAR_10 = ((void*)0);
 int VAR_11 = (VAR_9 & VAR_2) ? 1 : 0;

 FUNC_4(&VAR_5);
 VAR_7.inp_flowhash = VAR_8;
 VAR_10 = FUNC_0(VAR_6, &VAR_6, &VAR_7);
 if (VAR_10 == ((void*)0)) {

  FUNC_5(&VAR_5);
  return (((void*)0));
 }

 if (VAR_9 & VAR_1) {
  FUNC_1(VAR_6, &VAR_6, VAR_10);
  FUNC_5(&VAR_5);

  FUNC_2(&(VAR_10->infc_link), sizeof (VAR_10->infc_link));
  VAR_10->inp_flags2 &= ~VAR_0;
  return (((void*)0));
 }

 if (FUNC_3(VAR_10, VAR_3, VAR_11) == VAR_4)
  VAR_10 = ((void*)0);
 FUNC_5(&VAR_5);

 return (VAR_10);
}
