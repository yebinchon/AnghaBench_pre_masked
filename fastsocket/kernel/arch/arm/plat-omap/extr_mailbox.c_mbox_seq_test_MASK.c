
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int seq_rcv; } ;
typedef int mbox_msg_t ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct omap_mbox *VAR_1, mbox_msg_t VAR_2)
{
 mbox_msg_t VAR_3;

 if (!VAR_0)
  return 0;

 VAR_3 = VAR_2 & (1 << 31);
 if (VAR_3 == VAR_1->seq_rcv)
  return -1;
 VAR_1->seq_rcv = VAR_3;
 return 0;
}
