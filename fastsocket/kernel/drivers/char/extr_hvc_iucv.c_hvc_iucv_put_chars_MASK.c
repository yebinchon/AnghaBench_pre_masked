
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hvc_iucv_private {int lock; } ;


 int VAR_0 ;
 struct hvc_iucv_private* FUNC_0 (int ) ;
 int FUNC_1 (struct hvc_iucv_private*,char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(uint32_t VAR_1, const char *VAR_2, int VAR_3)
{
 struct hvc_iucv_private *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 if (VAR_3 <= 0)
  return 0;

 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 FUNC_3(&VAR_4->lock);

 return VAR_5;
}
