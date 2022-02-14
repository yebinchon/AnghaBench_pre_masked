
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rt2x00_dev {int csr_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,scalar_t__*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__*,int ,unsigned int const) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_4,
          const unsigned int VAR_5, u8 *VAR_6)
{
 u16 VAR_7;

 FUNC_1(&VAR_4->csr_mutex);
 if (FUNC_0(VAR_4, &VAR_7)) {
  VAR_7 = 0;
  FUNC_6(&VAR_7, VAR_3, VAR_5);
  FUNC_6(&VAR_7, VAR_2, 1);

  FUNC_4(VAR_4, VAR_0, VAR_7);

  if (FUNC_0(VAR_4, &VAR_7))
   FUNC_3(VAR_4, VAR_0, &VAR_7);
 }

 *VAR_6 = FUNC_5(VAR_7, VAR_1);

 FUNC_2(&VAR_4->csr_mutex);
}
