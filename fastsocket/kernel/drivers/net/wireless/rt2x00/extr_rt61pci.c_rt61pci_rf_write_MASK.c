
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int csr_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2x00_dev*,unsigned int const,int const) ;
 int FUNC_4 (int*,int ,int const) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_5,
        const unsigned int VAR_6, const u32 VAR_7)
{
 u32 VAR_8;

 FUNC_1(&VAR_5->csr_mutex);





 if (FUNC_0(VAR_5, &VAR_8)) {
  VAR_8 = 0;
  FUNC_4(&VAR_8, VAR_4, VAR_7);
  FUNC_4(&VAR_8, VAR_3, 21);
  FUNC_4(&VAR_8, VAR_2, 0);
  FUNC_4(&VAR_8, VAR_1, 1);

  FUNC_5(VAR_5, VAR_0, VAR_8);
  FUNC_3(VAR_5, VAR_6, VAR_7);
 }

 FUNC_2(&VAR_5->csr_mutex);
}
