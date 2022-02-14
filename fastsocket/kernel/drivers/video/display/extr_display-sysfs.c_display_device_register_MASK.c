
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_driver {int (* probe ) (struct display_device*,void*) ;} ;
struct display_device {int idx; int lock; struct display_driver* driver; struct device* parent; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct display_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,struct device*,int ,struct display_device*,char*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,struct display_device*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct display_device*) ;
 struct display_device* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct display_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct display_device*,void*) ;
 scalar_t__ FUNC_14 (int) ;

struct display_device *FUNC_15(struct display_driver *VAR_5,
      struct device *VAR_6, void *VAR_7)
{
 struct display_device *VAR_8 = ((void*)0);
 int VAR_9 = -VAR_0;

 if (FUNC_14(!VAR_5))
  return FUNC_0(VAR_9);

 FUNC_11(&VAR_3);
 VAR_9 = FUNC_5(&VAR_2, VAR_1);
 FUNC_12(&VAR_3);
 if (!VAR_9)
  return FUNC_0(VAR_9);

 VAR_8 = FUNC_8(sizeof(struct display_device), VAR_1);
 if (FUNC_9(VAR_8) && FUNC_14(VAR_5->probe(VAR_8, VAR_7))) {

  FUNC_11(&VAR_3);
  VAR_9 = FUNC_4(&VAR_2, VAR_8, &VAR_8->idx);
  FUNC_12(&VAR_3);

  if (!VAR_9) {
   VAR_8->dev = FUNC_3(VAR_4, VAR_6,
           FUNC_2(0, 0), VAR_8,
           "display%d", VAR_8->idx);
   if (!FUNC_1(VAR_8->dev)) {
    VAR_8->parent = VAR_6;
    VAR_8->driver = VAR_5;
    FUNC_10(&VAR_8->lock);
    return VAR_8;
   }
   FUNC_11(&VAR_3);
   FUNC_6(&VAR_2, VAR_8->idx);
   FUNC_12(&VAR_3);
   VAR_9 = -VAR_0;
  }
 }
 FUNC_7(VAR_8);
 return FUNC_0(VAR_9);
}
