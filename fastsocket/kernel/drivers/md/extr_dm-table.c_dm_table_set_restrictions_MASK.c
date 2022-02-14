
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {scalar_t__ discard_zeroes_data; scalar_t__ no_cluster; } ;
struct request_queue {struct queue_limits limits; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct dm_table*,int ) ;
 int FUNC_3 (struct dm_table*) ;
 scalar_t__ FUNC_4 (struct dm_table*) ;
 int FUNC_5 (struct dm_table*) ;
 int FUNC_6 (struct dm_table*) ;
 scalar_t__ FUNC_7 (struct dm_table*,unsigned int) ;
 int FUNC_8 (int ,struct request_queue*) ;
 int FUNC_9 (int ,struct request_queue*) ;
 int FUNC_10 () ;

void FUNC_11(struct dm_table *VAR_9, struct request_queue *VAR_10,
          struct queue_limits *VAR_11)
{
 unsigned VAR_12 = 0;




 VAR_10->limits = *VAR_11;

 if (VAR_11->no_cluster)
  FUNC_8(VAR_1, VAR_10);
 else
  FUNC_9(VAR_1, VAR_10);

 if (!FUNC_6(VAR_9))
  FUNC_8(VAR_2, VAR_10);
 else
  FUNC_9(VAR_2, VAR_10);

 if (FUNC_7(VAR_9, VAR_5)) {
  VAR_12 |= VAR_5;
  if (FUNC_7(VAR_9, VAR_6))
   VAR_12 |= VAR_6;
 }
 FUNC_1(VAR_10, VAR_12);

 if (!FUNC_3(VAR_9))
  VAR_10->limits.discard_zeroes_data = 0;


 if (FUNC_2(VAR_9, VAR_7))
  FUNC_9(VAR_3, VAR_10);
 else
  FUNC_8(VAR_3, VAR_10);

 FUNC_5(VAR_9);







 if (FUNC_0(VAR_10) && FUNC_2(VAR_9, VAR_8))
  FUNC_8(VAR_0, VAR_10);
 FUNC_10();
 if (FUNC_4(VAR_9))
  FUNC_9(VAR_4, VAR_10);
}
