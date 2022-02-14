
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_blktrans_dev {int devnum; } ;
struct INFTLrecord {struct INFTLrecord* VUtable; struct INFTLrecord* PUtable; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_blktrans_dev*) ;
 int FUNC_2 (struct INFTLrecord*) ;

__attribute__((used)) static void FUNC_3(struct mtd_blktrans_dev *VAR_1)
{
 struct INFTLrecord *VAR_2 = (void *)VAR_1;

 FUNC_0(VAR_0, "INFTL: remove_dev (i=%d)\n", VAR_1->devnum);

 FUNC_1(VAR_1);

 FUNC_2(VAR_2->PUtable);
 FUNC_2(VAR_2->VUtable);
 FUNC_2(VAR_2);
}
