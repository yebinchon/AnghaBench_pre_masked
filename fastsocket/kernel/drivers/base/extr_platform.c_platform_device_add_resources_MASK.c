
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {unsigned int num_resources; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int,int ) ;
 int FUNC_1 (struct resource*,struct resource*,int) ;

int FUNC_2(struct platform_device *VAR_2,
      struct resource *VAR_3, unsigned int VAR_4)
{
 struct resource *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct resource) * VAR_4, VAR_1);
 if (VAR_5) {
  FUNC_1(VAR_5, VAR_3, sizeof(struct resource) * VAR_4);
  VAR_2->resource = VAR_5;
  VAR_2->num_resources = VAR_4;
 }
 return VAR_5 ? 0 : -VAR_0;
}
