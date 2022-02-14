
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_iso {scalar_t__ type; scalar_t__ buf_packets; int waitq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hpsb_iso*) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct hpsb_iso *VAR_2)
{
 if (VAR_2->type != VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_2->waitq,
     FUNC_0(VAR_2) ==
     VAR_2->buf_packets);
}
