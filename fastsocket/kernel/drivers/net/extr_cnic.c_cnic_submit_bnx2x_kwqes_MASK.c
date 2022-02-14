
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kwqe {int kwqe_op_flag; } ;
struct cnic_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (struct cnic_dev*,struct kwqe**,int) ;
 int FUNC_1 (struct cnic_dev*,struct kwqe**,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct cnic_dev *VAR_4, struct kwqe *VAR_5[],
       u32 VAR_6)
{
 int VAR_7 = -VAR_2;
 u32 VAR_8;

 if (!FUNC_2(VAR_0, &VAR_4->flags))
  return -VAR_1;

 if (!VAR_6)
  return 0;

 VAR_8 = VAR_5[0]->kwqe_op_flag & VAR_3;
 switch (VAR_8) {
 case 128:
 case 130:
 case 131:
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
  break;

 case 129:
  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
  break;
 }
 return VAR_7;
}
