
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {int iucv_severed; int * path; int iucv_connected; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct mon_private* FUNC_2 (struct device*) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int *,int ,int *,int ,struct mon_private*) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int) ;
 int VAR_8 ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_9)
{
 struct mon_private *VAR_10 = FUNC_2(VAR_9);
 int VAR_11;

 if (!VAR_10)
  return 0;
 VAR_11 = -VAR_1;
 VAR_10->path = FUNC_3(VAR_4, VAR_3, VAR_2);
 if (!VAR_10->path)
  goto out;
 VAR_11 = FUNC_4(VAR_10->path, &VAR_7,
          VAR_5, ((void*)0), VAR_8, VAR_10);
 if (VAR_11) {
  FUNC_6("Connecting to the z/VM *MONITOR system service "
         "failed with rc=%i\n", VAR_11);
  goto out_path;
 }
 FUNC_7(VAR_6,
     FUNC_0(&VAR_10->iucv_connected) ||
     FUNC_0(&VAR_10->iucv_severed));
 if (FUNC_0(&VAR_10->iucv_severed))
  goto out_path;
 return 0;
out_path:
 VAR_11 = -VAR_0;
 FUNC_5(VAR_10->path);
 VAR_10->path = ((void*)0);
out:
 FUNC_1(&VAR_10->iucv_severed, 1);
 return VAR_11;
}
