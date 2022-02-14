
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firedtv {int list; } ;
struct device {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int directory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct firedtv*) ;
 int VAR_3 ;
 struct firedtv* FUNC_2 (struct device*,int *,char*,int) ;
 int FUNC_3 (struct firedtv*) ;
 int FUNC_4 (struct firedtv*,struct device*) ;
 int FUNC_5 (struct firedtv*) ;
 int FUNC_6 (int ,int ,char*,int) ;
 TYPE_1__* FUNC_7 (struct device*) ;
 int FUNC_8 (struct firedtv*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_6)
{
 struct firedtv *VAR_7;
 char VAR_8[VAR_2];
 int VAR_9, VAR_10;

 VAR_9 = FUNC_6(FUNC_7(VAR_6)->directory, VAR_0,
     VAR_8, sizeof(VAR_8));

 VAR_7 = FUNC_2(VAR_6, &VAR_3, VAR_8, VAR_9 >= 0 ? VAR_9 : 0);
 if (!VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_7, VAR_6);
 if (VAR_10)
  goto fail_free;

 FUNC_11(&VAR_5);
 FUNC_9(&VAR_7->list, &VAR_4);
 FUNC_12(&VAR_5);

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10)
  goto fail;

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10)
  goto fail;

 FUNC_1(VAR_7);

 return 0;
fail:
 FUNC_11(&VAR_5);
 FUNC_10(&VAR_7->list);
 FUNC_12(&VAR_5);
 FUNC_5(VAR_7);
fail_free:
 FUNC_8(VAR_7);

 return VAR_10;
}
