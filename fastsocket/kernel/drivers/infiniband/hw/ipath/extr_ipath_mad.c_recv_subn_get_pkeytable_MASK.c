
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ipath_ibdev {int dd; } ;
struct ib_smp {int status; scalar_t__ data; int attr_mod; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (struct ib_smp*) ;
 struct ipath_ibdev* FUNC_6 (struct ib_device*) ;

__attribute__((used)) static int FUNC_7(struct ib_smp *VAR_1,
       struct ib_device *VAR_2)
{
 u32 VAR_3 = 32 * (FUNC_0(VAR_1->attr_mod) & 0xffff);
 u16 *VAR_4 = (u16 *) VAR_1->data;
 __be16 *VAR_5 = (__be16 *) VAR_1->data;



 FUNC_4(VAR_1->data, 0, sizeof(VAR_1->data));
 if (VAR_3 == 0) {
  struct ipath_ibdev *VAR_6 = FUNC_6(VAR_2);
  unsigned VAR_7, VAR_8 = FUNC_3(VAR_6->dd);

  FUNC_2(VAR_6->dd, VAR_4);

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   VAR_5[VAR_7] = FUNC_1(VAR_4[VAR_7]);
 } else
  VAR_1->status |= VAR_0;

 return FUNC_5(VAR_1);
}
