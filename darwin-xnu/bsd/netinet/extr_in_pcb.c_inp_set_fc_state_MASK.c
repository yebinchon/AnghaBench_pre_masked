
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inpcb {int inp_flags; TYPE_1__* inp_socket; int inp_flowhash; } ;
struct TYPE_2__ {int so_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct inpcb*,int ,int) ;
 struct inpcb* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

int
FUNC_4(struct inpcb *VAR_9, int VAR_10)
{
 struct inpcb *VAR_11 = ((void*)0);







 if (VAR_9->inp_flags & VAR_1)
  return (0);

 VAR_9->inp_flags &= ~(VAR_2 | VAR_3);
 if ((VAR_11 = FUNC_2(VAR_9->inp_flowhash,
     VAR_0)) != ((void*)0)) {
  if (FUNC_1(VAR_11, VAR_7, 1) == VAR_8)
   return (0);
  FUNC_0(VAR_11 == VAR_9);
  switch (VAR_10) {
  case 129:
   VAR_9->inp_flags |= VAR_2;
   break;
  case 128:
   VAR_9->inp_flags |= VAR_3;
   FUNC_3(VAR_9->inp_socket,
       (VAR_5 | VAR_6));


   VAR_9->inp_socket->so_flags |= VAR_4;
   break;
  }
  return (1);
 }
 return (0);
}
