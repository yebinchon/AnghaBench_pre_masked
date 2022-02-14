
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pipe*) ;
 int VAR_3 ;
 int FUNC_1 (struct pipe*,int ,int,char*,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct pipe *VAR_4, int VAR_5)
{
 int VAR_6;
 while (VAR_4->pipe_state & VAR_1) {
  VAR_4->pipe_state |= VAR_2;
  VAR_6 = FUNC_1(VAR_4, FUNC_0(VAR_4), VAR_5 ? (VAR_3 | VAR_0) : VAR_3,
          "pipelk", 0);
  if (VAR_6 != 0)
   return (VAR_6);
 }
 VAR_4->pipe_state |= VAR_1;
 return (0);
}
