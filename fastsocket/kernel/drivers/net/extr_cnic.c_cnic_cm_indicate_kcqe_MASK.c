
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kcqe {int dummy; } ;
struct cnic_dev {int dummy; } ;


 int FUNC_0 (struct cnic_dev*,struct kcqe*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct kcqe *VAR_1[], u32 VAR_2)
{
 struct cnic_dev *VAR_3 = VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_3, VAR_1[VAR_4]);
}
