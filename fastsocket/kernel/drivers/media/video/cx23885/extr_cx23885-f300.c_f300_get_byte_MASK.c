
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,int ) ;
 int FUNC_1 (struct cx23885_dev*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(struct cx23885_dev *VAR_2)
{
 u8 VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_2, VAR_0, 0);
  FUNC_2(30);
  VAR_4 <<= 1;
  FUNC_1(VAR_2, VAR_0, 1);
  FUNC_2(30);
  VAR_4 |= FUNC_0(VAR_2, VAR_1);

 }

 return VAR_4;
}
