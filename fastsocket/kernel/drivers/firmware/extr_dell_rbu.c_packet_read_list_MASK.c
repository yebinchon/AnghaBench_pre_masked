
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
struct TYPE_4__ {struct list_head* next; } ;
struct TYPE_6__ {TYPE_1__ list; } ;
struct TYPE_5__ {scalar_t__ num_packets; int packet_read_count; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct list_head*,int,int,int*) ;
 int FUNC_1 (struct list_head*) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_2(char *VAR_3, size_t * VAR_4)
{
 struct list_head *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 char *VAR_10 = VAR_3;


 if (0 == VAR_2.num_packets)
  return -VAR_0;

 VAR_9 = *VAR_4;
 VAR_8 = VAR_2.packet_read_count;

 VAR_5 = (&VAR_1.list)->next;
 while (!FUNC_1(VAR_5)) {
  VAR_7 = FUNC_0(VAR_10, VAR_5,
   VAR_9, VAR_8, &VAR_6);
  VAR_9 -= VAR_7;
  VAR_8 += VAR_7;
  VAR_10 += VAR_7;




  if (VAR_9 == 0)
   break;

  VAR_5 = VAR_5->next;
 }

 *VAR_4 = VAR_8 - VAR_2.packet_read_count;
 VAR_2.packet_read_count = VAR_8;
 return 0;
}
