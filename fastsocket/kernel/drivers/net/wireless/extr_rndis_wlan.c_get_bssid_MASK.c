
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct usbnet*,int ,int *,int*) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_2, u8 VAR_3[VAR_0])
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_0;
 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3, &VAR_5);

 if (VAR_4 != 0)
  FUNC_0(VAR_3, 0, VAR_0);

 return VAR_4;
}
