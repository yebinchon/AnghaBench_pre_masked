
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int sgio_type; } ;
struct blk_cmd_filter {int* read_ok; int* write_ok; } ;
typedef scalar_t__ fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct blk_cmd_filter VAR_2 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct request_queue *VAR_3,
         unsigned char *VAR_4, fmode_t VAR_5)
{
 struct blk_cmd_filter *VAR_6 = &VAR_2;


 if (FUNC_1(VAR_0) || FUNC_0(VAR_3))
  return 0;


 if (VAR_6->read_ok[VAR_4[0]] & (1 << VAR_3->sgio_type))
  return 0;


 if (VAR_5 && VAR_6->write_ok[VAR_4[0]] & (1 << VAR_3->sgio_type))
  return 0;

 return -VAR_1;
}
