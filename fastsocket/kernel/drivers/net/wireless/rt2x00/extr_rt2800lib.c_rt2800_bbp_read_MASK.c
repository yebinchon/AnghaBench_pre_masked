
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
 scalar_t__ FUNC_0 (struct rt2x00_dev*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__*,int ,unsigned int const) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_6,
       const unsigned int VAR_7, u8 *VAR_8)
{
 u32 VAR_9;

 FUNC_1(&VAR_6->csr_mutex);
 if (FUNC_0(VAR_6, &VAR_9)) {
  VAR_9 = 0;
  FUNC_5(&VAR_9, VAR_4, VAR_7);
  FUNC_5(&VAR_9, VAR_2, 1);
  FUNC_5(&VAR_9, VAR_3, 1);
  FUNC_5(&VAR_9, VAR_1, 1);

  FUNC_3(VAR_6, VAR_0, VAR_9);

  FUNC_0(VAR_6, &VAR_9);
 }

 *VAR_8 = FUNC_4(VAR_9, VAR_5);

 FUNC_2(&VAR_6->csr_mutex);
}
