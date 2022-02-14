
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {char* inbuf; int tlet; int empty_wait; int * buffer; struct ccw_device* cdev; } ;
struct ccw_device {int handler; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct raw3215_info* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct raw3215_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct raw3215_info*) ;
 void* FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct raw3215_info*,int ,int) ;
 struct raw3215_info** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_9 (struct ccw_device *VAR_11)
{
 struct raw3215_info *VAR_12;
 int VAR_13;


 if (VAR_7[0] && (VAR_7[0] == FUNC_0(&VAR_11->dev)))
  return 0;
 VAR_12 = FUNC_4(sizeof(struct raw3215_info) +
        VAR_6, VAR_3|VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 FUNC_6(&VAR_8);
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  if (!VAR_7[VAR_13]) {
   VAR_7[VAR_13] = VAR_12;
   break;
  }
 }
 FUNC_7(&VAR_8);
 if (VAR_13 == VAR_4) {
  FUNC_3(VAR_12);
  return -VAR_0;
 }

 VAR_12->cdev = VAR_11;
 VAR_12->inbuf = (char *) VAR_12 + sizeof(struct raw3215_info);
 FUNC_5(VAR_12, 0, sizeof(struct raw3215_info));
 VAR_12->buffer = FUNC_4(VAR_5,
           VAR_3|VAR_2);
 if (VAR_12->buffer == ((void*)0)) {
  FUNC_6(&VAR_8);
  VAR_7[VAR_13] = ((void*)0);
  FUNC_7(&VAR_8);
  FUNC_3(VAR_12);
  return -VAR_1;
 }
 FUNC_2(&VAR_12->empty_wait);
 FUNC_8(&VAR_12->tlet, VAR_10, (unsigned long) VAR_12);

 FUNC_1(&VAR_11->dev, VAR_12);
 VAR_11->handler = VAR_9;

 return 0;
}
