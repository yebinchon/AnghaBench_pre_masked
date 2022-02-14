
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int generation; int lock; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fw_ohci*) ;
 struct fw_ohci* FUNC_1 (struct fw_card*) ;
 int FUNC_2 (struct fw_ohci*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct fw_card *VAR_4,
    int VAR_5, int VAR_6)
{



 struct fw_ohci *VAR_7 = FUNC_1(VAR_4);
 unsigned long VAR_8;
 int VAR_9, VAR_10 = 0;






 FUNC_3(&VAR_7->lock, VAR_8);

 if (VAR_7->generation != VAR_6) {
  VAR_10 = -VAR_0;
  goto out;
 }






 VAR_9 = (VAR_5 & 0xffc0) == VAR_1 ? VAR_5 & 0x3f : 63;
 if (VAR_9 < 32)
  FUNC_2(VAR_7, VAR_3, 1 << VAR_9);
 else
  FUNC_2(VAR_7, VAR_2, 1 << (VAR_9 - 32));

 FUNC_0(VAR_7);
 out:
 FUNC_4(&VAR_7->lock, VAR_8);

 return VAR_10;

}
