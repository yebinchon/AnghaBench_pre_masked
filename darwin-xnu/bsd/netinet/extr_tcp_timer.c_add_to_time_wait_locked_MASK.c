
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__* t_timer; struct inpcb* t_inpcb; } ;
struct inpcbinfo {int ipi_twcount; int ipi_lock; } ;
struct inpcb {int inp_flags2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct inpcb*,int ) ;
 int FUNC_2 (int *,struct tcpcb*,int ) ;
 int FUNC_3 (int *,struct tcpcb*,int ) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct inpcbinfo VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct tcpcb*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6(struct tcpcb *VAR_8, uint32_t VAR_9)
{
 struct inpcbinfo *VAR_10 = &VAR_5;
 struct inpcb *VAR_11 = VAR_8->t_inpcb;
 uint32_t VAR_12;


 FUNC_0(VAR_10->ipi_lock, VAR_1);


 if (!(VAR_11->inp_flags2 & VAR_0)) {
  VAR_10->ipi_twcount++;
  VAR_11->inp_flags2 |= VAR_0;


  FUNC_1(VAR_11, VAR_3);
 } else {
  FUNC_3(&VAR_7, VAR_8, VAR_4);
 }


 VAR_12 = VAR_6 + VAR_9;



 if (FUNC_4(VAR_8))
  FUNC_5(VAR_8);
 VAR_8->t_timer[VAR_2] = VAR_12;

 FUNC_2(&VAR_7, VAR_8, VAR_4);
}
