
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct vnic_dev *VAR_3,
 int (*VAR_4)(struct vnic_dev *, int),
 int (*VAR_5)(struct vnic_dev *, int *),
 int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(FUNC_1());

 VAR_9 = VAR_4(VAR_3, VAR_6);
 if (VAR_9)
  return VAR_9;




 VAR_7 = VAR_2 + (VAR_1 * 2);
 do {

  VAR_9 = VAR_5(VAR_3, &VAR_8);
  if (VAR_9)
   return VAR_9;

  if (VAR_8)
   return 0;

  FUNC_2(VAR_1 / 10);

 } while (FUNC_3(VAR_7, VAR_2));

 return -VAR_0;
}
