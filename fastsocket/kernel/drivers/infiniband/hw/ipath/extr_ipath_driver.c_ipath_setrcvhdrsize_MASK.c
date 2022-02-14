
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ipath_devdata {int ipath_flags; unsigned int ipath_rcvhdrsize; int ipath_rcvhdrentsize; TYPE_2__* ipath_kregs; TYPE_1__* pcidev; } ;
struct TYPE_4__ {int kr_rcvhdrsize; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (char*,unsigned int,scalar_t__) ;
 int FUNC_3 (struct ipath_devdata*,int ,unsigned int) ;

int FUNC_4(struct ipath_devdata *VAR_4, unsigned VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4->ipath_flags & VAR_2) {
  if (VAR_4->ipath_rcvhdrsize != VAR_5) {
   FUNC_0(&VAR_4->pcidev->dev,
     "Error: can't set protocol header "
     "size %u, already %u\n",
     VAR_5, VAR_4->ipath_rcvhdrsize);
   VAR_6 = -VAR_0;
  } else
   FUNC_1(VAR_3, "Reuse same protocol header "
       "size %u\n", VAR_4->ipath_rcvhdrsize);
 } else if (VAR_5 > (VAR_4->ipath_rcvhdrentsize -
          (sizeof(u64) / sizeof(u32)))) {
  FUNC_2("Error: can't set protocol header size %u "
     "(> max %u)\n", VAR_5,
     VAR_4->ipath_rcvhdrentsize -
     (u32) (sizeof(u64) / sizeof(u32)));
  VAR_6 = -VAR_1;
 } else {
  VAR_4->ipath_flags |= VAR_2;
  VAR_4->ipath_rcvhdrsize = VAR_5;
  FUNC_3(VAR_4, VAR_4->ipath_kregs->kr_rcvhdrsize,
     VAR_4->ipath_rcvhdrsize);
  FUNC_1(VAR_3, "Set protocol header size to %u\n",
      VAR_4->ipath_rcvhdrsize);
 }
 return VAR_6;
}
