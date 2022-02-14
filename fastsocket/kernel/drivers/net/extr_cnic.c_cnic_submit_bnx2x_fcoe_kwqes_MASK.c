
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kwqe {int kwqe_op_flag; } ;
struct cnic_dev {int netdev; int flags; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_1 (int ) ;
 int FUNC_2 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_3 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_4 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_5 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_6 (struct cnic_dev*,struct kwqe**,int,int*) ;
 int FUNC_7 (struct cnic_dev*,struct kwqe**,int,int*) ;
 int FUNC_8 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_9 (struct cnic_dev*,struct kwqe*) ;
 int FUNC_10 (int ,char*,int) ;
 struct bnx2x* FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct cnic_dev *VAR_4,
     struct kwqe *VAR_5[], u32 VAR_6)
{
 struct bnx2x *VAR_7 = FUNC_11(VAR_4->netdev);
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 struct kwqe *VAR_12;

 if (!FUNC_12(VAR_0, &VAR_4->flags))
  return -VAR_1;

 if (!FUNC_0(VAR_7))
  return -VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_6; ) {
  VAR_12 = VAR_5[VAR_8];
  VAR_11 = FUNC_1(VAR_12->kwqe_op_flag);
  VAR_9 = 1;

  switch (VAR_11) {
  case 130:
   VAR_10 = FUNC_6(VAR_4, &VAR_5[VAR_8],
          VAR_6 - VAR_8, &VAR_9);
   break;
  case 129:
   VAR_10 = FUNC_7(VAR_4, &VAR_5[VAR_8],
          VAR_6 - VAR_8, &VAR_9);
   break;
  case 131:
   VAR_10 = FUNC_4(VAR_4, VAR_12);
   break;
  case 132:
   VAR_10 = FUNC_3(VAR_4, VAR_12);
   break;
  case 133:
   VAR_10 = FUNC_2(VAR_4, VAR_12);
   break;
  case 134:
   VAR_10 = FUNC_5(VAR_4, VAR_12);
   break;
  case 128:
   VAR_10 = FUNC_8(VAR_4, VAR_12);
   break;
  default:
   VAR_10 = 0;
   FUNC_10(VAR_4->netdev, "Unknown type of KWQE(0x%x)\n",
       VAR_11);
   break;
  }
  if (VAR_10 < 0) {
   FUNC_10(VAR_4->netdev, "KWQE(0x%x) failed\n",
       VAR_11);





   if (VAR_10 == -VAR_3 || VAR_10 == -VAR_1)
    FUNC_9(VAR_4, VAR_12);
  }
  VAR_8 += VAR_9;
 }
 return 0;
}
