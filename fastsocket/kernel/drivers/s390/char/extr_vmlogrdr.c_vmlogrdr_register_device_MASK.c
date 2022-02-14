
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {struct device* device; int * class_device; int minor_num; int internal_name; } ;
struct device {void (* release ) (struct device*) ;int kobj; int * driver; int parent; int * bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct vmlogrdr_priv_t*) ;
 int FUNC_5 (struct device*,int ) ;
 int * FUNC_6 (int ,struct device*,int ,struct vmlogrdr_priv_t*,char*,int ) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct device* FUNC_9 (int,int ) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(struct vmlogrdr_priv_t *VAR_9)
{
 struct device *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_9(sizeof(struct device), VAR_1);
 if (VAR_10) {
  FUNC_5(VAR_10, VAR_9->internal_name);
  VAR_10->bus = &VAR_2;
  VAR_10->parent = VAR_3;
  VAR_10->driver = &VAR_7;
  FUNC_4(VAR_10, VAR_9);







  VAR_10->release = (void (*)(struct device *))VAR_4;
 } else
  return -VAR_0;
 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11) {
  FUNC_10(VAR_10);
  return VAR_11;
 }

 VAR_11 = FUNC_11(&VAR_10->kobj, &VAR_5);
 if (VAR_11) {
  FUNC_8(VAR_10);
  return VAR_11;
 }
 VAR_9->class_device = FUNC_6(VAR_6, VAR_10,
        FUNC_1(VAR_8,
       VAR_9->minor_num),
        VAR_9, "%s", FUNC_3(VAR_10));
 if (FUNC_0(VAR_9->class_device)) {
  VAR_11 = FUNC_2(VAR_9->class_device);
  VAR_9->class_device=((void*)0);
  FUNC_12(&VAR_10->kobj, &VAR_5);
  FUNC_8(VAR_10);
  return VAR_11;
 }
 VAR_9->device = VAR_10;
 return 0;
}
