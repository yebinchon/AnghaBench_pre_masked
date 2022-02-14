
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa6588_command {int result; int event_list; int instance; } ;
struct saa6588 {int data_available_for_read; int read_queue; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct saa6588*,struct saa6588_command*) ;
 struct saa6588* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static long FUNC_4(struct v4l2_subdev *VAR_3, unsigned int VAR_4, void *VAR_5)
{
 struct saa6588 *VAR_6 = FUNC_2(VAR_3);
 struct saa6588_command *VAR_7 = VAR_5;

 switch (VAR_4) {

 case 130:
  VAR_7->result = 0;
  break;

 case 131:
  VAR_6->data_available_for_read = 1;
  FUNC_3(&VAR_6->read_queue);
  VAR_7->result = 0;
  break;

 case 128:
  FUNC_1(VAR_6, VAR_7);
  break;

 case 129:
  VAR_7->result = 0;
  if (VAR_6->data_available_for_read) {
   VAR_7->result |= VAR_1 | VAR_2;
  }
  FUNC_0(VAR_7->instance, &VAR_6->read_queue, VAR_7->event_list);
  break;

 default:

  return -VAR_0;
 }
 return 0;
}
