
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handler {int dummy; } ;
struct input_handle {char* name; struct input_handler* handler; struct input_dev* dev; } ;
struct input_device_id {int dummy; } ;
struct input_dev {int evbit; int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct input_handle*) ;
 int FUNC_1 (struct input_handle*) ;
 int FUNC_2 (struct input_handle*) ;
 int FUNC_3 (struct input_handle*) ;
 struct input_handle* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct input_handler *VAR_6, struct input_dev *VAR_7,
   const struct input_device_id *VAR_8)
{
 struct input_handle *VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_11 = VAR_5; VAR_11 < VAR_0; VAR_11++)
  if (FUNC_5(VAR_11, VAR_7->keybit))
   break;

 if (VAR_11 == VAR_0 && !FUNC_5(VAR_3, VAR_7->evbit))
  return -VAR_1;

 VAR_9 = FUNC_4(sizeof(struct input_handle), VAR_4);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->dev = VAR_7;
 VAR_9->handler = VAR_6;
 VAR_9->name = "kbd";

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10)
  goto err_free_handle;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  goto err_unregister_handle;

 return 0;

 err_unregister_handle:
 FUNC_2(VAR_9);
 err_free_handle:
 FUNC_3(VAR_9);
 return VAR_10;
}
