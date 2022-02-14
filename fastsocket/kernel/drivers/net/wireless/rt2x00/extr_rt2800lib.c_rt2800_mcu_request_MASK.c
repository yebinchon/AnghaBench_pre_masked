
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rt2x00_dev {int csr_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (scalar_t__*,int ,int const) ;

void FUNC_6(struct rt2x00_dev *VAR_7,
   const u8 VAR_8, const u8 VAR_9,
   const u8 VAR_10, const u8 VAR_11)
{
 u32 VAR_12;




 if (FUNC_4(VAR_7))
  return;

 FUNC_1(&VAR_7->csr_mutex);





 if (FUNC_0(VAR_7, &VAR_12)) {
  FUNC_5(&VAR_12, VAR_4, 1);
  FUNC_5(&VAR_12, VAR_3, VAR_9);
  FUNC_5(&VAR_12, VAR_1, VAR_10);
  FUNC_5(&VAR_12, VAR_2, VAR_11);
  FUNC_3(VAR_7, VAR_0, VAR_12);

  VAR_12 = 0;
  FUNC_5(&VAR_12, VAR_6, VAR_8);
  FUNC_3(VAR_7, VAR_5, VAR_12);
 }

 FUNC_2(&VAR_7->csr_mutex);
}
