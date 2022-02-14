
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppol2tp_session {scalar_t__ send_seq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct pppol2tp_session *VAR_2)
{
 if (VAR_2->send_seq)
  return VAR_1;

 return VAR_0;
}
