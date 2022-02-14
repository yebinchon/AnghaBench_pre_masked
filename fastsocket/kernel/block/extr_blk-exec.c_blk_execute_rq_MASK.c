
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {char* sense; scalar_t__ errors; int * end_io_data; scalar_t__ sense_len; int ref_count; } ;
struct gendisk {int dummy; } ;
typedef int sense ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct request_queue*,struct gendisk*,struct request*,int,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct request_queue *VAR_4, struct gendisk *VAR_5,
     struct request *VAR_6, int VAR_7)
{
 FUNC_0(VAR_3);
 char VAR_8[VAR_1];
 int VAR_9 = 0;





 VAR_6->ref_count++;

 if (!VAR_6->sense) {
  FUNC_2(VAR_8, 0, sizeof(VAR_8));
  VAR_6->sense = VAR_8;
  VAR_6->sense_len = 0;
 }

 VAR_6->end_io_data = &VAR_3;
 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_2);
 FUNC_3(&VAR_3);

 if (VAR_6->errors)
  VAR_9 = -VAR_0;

 return VAR_9;
}
