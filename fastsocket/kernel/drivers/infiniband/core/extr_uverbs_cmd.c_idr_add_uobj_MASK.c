
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct ib_uobject {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct idr*,struct ib_uobject*,int *) ;
 int FUNC_1 (struct idr*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct idr *VAR_4, struct ib_uobject *VAR_5)
{
 int VAR_6;

retry:
 if (!FUNC_1(VAR_4, VAR_2))
  return -VAR_1;

 FUNC_2(&VAR_3);
 VAR_6 = FUNC_0(VAR_4, VAR_5, &VAR_5->id);
 FUNC_3(&VAR_3);

 if (VAR_6 == -VAR_0)
  goto retry;

 return VAR_6;
}
