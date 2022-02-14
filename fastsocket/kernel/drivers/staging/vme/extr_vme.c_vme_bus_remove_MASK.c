
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_driver {int (* remove ) (struct device*,int ,int ) ;} ;
struct vme_bridge {int num; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct vme_bridge* FUNC_0 (struct device*) ;
 struct vme_driver* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct vme_bridge *VAR_2;
 struct vme_driver *VAR_3;
 int VAR_4 = -VAR_0;

 VAR_3 = FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_1);

 if(VAR_3->remove != ((void*)0)) {
  VAR_4 = VAR_3->remove(VAR_1, VAR_2->num, FUNC_3(VAR_1));
 }

 return VAR_4;
}
