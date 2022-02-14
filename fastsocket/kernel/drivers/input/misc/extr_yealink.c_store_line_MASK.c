
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yealink_dev {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct yealink_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct yealink_dev*,int ,char const) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, const char *VAR_3, size_t VAR_4,
  int VAR_5, size_t VAR_6)
{
 struct yealink_dev *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_1);
 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_1);
  return -VAR_0;
 }

 if (VAR_6 > VAR_4)
  VAR_6 = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  FUNC_2(VAR_7, VAR_5++, VAR_3[VAR_8]);

 FUNC_3(&VAR_1);
 return VAR_4;
}
