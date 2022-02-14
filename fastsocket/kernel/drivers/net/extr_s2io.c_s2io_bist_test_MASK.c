
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
struct s2io_nic {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct s2io_nic *VAR_3, uint64_t *VAR_4)
{
 u8 VAR_5 = 0;
 int VAR_6 = 0, VAR_7 = -1;

 FUNC_1(VAR_3->pdev, VAR_0, &VAR_5);
 VAR_5 |= VAR_2;
 FUNC_2(VAR_3->pdev, VAR_0, VAR_5);

 while (VAR_6 < 20) {
  FUNC_1(VAR_3->pdev, VAR_0, &VAR_5);
  if (!(VAR_5 & VAR_2)) {
   *VAR_4 = (VAR_5 & VAR_1);
   VAR_7 = 0;
   break;
  }
  FUNC_0(100);
  VAR_6++;
 }

 return VAR_7;
}
